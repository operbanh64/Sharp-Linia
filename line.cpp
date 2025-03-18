#include<iostream>
using namespace std;

int main()
{
    // Настройка локали
    setlocale(LC_ALL,"ru");
    // Переменные
    char symbol;
    int height;
    int width;

    // Ввод данных
    cout << "Linia - это программа которая выводит на экран геометрические фигуры с заданным символом.\n\n"; 
    cout << "Какой использовать символ: ";
    cin >> symbol;
    cout << "Введите высоту: ";
    cin >> height;
    cout << "Введите ширину: ";
    cin >> width;

    for(int i = 0; i < height; i++)
    {
        for(int a = 0; a < width; a++){
            cout << symbol;
        }          
        cout << symbol << endl;
    }
}