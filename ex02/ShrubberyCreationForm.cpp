#include "ShrubberyCreationForm.h"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("", 0, 0) {
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target) :
Form("ShrubberyCreationForm", 145, 137), _target(target) {
	std::cout << *this << " spawned" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &
shrubberyCreationForm) : Form(shrubberyCreationForm.getName(),
shrubberyCreationForm.getGradeSign(), shrubberyCreationForm.getGradeExecute()),
_target(shrubberyCreationForm._target) {
	std::cout << *this << " copy spawned" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << *this << " disappeared" << std::endl;
}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=(
ShrubberyCreationForm const & shrubberyCreationForm) {
	std::cerr << "ShrubberyCreationForm class object cannot be assigned, use copy constructor"
			  << std::endl;
	static_cast<void>(shrubberyCreationForm);
	return *this;
}

std::string const &	ShrubberyCreationForm::getTarget() const {
	return this->_target;
}

void	ShrubberyCreationForm::execute(const Bureaucrat & executor) const {
	this->beExecuted(executor);
	std::ofstream	ofs(this->_target + "_shrubbery");
	if (!ofs.is_open()) {
		std::cerr << "Error creating a file" << std::endl;
	}
	else {
		ofs <<
		"               ,@@@@@@@," << std::endl <<
		"       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl <<
		"    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl <<
		"   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl <<
		"   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl <<
		"   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl <<
		"   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl <<
		"       |o|        | |         | |" << std::endl <<
		"       |.|        | |         | |" << std::endl <<
		"    \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_" << std::endl;
	}
	ofs.close();
	std::cout << this->_target + "_shrubbery created" << std::endl;
}

std::ostream &	operator<<(std::ostream & o, ShrubberyCreationForm const &
shrubberyCreationForm) {
	o << shrubberyCreationForm.getName() << ", form signed "
	<< shrubberyCreationForm.getSigned() << ", form gradeSign "
	<< shrubberyCreationForm.getGradeSign() << ", form gradeExecute "
	<< shrubberyCreationForm.getGradeExecute() << ", form target "
	<< shrubberyCreationForm.getTarget() << ".";
	return o;
}
