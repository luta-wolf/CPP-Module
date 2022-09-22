#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat me("Zhun", 135); // все подписывает и выполняет. 140 - подпишет но не выполнит. 150 - не подпишет и не выполнит
	ShrubberyCreationForm form_sh("home"); // 145-sign, 137-exec
	std::cout << form_sh << std::endl;
	me.signForm(form_sh); // подписать shrubbery
	std::cout << std::endl << form_sh << std::endl;
	try
	{
		form_sh.execute(me);
	}
	catch (const char * er)
	{
		std::cout << er << std::endl;
	}
	catch (std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}

	std::cout << "-------------------------------------------" << std::endl;
	Bureaucrat me2("Denis", 40);
	RobotomyRequestForm form_rob("Roba");//72- sign, 45 -exec
	me2.signForm(form_rob);
	std::cout << std::endl << form_rob << std::endl;
	try
	{
		form_rob.execute(me2);
	}
	catch (const char * er)
	{
		std::cout << er << std::endl;
	}
	catch (std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}

	std::cout << "------------------------------------------" << std::endl << std::endl;
	Bureaucrat me3("Denis", 30);
	PresidentialPardonForm form_pres("Chelovek");//25- sign, 5 -exec
	me3.signForm(form_pres);
	std::cout << std::endl << form_pres << std::endl;
	try
	{
		form_pres.execute(me3);
	}
	catch (const char * er)
	{
		std::cout << er << std::endl;
	}
	catch (std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}

	std::cout << "------------------------------------------" << std::endl;
	Bureaucrat me4("Leyla", 1);
	PresidentialPardonForm form_pres2("Chelovek");//25- sign, 5 -exec
	me4.signForm(form_pres2);
	me4.executeForm(form_pres2);



	return (0);
}
