#include <iostream>

int	main(void) {
	char	buf[512];

	std::cout << "Hello, world!" << std::endl;

	std::cout << "Input a word: ";
	std::cin >> buf;
	std::cout << "You entered: [" << buf << "]" << std::endl;
}
