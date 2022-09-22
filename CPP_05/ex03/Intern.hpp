#ifndef CPP_INTERN_HPP
#define CPP_INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
private:
	std::string 	arrForm[3];
	Form *(Intern::*func[3])(std::string target);

	Form * newShrubbery(std::string target);
	Form * newRobotomy(std::string target);
	Form * newPresidential(std::string target);

public:
	Intern();
	~Intern();

	Form * makeForm(std::string name, std::string target);
};


#endif //CPP_INTERN_HPP
