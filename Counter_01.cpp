// Counter_01.cpp : 
//nazaroveg@yanddex.ru

#include <iostream>
#include <Windows.h>
#include <string>

class Counter
{
public:
	

	void print()
	{
		std::cout << "текущее значение счётчика = " << present_value << std::endl;
	}
	void initial()
	{
		present_value = create_default;
	}

	
	 void read()
	 {
		std::string read_1;
		std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: " << std::endl;
		std::cin >> read_1;
		if (read_1 == "да" || read_1 == "yes")
		{
			std::cout << "Введите начальное значение счётчика: " << std::endl;
			int number = 0;
			std::cin >> number;
			present_value = number;	
		}
		else
		{
			present_value = create_default;
		}
	 }
	 void znak(std::string read)
	 {

		 if (read == "=")
		 {
			 print();
		 }

		 if (read == "+")
		 {
			 present_value++; 
		 }

		 if (read == "-")
		 {
			 present_value--;
		 }
	 }
	 

private:

	
	int present_value = 0;  //текущее значение
	int create_default = 1;  // иниц (1)
	int initialization_value = 0;  // от пользователя

	
};




int main()
{
	setlocale(LC_ALL, "RUS"); 
	SetConsoleCP(1251);
	std::string read;
	Counter count{};

	
	count.read();
		
	do
	{
		std::cout << "Введите команду ('+', '-', '=' или 'x'): " << std::endl;
		std::cin >> read;
		count.znak(read);

	}

	while (read != "x");
	std::cout << "До свидания!";


		
	return 0;
}


