#ifndef CPP_MODULE_05_EX03_INTERN_H
#define CPP_MODULE_05_EX03_INTERN_H
#include <iostream>
#include "Form.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"
#include "ShrubberyCreationForm.h"

class Intern {

public:
				Intern();
				Intern(Intern const & intern);
	virtual		~Intern();
	Intern &	operator=(Intern const & intern);

	Form *		makeForm(std::string const & name, std::string const & target);

private:
	typedef struct	s_forms
	{
		std::string	name;
		Form		*p;
	}				t_forms;

};

std::ostream &	operator<<(std::ostream & o, Intern const & intern);

#endif //CPP_MODULE_05_EX03_INTERN_H
