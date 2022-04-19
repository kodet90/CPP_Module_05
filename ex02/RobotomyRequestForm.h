#ifndef CPP_MODULE_05_EX02_ROBOTOMYREQUESTFORM_H
#define CPP_MODULE_05_EX02_ROBOTOMYREQUESTFORM_H
#include <iostream>
#include "Form.h"

class RobotomyRequestForm: public Form {

public:
							RobotomyRequestForm(std::string const & target);
							RobotomyRequestForm(RobotomyRequestForm const &
									robotomyRequestForm);
	virtual					~RobotomyRequestForm();
	RobotomyRequestForm &	operator=(RobotomyRequestForm const &
									robotomyRequestForm);

	std::string const &		getTarget() const;
	virtual void			execute(Bureaucrat const & executor) const;

private:
	std::string const	_target;

	RobotomyRequestForm();

};

std::ostream &	operator<<(std::ostream & o, RobotomyRequestForm const &
robotomyRequestForm);

#endif //CPP_MODULE_05_EX02_ROBOTOMYREQUESTFORM_H
