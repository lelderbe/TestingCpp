#include "A.hpp"
#include <iostream>

void	A::move() {
	std::cout << "A::move()" << std::endl;
	hide();
	show();
}

void	A::hide() {
	std::cout << "A::hide()" << std::endl;
}

void	A::show() {
	std::cout << "A::show()" << std::endl;
}
