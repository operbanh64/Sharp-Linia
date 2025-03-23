#include<iostream>
#include<ctime>
#include<string>    
using namespace std;

int main()
{ 
    srand(time(NULL)); 
    // Настройка локали
    setlocale(LC_ALL,"ru");
    // Переменные
    char symbol;
    int height;
    int width;
    string random;
    int limit = 0;

    // Ввод данных
    cout << "Linia - это программа которая выводит на экран геометрические фигуры с заданным символом.\n\n"; 
    cout << "Какой использовать символ: ";
    cin >> symbol;
    error:
    cout << "Сделать произвольную фигуру?(высота и ширина будут подобраны случайным образром): ";
    cin >> random;
    if(random == "да"){
        cout << "Введите лимит символов: ";
        cin >> limit; 
        height = 1 + rand() % limit;
        width = 1 + rand() % limit;
        goto linkRandom;
    }else if(random == "нет"){
        cout << "Хорошо" << endl;
    }else{
        cout << "Неправильный Ввод.Введите да или нет" << endl; 
        goto error;
    }

    cout << "Введите высоту: ";
    cin >> height;
    cout << "Введите ширину: ";
    cin >> width;

    linkRandom:
    for(int i = 0; i < height; i++)
    {
        for(int a = 0; a < width; a++){
            cout << symbol;
        }          
        cout << symbol << endl;
    }
}