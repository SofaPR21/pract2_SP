// задание 4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <locale>

using namespace std;

//Задание 4
//Создайте класс "Fraction" с приватными полями "numerator" (целое число) и "denominator" 
//(целое число) и публичными методами для сложения, вычитания, умножения и деления дробей.

class Fraction
{
private:
    int numerator; //числитель
    int denominator; //знаменатель

public:

    Fraction(int n = 0, int d = 0) : numerator(n), denominator(d) {

    }

    void addition(int ch_num, int zn_num) //метод сложения дробей
    {
        if (ch_num != zn_num) //если знаменатели разные, приравниваем к общему знам
        {
            numerator *= zn_num;
            ch_num *= denominator;
            zn_num *= denominator;

            int ch_rez_summ = numerator + ch_num;
            cout << "числитель = " << ch_rez_summ << " знаменатель = " << zn_num;
        }
        else //если одинаковые, то складываем
        {
            int ch_rez_summ = numerator + ch_num;
            cout << "числитель = " << ch_rez_summ << " знаменатель = " << denominator;
        }
    }

    void subtraction(int ch_num, int zn_num) //метод вычитание дробей
    {
        if (denominator != zn_num)
        {
            numerator *= zn_num;
            ch_num *= denominator;
            zn_num *= denominator;

            int ch_rez_razn = numerator - ch_num;
            cout << "числитель = " << ch_rez_razn << " знаменатель = " << zn_num;
        }
        else
        {
            int ch_rez_razn = numerator - ch_num;
            cout << "числитель = " << ch_rez_razn << " знаменатель = " << denominator;
        }
    }

    void multiplication(int ch_num, int zn_num) //метод умножение дробей
    {
        int ch_rez_mnoj = numerator * ch_num;
        int zn_rez_mnoj = denominator * zn_num;

        cout << "числитель = " << ch_rez_mnoj << " знаменатель = " << zn_rez_mnoj;
    }

    void division(int ch_num, int zn_num) //метод деление дробей
    {
        int ch_rez_mnoj = numerator * zn_num;
        int zn_rez_mnoj = denominator * ch_num;

        cout << "числитель = " << ch_rez_mnoj << " знаменатель = " << zn_rez_mnoj;
    }
};

int main()
{
    setlocale(LC_ALL, "RUS");

    int ch1;
    int zn1;

    int ch2;
    int zn2;

    int otvet;

    cout << "введите числитель и знаменатель первой дроби (*знаменатель* enter *числитель*): \n";
        cin >> ch1;
        cin >> zn1;

    Fraction primer(ch1, zn1);

    cout << "введите числитель и знаменатель второй дроби (*знаменатель* enter *числитель*): \n";
        cin >> ch2;
        cin >> zn2;

    cout << "выберите вычисление: \n";
    cout << "1 - сложение\n" << "2 - вычитание\n" << "3 - умножение\n" << "4 - деление\n";
        cin >> otvet;

        if (otvet == 1) {
            primer.addition(ch2, zn2);
        }
        else if (otvet == 2) {
            primer.subtraction(ch2, zn2);
        }
        else if (otvet == 3) {
            primer.multiplication(ch2, zn2);
        }
        else if (otvet == 4) {
            primer.division(ch2, zn2);
        }
        else {
            cout << "вычисление выбрано не корректно!";
        }
}
