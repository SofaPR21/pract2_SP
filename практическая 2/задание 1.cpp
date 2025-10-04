// практическая 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//ВАРИАНТ 7

#include <iostream>
#include <locale>

using namespace std;

//ЗАДАНИЕ 1
//Отсортируйте одномерный массив по убыванию.
int main()
{
    setlocale(LC_ALL, "RUS");

    int array[100]; 
    int max = 0;
    srand(time(NULL)); //подключение генератора случайных чисел чисел

    cout << "не отсортированный массив: \n";
    for (int i = 0; i < 100; i++)  //заполняем массив значениями
    {
        array[i] = rand() % 90 + 10;
        cout << array[i] << " ";
    }

    for (int i = 0; i < 100 - 1; i++)
    { 
        for (int j = 0; j < 100 - i; j++)
        {
            if (array[j] < array[j + 1]) //обмениваем элементы
            {
                max = array[j];
                array[j] = array[j + 1];
                array[j + 1] = max;
            }
        }
    }

    cout << "\nОтсортированный массив по убыванию : \n";
    for (int i = 0; i < 100; i++)
    {
        cout << array[i] << " ";
    }
}

