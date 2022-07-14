#include <iostream>

//Find relative path between two files or directory path
void findRelativePathMenu()
{
	std::cout << "---------- FIND RELATIVE PATH BETWEEN TWO ABSOLUTE PATH ----------\n" << std::endl;
}

template <typename T, typename Pred>
void entry(T& var, const Pred& predicat)
{
	while (!(std::cin >> var) || !predicat(var))
	{
		std::cerr << "Invalid entry, please retry !" << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}

template <typename T, typename Pred>
void entry(T& var, const Pred& predicat, const std::string& errorMsg)
{
	while (!(std::cin >> var) || !predicat(var))
	{
		std::cerr << errorMsg;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}

template <typename T>
void entry(T& var)
{
	while (!(std::cin >> var))
	{
		std::cerr << "Invalid entry, please retry !" << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}

int main()
{
	const std::string menuTitle{ "---------- CHOOSE AN OPTION ----------\n" };
	std::cout << menuTitle << std::endl;

	std::cout << "1 - Find out relative path of a directory" << std::endl;
	std::cout << "2 - Find out absolute path of a directory" << std::endl;

	std::cout << "Your choice : ";

	unsigned choice = 0;
	entry(choice, [](int i) -> bool {return i >= 1 && i <= 2; }, "Your choice : ");

	if (choice == 1)
	{
		findRelativePathMenu();
	}
	else if(choice == 2)
	{

	}

	return 0;
}