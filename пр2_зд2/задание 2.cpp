// пр2_зд2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <locale>

using namespace std;
//ЗАДАНИЕ 2
//Найдите наибольший элемент в каждом столбце трехмерного массива.
int main()
{
    setlocale(LC_ALL, "RUS");

    int array[3][3][3];    
    int max = 0;
    srand(time(NULL));

    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                array[x][y][z] = rand() % 90 + 10;

                cout << array[x][y][z] << ' ';
            }
            cout << "\t\t";
        }
        cout << endl;
    }
    cout << "\n";

    for (int y = 0; y < 3; y++)
    {
        for (int z = 0; z < 3; z++)
        {
            max = INT_MIN;
            for (int x = 0; x < 3; x++)
            {
                if (array[x][y][z] > max)
                {
                    max = array[x][y][z];
                }
            }
            cout << max << ' ';
        }
        cout << "\t\t";
    }
    cout << endl;
}
