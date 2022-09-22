#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
	Form("shrubbery form", 145, 137), _target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & copy) : Form(copy), _target(copy._target)
{
	(*this) = copy;
}
ShrubberyCreationForm &  ShrubberyCreationForm::operator= (const ShrubberyCreationForm & copy)
{
	if (this == &copy)
		return (*this);
	Form::operator=(copy);
	return (*this);
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	std::ofstream	fout; // на запись
	std::string 	filename;
	std::string 	buf;

	if (executor.getGrade() <= this->getGradeExec() && this->getSign() == true)
	{
		buf = "\n"
			  "           *             ,\n"
			  "                       _/^\\_\n"
			  "                      <     >\n"
			  "     *                 /.-.\\         *\n"
			  "              *        `/&\\`                   *\n"
			  "                      ,@.*;@,\n"
			  "                     /_o.I %_\\    *\n"
			  "        *           (`'--:o(_@;\n"
			  "                   /`;--.,__ `')             *\n"
			  "                  ;@`o % O,*`'`&\\\n"
			  "            *    (`'--)_@ ;o %'()\\      *\n"
			  "                 /`;--._`''--._O'@;\n"
			  "                /&*,()~o`;-.,_ `\"\"`)\n"
			  "     *          /`,@ ;+& () o*`;-';\\\n"
			  "               (`\"\"--.,_0 +% @' &()\\\n"
			  "               /-.,_    ``''--....-'`)  *\n"
			  "          *    /@%;o`:;'--,.__   __.'\\\n"
			  "              ;*,&(); @ % &^;~`\"`o;@();         *\n"
			  "              /(); o^~; & ().o@*&`;&%O\\\n"
			  "        jgs   `\"=\"==\"\"==,,,.,=\"==\"===\"`\n"
			  "           __.----.(\\-''#####---...___...-----._\n"
			  "         '`         \\)_`\"\"\"\"\"`\n"
			  "                 .--' ')\n"
			  "               o(  )_-\\\n"
			  "                 `\"\"\"` `\n"
			  "\n"
			  "------------------------------------------------\n";
		filename = this->_target + "_shrubbery";
		fout.open(filename);
		fout << buf;
		fout.close();
	}
	else if (!(this->getSign()))
		throw (RED"The Form not signed!"RESET);
	else
		throw Bureaucrat::GradeTooLowException();
}