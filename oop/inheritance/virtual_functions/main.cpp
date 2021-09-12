#include "A.hpp"
#include "B.hpp"
#include <iostream>

int main(void) {
    A *a = new A();
    B *b = new B();
	A *c = new B();

	std::cout << "\033[0;33m" << "----- A *a = new A(); a->move()" << std::endl;
    a->move();
	std::cout << "----- A *a = new A(); a->hide()" << std::endl;
    a->hide();
	
	std::cout << "\033[0;35m" << "----- B *b = new B(); b->move()" << std::endl;
    b->move();
	std::cout << "----- B *b = new B(); b->hide()" << std::endl;
    b->hide();

	std::cout << "\033[0;92m" << "----- A *c = new B(); c->move()" << std::endl;
    c->move();
	std::cout << "----- A *c = new B(); c->hide()" << std::endl;
    c->hide();

	std::cout << "\033[0m";
	return (0);
}
