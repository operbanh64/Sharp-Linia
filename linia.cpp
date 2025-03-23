#include<iostream>
#include<ctime>
#include<string>    

int main()
{ 
    srand(time(NULL)); 
    // Настройка локали
    setlocale(LC_ALL,"ru");
    // Переменные
    char symbol;
    int height;
    int width;
    std::string random;
    int limit = 0;

    // Ввод данных
    std::cout << "Linia - это программа которая выводит на экран геометрические фигуры с заданным символом.\n\n"; 
    std::cout << "Какой использовать символ: ";
    std::cin >> symbol;
    error:
    std::cout << "Сделать произвольную фигуру?(высота и ширина будут подобраны случайным образром): ";
    std::cin >> random;
    if(random == "да"){
        std::cout << "Введите лимит символов: ";
        std::cin >> limit; 
        height = 1 + rand() % limit;
        width = 1 + rand() % limit;
        goto linkRandom;
    }else if(random == "нет"){
        std::cout << "Хорошо" << std::endl;
    }else{
        std::cout << "Неправильный Ввод.Введите да или нет" << std::endl; 
        goto error;
    }

    std::cout << "Введите высоту: ";
    std::cin >> height;
    std::cout << "Введите ширину: ";
    std::cin >> width;

    linkRandom:
    for(int i = 0; i < height; i++)
    {
        for(int a = 0; a < width; a++){
            std::cout << symbol;
        }          
        std::cout << symbol << std::endl;
    }
}