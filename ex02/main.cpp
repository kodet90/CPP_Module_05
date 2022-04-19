#include "main.h"

int	main() {
	std::cout << "[BUREAUCRAT]" << std::endl;
	{
		try {
			Bureaucrat bureaucrat("Bill", 1);
			std::cout << bureaucrat << std::endl;
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		try {
		Bureaucrat bureaucrat("Bill", 150);
		std::cout << bureaucrat << std::endl;
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		try {
		Bureaucrat bureaucrat("Bill", 0);
		std::cout << bureaucrat << std::endl;
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		try {
		Bureaucrat bureaucrat("Bill", 151);
		std::cout << bureaucrat << std::endl;
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		try {
		Bureaucrat bureaucrat("Bill", 1);
		bureaucrat.incrementGrade();
		std::cout << bureaucrat << std::endl;
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		try {
		Bureaucrat bureaucrat("Bill", 150);
		bureaucrat.decrementGrade();
		std::cout << bureaucrat << std::endl;
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << "[RobotomyRequestForm]" << std::endl;
	{
		try
		{
			Bureaucrat bureaucrat1("Bureaucrat1", 100);
			Bureaucrat bureaucrat2("Bureaucrat2", 50);
			Bureaucrat bureaucrat3("Bureaucrat3", 25);
			RobotomyRequestForm robotomyRequestForm("Generic");

			bureaucrat1.signForm(robotomyRequestForm);
			bureaucrat2.signForm(robotomyRequestForm);
			bureaucrat3.signForm(robotomyRequestForm);
			bureaucrat1.executeForm(robotomyRequestForm);
			bureaucrat2.executeForm(robotomyRequestForm);
			bureaucrat3.executeForm(robotomyRequestForm);
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << "[PresidentialPardonForm]" << std::endl;
	{
		try
		{
			Bureaucrat bureaucrat1("Bureaucrat1", 30);
			Bureaucrat bureaucrat2("Bureaucrat2", 15);
			Bureaucrat bureaucrat3("Bureaucrat3", 1);
			PresidentialPardonForm presidentialPardonForm("Generic");

			bureaucrat1.signForm(presidentialPardonForm);
			bureaucrat2.signForm(presidentialPardonForm);
			bureaucrat3.signForm(presidentialPardonForm);
			bureaucrat1.executeForm(presidentialPardonForm);
			bureaucrat2.executeForm(presidentialPardonForm);
			bureaucrat3.executeForm(presidentialPardonForm);
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << "[ShrubberyCreationForm]" << std::endl;
	{
		try
		{
			Bureaucrat bureaucrat1("Bureaucrat1", 150);
			Bureaucrat bureaucrat2("Bureaucrat2", 140);
			Bureaucrat bureaucrat3("Bureaucrat3", 130);
			ShrubberyCreationForm shrubberyCreationForm("Generic");

			bureaucrat1.signForm(shrubberyCreationForm);
			bureaucrat2.signForm(shrubberyCreationForm);
			bureaucrat3.signForm(shrubberyCreationForm);
			bureaucrat1.executeForm(shrubberyCreationForm);
			bureaucrat2.executeForm(shrubberyCreationForm);
			bureaucrat3.executeForm(shrubberyCreationForm);
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl;

	return 0;
}