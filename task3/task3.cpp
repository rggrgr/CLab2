 #include <iostream>
int main() {
	int x;
	std::cout << "enter year" << std::endl;
	std::cin >> x;
	if (x >= 1582 && x <= 2020)
	{
		if ( (x % 400 == 0 || x % 4 == 0) && x % 100 != 0)
		{
			std::cout << "LEAP" << std::endl;

		}else{
			std::cout << "NORMAL" << std::endl;
		}
	}
	else
	{
		std::cout << "ERROR" << std::endl;
	}
	system("pause");
}