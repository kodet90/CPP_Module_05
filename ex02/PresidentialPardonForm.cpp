#include "PresidentialPardonForm.h"

PresidentialPardonForm::PresidentialPardonForm() : Form("", 0, 0) {
}

PresidentialPardonForm::PresidentialPardonForm(std::string const & target) :
Form("PresidentialPardonForm", 25, 5), _target(target) {
	std::cout << *this << " spawned" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &
presidentialPardonForm) : Form(presidentialPardonForm.getName(),
presidentialPardonForm.getGradeSign(), presidentialPardonForm.getGradeExecute()),
_target(presidentialPardonForm._target) {
	std::cout << *this << " copy spawned" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << *this << " disappeared" << std::endl;
}

PresidentialPardonForm &	PresidentialPardonForm::operator=(
PresidentialPardonForm const & presidentialPardonForm) {
	std::cerr << "PresidentialPardonForm class object cannot be assigned, use copy constructor"
			  << std::endl;
	static_cast<void>(presidentialPardonForm);
	return *this;
}

std::string const &	PresidentialPardonForm::getTarget() const {
	return this->_target;
}

void	PresidentialPardonForm::execute(const Bureaucrat & executor) const {
	this->beExecuted(executor);
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox"
	<< std::endl;
}

std::ostream &	operator<<(std::ostream & o, PresidentialPardonForm const &
presidentialPardonForm) {
	o << presidentialPardonForm.getName() << ", form signed "
	<< presidentialPardonForm.getSigned() << ", form gradeSign "
	<< presidentialPardonForm.getGradeSign() << ", form gradeExecute "
	<< presidentialPardonForm.getGradeExecute() << ", form target "
	<< presidentialPardonForm.getTarget() << ".";
	return o;
}
