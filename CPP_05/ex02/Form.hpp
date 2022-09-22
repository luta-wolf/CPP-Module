#ifndef CPP_FORM_HPP
#define CPP_FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

//теперь это абстрактный класс, нельзя создавать его объекты
class Form
{
private:
	std::string	const	_name;
	bool 				_sign;
	int const			_gradeExec;
	int const			_gradeSign;
	Form();

public:
	Form(std::string name, int gradeSign, int gradeExec);
	virtual ~Form(){};
	Form(const Form & copy);
	Form & operator= (const Form & copy);

	std::string getName() const;
	int			getGradeExec() const;
	int			getGradeSign() const;
	bool		getSign() const;

	void	beSigned(Bureaucrat & bur);

	virtual void execute(Bureaucrat const & executor) const = 0;

	class GradeTooHighException : public std::exception
	{
	public:
		GradeTooHighException(){};
		virtual ~GradeTooHighException()  throw(){};

		virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
	public:
		GradeTooLowException(){};
		virtual ~GradeTooLowException()  throw(){};

		virtual const char* what() const throw();
	};
};

std::ostream& operator<< (std::ostream &out, const Form &form);

#endif //CPP_FORM_HPP
