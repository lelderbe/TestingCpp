#include <string>
#include <iostream>

void	byPtr(std::string *s) {
	*s += " a new text";
}

void	byConstPtr(const std::string *s) {
	//*s += " a new text";
	std::cout << *s << std::endl;
}

void	byRef(std::string &s) {
	s += " ref: a new text";
}

void	byConstRef(const std::string &s) {
	std::cout << s << std::endl;
}

int	main(void)
{
	std::string s = "text";

	std::cout << s << std::endl;
	byPtr(&s);
	//std::cout << s << std::endl;
	byConstPtr(&s);
	byRef(s);
	byConstRef(s);
}
