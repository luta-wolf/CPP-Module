#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
Form("presidential form", 25, 5), _target(target)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & copy) : Form(copy), _target(copy._target)
{
	(*this) = copy;
}
PresidentialPardonForm &  PresidentialPardonForm::operator= (const PresidentialPardonForm & copy)
{
	if (this == &copy)
		return (*this);
	Form::operator=(copy);
	return (*this);
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	if (executor.getGrade() <= this->getGradeExec() && this->getSign() == true)
	{
		std::cout << "<" << this->_target << "> has been pardoned by Zafod Beeblebrox." << std::endl;
	}
	else if (!(this->getSign()))
		throw (RED"The Form not signed!"RESET);
	else
		throw Bureaucrat::GradeTooLowException();
}