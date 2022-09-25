#include "Convert.hpp"

Convert::Convert(): _dot(0), _count(0), _fl(0), _arg("") {}

Convert::~Convert() {}

Convert::Convert(const Convert &copy)
{
    *this = copy;
}

Convert & Convert::operator=(const Convert &copy)
{
    this->_dot = copy._dot;
    this->_count = copy._count;
    this->_fl = copy._fl;
    this->_arg = copy._arg;
    return (*this);
}

Convert::Convert(std::string arg) : _dot(0), _count(0), _fl(0), _arg(arg)
{
}

void Convert::converted()
{
    if (_arg.size() == 1 && isalpha(_arg[0])) //char
    {
        std::cout << "char: '" << _arg[0] << "'"<< std::endl;
        int a = (int)_arg[0];
        std::cout << "int: " << a << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(a) << "f" << std::endl;
        std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(a) << std::endl;
    }
    else if (!_arg.compare("nan") || !_arg.compare("-inf") || !_arg.compare("+inf")
             ||!_arg.compare("nanf") || !_arg.compare("-inff") || !_arg.compare("+inff"))
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        if (!_arg.compare("nan") || !_arg.compare("-inf") || !_arg.compare("+inf"))
        {
            std::cout << "float: " << _arg << "f" << std::endl;
            std::cout << "double: " << _arg << std::endl;
        }
        else
        {
            std::cout << "float: " << _arg << std::endl;
            std::cout << "double: " << _arg.erase(_arg.size() - 1) << std::endl;
        }
    }
    else if (Convert::isAlNum(_arg))
    {
        int numi;

        numi = std::stoi(_arg);
        if (!(isprint(numi)))
            std::cout << "char: Non displayable" << std::endl;
        else
            std::cout << "char: '" << static_cast<char>(numi) << "'" << std::endl;
        std::cout << "int: " << numi << std::endl;
        if (_dot)
        {
            float numf;
            numf = (std::stof(_arg));
            std::cout << "float: "  << std::fixed << std::setprecision(_count - _dot - 1 - _fl)
                << static_cast<float>(numf) << "f" << std::endl;
            double numd;
            numd = std::stod(_arg);
            std::cout << "double: " << static_cast<double>(numd) << std::endl;
        }
        else
        {
            std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(numi) << "f" << std::endl;
            std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(numi) << std::endl;
        }
    }
    else
        std::cout << "Invalid arguments!" << std::endl;
}

int Convert::isAlNum(std::string _arg)
{
    while (_arg[_count])
    {
        if (isdigit(_arg[_count]) || _arg[_count] == '.' || _arg[_count] == '+' || _arg[_count] == '-' || _arg[_count] == 'f')
        {
            if (_arg[_count] == '.')
                this->_dot = _count;
            if (_arg[_count] == 'f')
                this->_fl = 1;
            _count++;
        }
        else
            break;
    }
    if ((size_t(_count) == _arg.size()))
        return (1);
    else
        return (0);
}
