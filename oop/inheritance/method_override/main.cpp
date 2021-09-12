#include <iostream>
 
class A {
protected:
    int value;

public:
    A(int value) : value(value) {
//		id();
	}

//private: 
    virtual void id() { std::cout << "I am a class A!\n"; }
};
 
class B : public A {

public:
    B(int value) : A(value) {
//		id();
	}
    
	void	id() { std::cout << "I am a class B!\n"; }
};

int main(void) {
    A *a = new A(6);
    a->id();
 
    B *b = new B(8);
    b->id();

	A *a2 = new B(1);
	a2->id();
 
    return 0;
}
