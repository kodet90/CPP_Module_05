#include "main.h"

int	main() {
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
	return 0;
}