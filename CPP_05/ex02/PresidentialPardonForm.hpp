#ifndef CPP_PRESIDENTIALPARDONFORM_HPP
#define CPP_PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string _target;
	PresidentialPardonForm();

public:
	PresidentialPardonForm(std::string target);
	~PresidentialPardonForm(){};
	PresidentialPardonForm(const PresidentialPardonForm & copy);
	PresidentialPardonForm & operator= (const PresidentialPardonForm & copy);

	void execute(Bureaucrat const & executor) const;
};


#endif //CPP_PRESIDENTIALPARDONFORM_HPP
