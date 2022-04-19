#include "RobotomyRequestForm.h"

RobotomyRequestForm::RobotomyRequestForm() : Form("", 0, 0) {
}

RobotomyRequestForm::RobotomyRequestForm(std::string const & target) :
Form("RobotomyRequestForm", 72, 45), _target(target) {
	std::cout << *this << " spawned" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &
robotomyRequestForm) : Form(robotomyRequestForm.getName(),
robotomyRequestForm.getGradeSign(), robotomyRequestForm.getGradeExecute()),
_target(robotomyRequestForm._target) {
	std::cout << *this << " copy spawned" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << *this << " disappeared" << std::endl;
}

RobotomyRequestForm &	RobotomyRequestForm::operator=(
RobotomyRequestForm const & robotomyRequestForm) {
	std::cerr << "RobotomyRequestForm class object cannot be assigned, use copy constructor"
			  << std::endl;
	static_cast<void>(robotomyRequestForm);
	return *this;
}

std::string const &	RobotomyRequestForm::getTarget() const {
	return this->_target;
}

void	RobotomyRequestForm::execute(const Bureaucrat & executor) const {
	this->beExecuted(executor);
	std::cout << "* Drilling noise *" << std::endl;
	srand(time(NULL));
	if (rand() % 2) {
		std::cout << this->_target << " has been robotomized" << std::endl;
	}
	else
	{
		std::cout << this->_target << " robotomy failed" << std::endl;
	}
}

std::ostream &	operator<<(std::ostream & o, RobotomyRequestForm const &
robotomyRequestForm) {
	o << robotomyRequestForm.getName() << ", form signed "
	<< robotomyRequestForm.getSigned() << ", form gradeSign "
	<< robotomyRequestForm.getGradeSign() << ", form gradeExecute "
	<< robotomyRequestForm.getGradeExecute() << ", form target "
	<< robotomyRequestForm.getTarget() << ".";
	return o;
}
