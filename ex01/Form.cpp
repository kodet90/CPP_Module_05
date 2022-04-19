#include "Form.h"

Form::Form() : _gradeSign(1), _gradeExecute(1) {
}

Form::Form(std::string const & name, int gradeSign, int gradeExecute) :
_name(name), _signed(false), _gradeSign(gradeSign), _gradeExecute(gradeExecute) {
	std::cout << *this << " spawned" << std::endl;
	Form::checkGrade();
}

Form::Form(Form const & form) : _name(form._name), _signed(form._signed),
_gradeSign(form._gradeSign), _gradeExecute(form._gradeExecute) {
	std::cout << *this << " copy spawned" << std::endl;
}

Form::~Form() {
	std::cout << *this << " disappeared" << std::endl;
}

Form &	Form::operator=(Form const & form) {
	std::cerr << "Form class object cannot be assigned, use copy constructor"
			  << std::endl;
	static_cast<void>(form);
	return *this;
}

std::string const &	Form::getName() const {
	return this->_name;
}

bool	Form::getSigned() const {
	return this->_signed;
}

int	Form::getGradeSign() const {
	return this->_gradeSign;
}

int	Form::getGradeExecute() const {
	return this->_gradeExecute;
}

bool	Form::beSigned(const Bureaucrat & bureaucrat) {
	if (bureaucrat.getGrade() > this->_gradeSign) {
		this->_signed = false;
	}
	else {
		this->_signed = true;
	}
	return this->_signed;
}

Form::GradeTooHighException::GradeTooHighException() {
}

Form::GradeTooHighException::GradeTooHighException(GradeTooHighException
const & gradeTooHighException) {
	*this = gradeTooHighException;
}

Form::GradeTooHighException::~GradeTooHighException() throw() {
}

Form::GradeTooHighException &	Form::GradeTooHighException::operator=(
GradeTooHighException const & gradeTooHighException) {
	static_cast<void>(gradeTooHighException);
	return *this;
}

char const * Form::GradeTooHighException::what() const throw() {
	return "Exception: Grade too high";
}

Form::GradeTooLowException::GradeTooLowException() {
}

Form::GradeTooLowException::GradeTooLowException(GradeTooLowException
const & gradeTooLowException) {
	*this = gradeTooLowException;
}

Form::GradeTooLowException::~GradeTooLowException() throw() {
}

Form::GradeTooLowException &	Form::GradeTooLowException::operator=(
GradeTooLowException const & gradeTooLowException) {
	static_cast<void>(gradeTooLowException);
	return *this;
}

char const * Form::GradeTooLowException::what() const throw() {
	return "Exception: Grade too low";
}

void	Form::checkGrade() const {
		if (this->_gradeSign < 1 || this->_gradeExecute < 1) {
			throw Form::GradeTooHighException();
		}
		else if (this->_gradeSign > 150 || this->_gradeExecute > 150) {
			throw Form::GradeTooLowException();
		}
}

std::ostream &	operator<<(std::ostream & o, Form const & form) {
	o << form.getName() << ", form signed " << form.getSigned()
	<< ", form gradeSign " << form.getGradeSign()
	<< ", form gradeExecute " << form.getGradeExecute() << ".";
	return o;
}
