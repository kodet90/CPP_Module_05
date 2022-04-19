#ifndef CPP_MODULE_05_EX02_PRESIDENTIALPARDONFORM_H
#define CPP_MODULE_05_EX02_PRESIDENTIALPARDONFORM_H
#include <iostream>
#include "Form.h"

class PresidentialPardonForm: public Form {

public:
							PresidentialPardonForm(std::string const & target);
							PresidentialPardonForm(PresidentialPardonForm const &
									presidentialPardonForm);
	virtual					~PresidentialPardonForm();
	PresidentialPardonForm &	operator=(PresidentialPardonForm const &
	presidentialPardonForm);

	std::string const &		getTarget() const;
	virtual void			execute(Bureaucrat const & executor) const;

private:
	std::string const	_target;

	PresidentialPardonForm();

};

std::ostream &	operator<<(std::ostream & o, PresidentialPardonForm const &
presidentialPardonForm);

#endif //CPP_MODULE_05_EX02_PRESIDENTIALPARDONFORM_H
