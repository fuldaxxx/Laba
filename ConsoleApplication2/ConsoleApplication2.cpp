﻿// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>


using namespace std;



int main()
{
    float x, y;
    setlocale(LC_ALL, "RUS");
    cout << "Введите координаты Х: ";
    cin >> x;
    cout << "Введите координату Y: ";
    cin >> y;

    //вычислим радиус-вектор точки
    float R = sqrt(x * x + y * y);
    int res = -1;
    
    
    if (x < 0 && y >= 1.5) {
        res = 5;
    }
    //формула элипса
    if ((4 * pow(y, 2) + pow(x, 2)) > 4) {
        if (x < -2 && y > 1 && y < 1.5) {
            res = 6;
        }
     

    }
    //формула круга
    else if (pow(x, 2) + pow(y, 2) > 1) {
        if (x < -1.5) {
            res = 20;
        }
      
    }
    //формула графика 3 степени 
    if (pow((x - 1), 3) > y) {
        if ((4 * pow(y, 2) + pow(x, 2)) > 4) {
            if (y < 1.5 && y > 0) {
                res = 2;
            }
        }
        else if (y > 0) {
            res = 11;

        }
    }
    //формула элипса
    if ((4 * pow(y, 2) + pow(x, 2)) > 4) {
        if (x > 0 && y < 0) {
            res = 1;
        }
    }

    if (pow(x, 2) + pow(y, 2) < 1) {
        if (x < 0 && y > 0) {
            res = 21;
        }
        else if (x > 0 && y > 0) {
            res = 14;
        }

        
        
        if (pow((x - 1), 3) > y) {
            if (x > 0 && y < 0) {
                res = 15;
            }
        }
        else if (x > 0 && y < 0) {
            res = 16;
        }
        
    }

    else if ((4 * pow(y, 2) + pow(x, 2)) < 4) {
        if (pow((x - 1), 3) < y) {
            if (x > 0 && y > 0) {

                res = 12;
            }

        }
        else if (x > 0 && y < 0) {
            res = 10;
        }
    }
    
    
    if (pow(x, 2) + pow(y, 2) < 1) {
        if (0 - (sqrt(-x)) < y) {
            if (x < 0 && y < 0) {
                res = 22;
            }
        }
        else if (x < 0 && y < 0) {
            res = 17;
        }
    }
    

    if (pow(x, 2) + pow(y, 2) > 1) {
        if ((4 * pow(y, 2) + pow(x, 2)) < 4) {
            if (0 - (sqrt(-x)) > y) {
                if (x < 0 && y < 0) {
                    res = 18;
                }
            }
            else if (x < 0 && y < 0) {
                res = 19;
            }
        }


    }

    if ((4 * pow(y, 2) + pow(x, 2)) > 4) {
        if (0 - (sqrt(-x)) > y) {
            if (pow((x - 1), 3) > y) {
                if (x < 0 && y < 0) {
                    res = 9;
                }

            }
            else if (x < 0 && y < 0) {
                res = 8;
            }
        }
        else if (x < 0 && y < 0) {
            res = 7;
        }
        if (pow((x - 1), 3) < y) {
            if (x > 0 && y > 0 && y < 1.5) {
                res = 13;
            }
        }
    }

    
    if (pow((x - 1), 3) > y) {
        if (x > 0 && y > 1.5) {
            res = 3;
        }
    }
    else if (x > 0 && y > 1.5) {
        res = 4;
    }

    if ((4 * pow(y, 2) + pow(x, 2)) == 4) {
        if (x > 0 && y == 0) {
            res = 11;
        }
    }

    if (pow(x, 2) + pow(y, 2) == 1) {
        if (pow((x - 1), 3) == y) {
            if (x > 0 && y == 0) {
                res = 16;
            }
        }
    }

    if (pow(x, 2) + pow(y, 2) == 1) {
        if ((4 * pow(y, 2) + pow(x, 2)) == 4) {
            if (x == 0 && y > 0) {
                res = 21;
            }
        }
    }

    if (pow(x, 2) + pow(y, 2) == 1) {
        if ((4 * pow(y, 2) + pow(x, 2)) == 4) {
            if (x == 0 && y < 0) {
                res = 18;
            }
        }
    }
    

    if (pow(x, 2) + pow(y, 2) == 1) {
        if (x < 0 && y == 0) {
            res = 22;
        }
    }

    if (x == 0 && y == 1.5) {
        res = 13;
    }
        
        
        
        
        
        
        
        

        
        
        
        
        
  

    cout << "Вы ввели координаты участка № " << res;
         
}   


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
