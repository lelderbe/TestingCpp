#include <iostream>
#include "Sample.class.hpp"

int	main(void) {
	Sample	a;

	a.var = 42;
	a.f();
	std::cout << "var is: " << a.var << std::endl;
	return (0);
}
