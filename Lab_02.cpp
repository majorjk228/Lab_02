// Лабораторная работа. Задание №2, 3 вариант.
// Используя оператор цикла, найти сумму элементов, указанных в конкретном варианте. Результат напечатать, снабдив соответствующим заголовком.
#include <iostream>
#include <windows.h> //Библиотека для русской локализации

void main()
{
    SetConsoleCP(1251);         // Ввод с консоли в кодировке 1251 для русской локализации.
    SetConsoleOutputCP(1251);   // Вывод на консоль в кодировке 1251 для русской локализации.

    int i = 1, sum = 0;

    while (i < 200)
    {
        sum += i; // Складываем нечетные числа.
        i += 2; // Переходим к следующему нечетному числу.
    }

    std::cout << "Сумма положительных нечетных чисел равна: " << sum << '\n';
}

