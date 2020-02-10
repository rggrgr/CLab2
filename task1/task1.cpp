 #include <iostream>
int main() {
	int x;

	std::cout << "enter number" << std::endl;
	std::cin >> x;
	if (x > 0)
	{
		std::cout << "POL" << std::endl;
	}else
	{
		if (x == 0)
		{
			std::cout << "NUL" << std::endl;
		}else
		{
			std::cout << "OTR" << std::endl;
		}
	}
	system("pause");
}