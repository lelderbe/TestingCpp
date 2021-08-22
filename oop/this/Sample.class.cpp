#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(int a1, int const a2) : a1(a1), a2(a2) {
//Sample::Sample(int a1, int const a2) {
	std::cout << "Constructor called" << std::endl;
	std::cout << "a1 is: " << a1 << std::endl;
	std::cout << "this->a1 is: " << this->a1 << std::endl;
	this->a1 = a1;
	//this->a2 = a2;
	std::cout << "a1 is: " << a1 << std::endl;
	std::cout << "this->a1 is: " << this->a1 << std::endl;
	return ;
}

Sample::~Sample(void) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

void	Sample::f(void) {
	std::cout << "member function f() called" << std::endl;
	std::cout << "this->a1 is: " << this->a1 << std::endl;
	std::cout << "this->a2 is: " << this->a2 << std::endl;
	return ;
}
