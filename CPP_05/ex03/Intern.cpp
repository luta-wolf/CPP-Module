#include "Intern.hpp"

Intern::Intern()
{
	this->arrForm[0] = "shrubbery form";
	this->arrForm[1] = "robotomy form";
	this->arrForm[2] = "presidential form";

	this->func[0] = &Intern::newShrubbery;
	this->func[1] = &Intern::newRobotomy;
	this->func[2] = &Intern::newPresidential;
}

Intern::~Intern()
{
}

Form *Intern::newPresidential(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form *Intern::newShrubbery(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form *Intern::newRobotomy(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form *Intern::makeForm(std::string name, std::string target)
{
	for (int i = 0; i < 3; i++)
	{
		if (name == this->arrForm[i])
		{
			std::cout <<  "Intern creates <" << name << ">" << std::endl;
			return ((this->*func[i])(target));
		}
	}
	std::cout << "Intern cannot create form" << std::endl;
	return (NULL);
}