#include <iostream>

template <typename T>
void entry(T& var)
{
	while (!std::cin >> var)
	{
		std::cerr << "Invalid entry, please retry !" << std::endl;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin.clear();
	}
}

template <typename T>
void entry(T& var, const std::string& invalidEntryMsg)
{
	while (!std::cin >> var)
	{
		std::cerr << invalidEntryMsg << std::endl;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin.clear();
	}
}

int main()
{
	const std::string menuTitle{ "---------- CHOOSE AN OPTION ----------\n" };
	std::cout << menuTitle << std::endl;

	std::cout << "1 - Find out relative path of a directory" << std::endl;
	std::cout << "2 - Find out absolute path of a directory" << std::endl;

	unsigned choice = 0;
	entry(choice);

	return 0;
}