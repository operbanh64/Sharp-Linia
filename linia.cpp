#include<iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL,"ru");
    // Переменные
    int numberSym; 
    char symbol;
    int line;
    int counter = 0;

    // Ввод данных
    cout << "Linia - это программа которая будет выводить на экран линию из символов.\n\n";
    cout << "Введите число символов:";
    cin >> numberSym;
    cout << "Какой использовать символ:";
    cin >> symbol;
    cout << "Выберете тип линии:\n 1.Вертикальная \n 2.Горизонтальная" << endl;
    cout << "Тип:";
    cin >> line;



    // Body
    switch(line)
    {
        case 1:
            while(counter <= numberSym){
                cout << symbol <<endl;
                counter++; 
            } 
        break;

        case 2:
            while(counter <= numberSym){
                cout << symbol;
                counter++;
            }
        break;
    }    
}