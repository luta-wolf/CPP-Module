#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat a("Denis", 1);
		std::cout << a << std::endl;
		a.decGrade();
		std::cout << a << std::endl;
		a.incGrade();
		std::cout << a << std::endl;
		a.incGrade();
		std::cout << a << std::endl;
		std::cout << "ALL OK" << std::endl;
	}
	catch (std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat a("Bob", -1);
		std::cout << a << std::endl;
		std::cout << "ALL OK" << std::endl;
	}
	catch (std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat a("Leyla", 150);
		std::cout << a << std::endl;
		a.decGrade();
		std::cout << a << std::endl;
		std::cout << "ALL OK" << std::endl;
	}
	catch (std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}

	return (0);
}
