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
	std::cout << "[FORM]" << std::endl;
	{
		try {
			Form		form("Document", 1, 1);
			std::cout << form << std::endl;
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		try {
			Form		form("Document", 150, 150);
			std::cout << form << std::endl;
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		try {
			Form		form("Document", 0, 1);
			std::cout << form << std::endl;
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		try {
			Form		form("Document", 1, 0);
			std::cout << form << std::endl;
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		try {
			Form		form("Document", 0, 0);
			std::cout << form << std::endl;
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		try {
			Form		form("Document", 151, 150);
			std::cout << form << std::endl;
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		try {
			Form		form("Document", 150, 151);
			std::cout << form << std::endl;
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		try {
			Form		form("Document", 151, 151);
			std::cout << form << std::endl;
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << "[SIGN]" << std::endl;
	{
		try
		{
			Bureaucrat bureaucrat("Bureaucrat", 50);
			Form form1("Document1", 25, 25);
			Form form2("Document2", 50, 50);
			Form form3("Document3", 75, 75);

			bureaucrat.signForm(form1);
			bureaucrat.signForm(form2);
			bureaucrat.signForm(form3);
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl;

	return 0;
}