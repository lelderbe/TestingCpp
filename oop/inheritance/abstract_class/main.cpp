#include <iostream>
 
class A {
public:
	virtual void say() = 0;
};
 
class B : public A {

public:
	virtual void say() { std::cout << "say(): I am a class B!\n"; }
};

int main(void) {
//	A *a = new A();
//	a->say();
 
	B *b = new B();
	b->say();

	A *a2 = new B();
	a2->say();
 
    return 0;
}
