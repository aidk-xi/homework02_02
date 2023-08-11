#include <iostream>
#include <Windows.h>

struct account 
{

	int Number;
	std::string Name;
	long double Balance;

};

void BalanceChanging(account& person)
{
	std::cout << "Введите новый баланс: "; std::cin >> person.Balance;
}

void print(account& person)
{
	std::cout << "Ваш счет: " << person.Number << ", " << person.Name << ", " << person.Balance;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");

	account person;
	
	std::cout << "Введите номер счета: "; std::cin >> person.Number;

	std::cout << "Введите имя: "; std::cin >> person.Name;

	std::cout << "Введите баланс: "; std::cin >> person.Balance;

	BalanceChanging(person);
	print(person);

	return 0;
}


