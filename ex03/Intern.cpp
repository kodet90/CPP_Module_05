#include "Intern.h"

Intern::Intern() {
	std::cout << *this << " spawned" << std::endl;
}

Intern::Intern(Intern const & intern) {
	std::cout << *this << " copy spawned" << std::endl;
	static_cast<void>(intern);
}

Intern::~Intern() {
	std::cout << *this << " disappeared" << std::endl;
}

Intern &	Intern::operator=(Intern const & intern) {
	std::cout << *this << " assigned" << std::endl;
	static_cast<void>(intern);
	return *this;
}

Form *	Intern::makeForm(std::string const & name, std::string const & target) {
	t_forms forms[] = {
		{"presidential pardon", new PresidentialPardonForm(target)},
		{"robotomy request", new RobotomyRequestForm(target)},
		{"shrubbery creation", new ShrubberyCreationForm(target)},
		{"", NULL}
	};
	Form	*result = NULL;
	for (int i = 0; forms[i].p != NULL; i++) {
		if (forms[i].name == name) {
			result = forms[i].p;
		}
		else {
			delete forms[i].p;
		}
	}
	if (result == NULL)
		std::cout << *this << " no match for " << name << std::endl;
	else
		std::cout << *this << " creates " << name << std::endl;
	return result;
}

std::ostream &	operator<<(std::ostream & o, Intern const & intern) {
	o << "Intern";
	static_cast<void>(intern);
	return o;
}
