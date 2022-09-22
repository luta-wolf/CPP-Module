#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat me("Denis", 20);

	Intern a;
	Form * f = a.makeForm("robotomy form", "sweet"); // стажер создал новую форму robotomy

	std:: cout << *f << std::endl; //далее тут проверяем просто что реально она существует
	me.signForm(*f);
	try
	{
		f->execute(me);
	}
	catch (const char * er)
	{
		std::cout << er << std::endl;
	}
	catch (std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}

	return (0);
}
