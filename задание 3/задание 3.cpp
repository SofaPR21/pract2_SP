// задание 3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <locale>

using namespace std;

//Задание 3
//Создайте структуру "Car" с полями "brand" (массив символов) и "model" (массив символов). 
//Напишите программу, которая выводит информацию о машине.
struct Car
{
	char brand[50]; //марка
	char model[50]; //модель

	void info() {
		cout << "Марка: " << brand << "\nМодель: " << model;
	}
};

int main()
{
    setlocale(LC_ALL, "RUS");

	Car car = { "Toyota", "Supra" };

	car.info();
}

