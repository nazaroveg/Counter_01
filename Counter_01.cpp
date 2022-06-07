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
	void initial(int initialization_value)
	{

		present_value = initialization_value;
	}
	void increment()
	{
		present_value++;
	}
	void decrement()
	{
		present_value--;
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
	std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: да" << std::endl;
	std::string read;
	std::cin >> read;
	int initialValue = 1;
	if (read == "да" || read == "yes")
	{
		std::cout << "Введите начальное значение счётчика: " << std::endl;
		std::cin >> initialValue;
	}
	Counter count;
	count.initial (initialValue);

	std::cout << "Enter command (+, -, =, x): ";
	std::string command;
	std::cin >> command;

	while (command != "x") {
		if (command == "+") {
			count.increment();
		}
		else if (command == "-") {
			count.decrement();
		}
		else if (command == "=") {
			 count.print() ;
		}

		std::cout << "Enter command (+, -, =, x): ";
		std::cin >> command;
	}

	std::cout << "Good bye!" << '\n';

	


		
	return 0;
}


