 #include <iostream>
int main() {
	char x;
	std::cout << "enter symbol" << std::endl;
	std::cin >> x;
	if (x >= 0 && x <= 9)
	{
		std::cout << "DIGIT" << std::endl;
	}else{
		if(x >= 'A' && x <= 'Z')
		{
			std::cout << "CAPITAL" << std::endl;
		}else
		{
			if (x >= 'a' && x <= 'z')
			{
				std::cout << "LOWERCASE" << std::endl;
			}else
			{
				std::cout << "NON-ALPHANUMERIC" << std::endl;
			}
		}
	}
	system("pause");
}