#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <stdlib.h>

int task1()
{
    int years;
    int remainder;

    printf("введите год: ");
    scanf_s("%d", &years);

    remainder = years % 4;

    if ((remainder == 0 && years % 100 != 0) ||
        years % 400 == 0)
    {
        printf("Год %d високосный\n\n", years);
    }
    else
    {
        printf("Год %d не високосный\n\n", years);
    }

    return 0;
}

int task2()
{
    double x;
    double result;

    printf("введите x: ");
    scanf_s("%lf", &x);

    result = x <= 1 ? 0.0 : 1.0 / (x + 6);

    printf("F(x) = %.3f\n\n", result);

    return 0;
}

int dz()
{
    int hours;
    int minutes;
    int totalMinutes;
    int result;

    printf("введите часы и минут:\n");

    scanf_s("%d", &hours);
    scanf_s("%d", &minutes);

    totalMinutes = hours * 60 + minutes;

    if (totalMinutes == 0)
    {
        result = 0;
    }
    else if (totalMinutes <= 720)
    {
        result = 720 - totalMinutes;
    }
    else
    {
        result = 1440 - totalMinutes;
    }

    printf("%d\n", result);

    return 0;
}

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, ".UTF8");

    task1();
    task2();
    dz();

    return 0;
}
