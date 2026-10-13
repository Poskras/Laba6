
#include <stdio.h>

int task1()
{
    int years;
    printf("Write years: ");
    scanf_s("%d", &years);
    printf("%d\n", years);
    int remainder = years % 4;
    printf("%d\n\n", remainder);

    if ((years % 4 == 0 && years % 100 != 0) ||
        years % 400 == 0)
    {
        printf("Year %d leap year\n", years);
    }
    else
    {
        printf("Year %d not a leap year\n\n", years);
    }
    return 0;
}
int task2()
{
    double x;
    printf("Enter x: ");
    scanf_s("%lf", &x);

    printf("F(x) = %.3f\n\n",
        x <= 1 ? 0.0 : 1.0 / (x + 6));
    return 0;
}

int dz()
{
    int hours;
    int minutes;

    printf("Enter hours and minutes:\n");

    scanf_s("%d", &hours);
    scanf_s("%d", &minutes);

    printf("%d:%d\n", hours, minutes);

    int T = hours * 60 + minutes;

    if (T == 0)
    {
        printf("0\n");
    }
    else if (T <= 720)
    {
        int a = 720 - T;
        printf("%d\n", a);
    }
    else
    {
        int b = 1440 - T;
        printf("%d\n", b);
    }
    return 0;
}

int main()
{
    task1();
    task2();
    dz();
    return 0;
}
