 #include <iostream>
int main() {
	int n;
	setlocale(LC_ALL, "Russian");

	std::cout << "введите n" << std::endl;
	std::cin >> n;
	if (n >= 1 && n <= 100)
	{
		if ( (n >= 5 && n % 10 == 0) || n % 5 == 0)
		{
			std::cout << "Вам " << n << " лет" << std::endl;
		}else
		{
			if (n >= 1 && n <= 4)
			{
				std::cout << "Вам " << n << " год" << std::endl;
			}else
			{
				if (n % 10 == 1)
				{
					std::cout << "Вам " << n << " год" << std::endl;
				}else
				{
					if (n % 10 >= 2 && n % 10 <= 4)
					{
						std::cout << "Вам " << n << " года" << std::endl;
					}
				}
			}
		}
	}else
	{
		std::cout << "ERROR" << std::endl;
	}
	system("pause");
}