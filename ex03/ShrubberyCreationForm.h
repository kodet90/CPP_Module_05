#ifndef CPP_MODULE_05_EX03_SHRUBBERYCREATIONFORM_H
#define CPP_MODULE_05_EX03_SHRUBBERYCREATIONFORM_H
#include <iostream>
#include <fstream>
#include "Form.h"

class ShrubberyCreationForm: public Form {

public:
							ShrubberyCreationForm(std::string const & target);
							ShrubberyCreationForm(ShrubberyCreationForm const &
									shrubberyCreationForm);
	virtual					~ShrubberyCreationForm();
	ShrubberyCreationForm &	operator=(ShrubberyCreationForm const &
	shrubberyCreationForm);

	std::string const &		getTarget() const;
	virtual void			execute(Bureaucrat const & executor) const;

private:
	std::string const	_target;

	ShrubberyCreationForm();

};

std::ostream &	operator<<(std::ostream & o, ShrubberyCreationForm const &
shrubberyCreationForm);

#endif //CPP_MODULE_05_EX03_SHRUBBERYCREATIONFORM_H
