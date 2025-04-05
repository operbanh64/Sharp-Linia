using System;
using System.Text;

class Program
{   
    static void Main()
    {
        Console.WriteLine("Linia - это программа которая выводит на экран геометрические фигуры с заданным символом.\n");
        Console.WriteLine("Выберите символ для вывода");
        ConsoleKeyInfo key = Console.ReadKey();
        Console.WriteLine($"\nСимвол: {key.KeyChar}");

        caswed:
        Console.WriteLine("Сделать произвольную фигуру?(высота и ширина будут подобраны случайным образром) (Y or N)");
        string ran_blv = Console.ReadLine(); 
        
        if (ran_blv == "Y" | ran_blv == "y")
        {  
            Console.WriteLine("Введите лимит символов:");
            int limit = Convert.ToInt32(Console.ReadLine());
            Random random = new Random(); 
            int height = 1 + random.Next(limit) % limit;
            int width = 1 + random.Next(limit) % limit;
            Console.WriteLine("");
            Draw(height, width);
        }
        else if (ran_blv == "N" | ran_blv == "n")
        {
            Console.WriteLine("Введите высоту: ");
            int height = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Введите ширину: ");
            int width = Convert.ToInt32(Console.ReadLine());
            width--;
            Console.WriteLine("");
            Draw(height, width);
        }
        else 
        {
            Console.ForegroundColor = ConsoleColor.Red;
            Console.WriteLine("ERROR: Введи Y или N");
            Console.ResetColor(); 
            goto caswed;
        }

        void Draw(int h, int w) {
            for (int i = 0; i < h; i++){
                for (int a = 0; a < w; a++) {
                    Console.Write(key.KeyChar);
                }
                Console.WriteLine(key.KeyChar);
            }
        }
    }
}






