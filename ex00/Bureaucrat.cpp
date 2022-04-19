#include "Bureaucrat.h"

Bureaucrat::Bureaucrat() {
}

Bureaucrat::Bureaucrat(std::string const & name, int grade) : _name(name),
_grade(grade) {
	std::cout << *this << " spawned" << std::endl;
	Bureaucrat::checkGrade();
}

Bureaucrat::Bureaucrat(Bureaucrat const & bureaucrat) : _name(bureaucrat._name),
_grade(bureaucrat._grade) {
	std::cout << *this << " copy spawned" << std::endl;
}

Bureaucrat::~Bureaucrat() {
	std::cout << *this << " disappeared" << std::endl;
}

Bureaucrat &	Bureaucrat::operator=(Bureaucrat const & bureaucrat) {
	std::cerr << "Bureaucrat class object cannot be assigned, use copy constructor"
			  << std::endl;
	static_cast<void>(bureaucrat);
	return *this;
}

std::string const &	Bureaucrat::getName() const {
	return this->_name;
}

int	Bureaucrat::getGrade() const {
	return this->_grade;
}

void	Bureaucrat::incrementGrade(int amount) {
	this->_grade -= amount;
	Bureaucrat::checkGrade();
}

void	Bureaucrat::decrementGrade(int amount) {
	this->_grade += amount;
	Bureaucrat::checkGrade();
}

Bureaucrat::GradeTooHighException::GradeTooHighException() {
}

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException
const & gradeTooHighException) {
	*this = gradeTooHighException;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {
}

Bureaucrat::GradeTooHighException &	Bureaucrat::GradeTooHighException::operator=(
GradeTooHighException const & gradeTooHighException) {
	static_cast<void>(gradeTooHighException);
	return *this;
}

char const * Bureaucrat::GradeTooHighException::what() const throw() {
	return "Exception: Grade too high";
}

Bureaucrat::GradeTooLowException::GradeTooLowException() {
}

Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException
const & gradeTooLowException) {
	*this = gradeTooLowException;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {
}

Bureaucrat::GradeTooLowException &	Bureaucrat::GradeTooLowException::operator=(
GradeTooLowException const & gradeTooLowException) {
	static_cast<void>(gradeTooLowException);
	return *this;
}

char const * Bureaucrat::GradeTooLowException::what() const throw() {
	return "Exception: Grade too low";
}

void	Bureaucrat::checkGrade() const {
		if (this->_grade < 1) {
			throw Bureaucrat::GradeTooHighException();
		}
		else if (this->_grade > 150) {
			throw Bureaucrat::GradeTooLowException();
		}
}

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & bureaucrat) {
	o << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade()
	<< ".";
	return o;
}
