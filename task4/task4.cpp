 #include <iostream>
int main() {
	int n;
	setlocale(LC_ALL, "Russian");

	std::cout << "������� n" << std::endl;
	std::cin >> n;
	if (n >= 1 && n <= 100)
	{
		if ( (n >= 5 && n % 10 == 0) || n % 5 == 0)
		{
			std::cout << "��� " << n << " ���" << std::endl;
		}else
		{
			if (n >= 1 && n <= 4)
			{
				std::cout << "��� " << n << " ���" << std::endl;
			}else
			{
				if (n % 10 == 1)
				{
					std::cout << "��� " << n << " ���" << std::endl;
				}else
				{
					if (n % 10 >= 2 && n % 10 <= 4)
					{
						std::cout << "��� " << n << " ����" << std::endl;
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