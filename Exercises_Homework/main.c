//
//  main.c
//  Exercises_Homework
//
//  Created by Kate Polyakova on 10/23/14.
//  Copyright (c) 2014 Kate Polyakova. All rights reserved.
//

#include <stdio.h>
#include <math.h>

float Payment_for_Phone (int A, int B, float X, float Y);
/* A - установленные в месяц минуты, за которые платится X руб
 B - минуты, затраченные в месяц абонентом
 Y - стоимость минуты за разговоры сверх установленной нормы*/
void Age_Group (float age);
int Sum_Max_and_Min (int a, int b, int c);
int Is_Sum_Positive (int x, int y, int z);
float Best_Result_of_Swimming (float u, float v, float w);
int Is_Number_Even (int number);
float Perimeter_of_Triangle (int x1, int y1, int x2, int y2, int x3, int y3);
int Is_Year_Leap (int year);

int main()

{
    Payment_for_Phone (100, 122, 200, 4.55);
    Payment_for_Phone (100, 80, 200, 4.55);
    printf("\n");
    Age_Group (4.5);
    Age_Group (14);
    Age_Group (44);
    Age_Group (72);
    printf("\n");
    Sum_Max_and_Min (247, 5, 9056);
    Sum_Max_and_Min (-57, 0, 88);
    Sum_Max_and_Min (82, -82, 82);
    printf("\n");
    Is_Sum_Positive (25, 15, -60);
    Is_Sum_Positive (0, -7, 65);
    Is_Sum_Positive (-253, 105, -360);
    printf("\n");
    Best_Result_of_Swimming ( 51.76, 51.95, 51.72);
    printf("\n");
    Is_Number_Even (-265);
    Is_Number_Even (26);
    Is_Number_Even (0);
    printf("\n");
    float Sum = Perimeter_of_Triangle (0, 1, 3, 1, 4, 2) + Perimeter_of_Triangle (6, 7, 4, 3, 3, 8);
    printf("Cуммa периметров двух треугольников равна: %.2f\n", Sum);
    printf("\n");
    Is_Year_Leap (2015);
    Is_Year_Leap (2000);
    Is_Year_Leap (1900);
    Is_Year_Leap (2016);
    
    return 0;
}

float Payment_for_Phone (int A, int B, float X, float Y)
{
    float Payment;
    
    if (B<=A)
    {
        Payment=X;
    }
    else
    {
        Payment=X+(B-A)*Y;
    }
    
    printf("За месяц использовано: %d мин\n", B);
    printf ("Плата за пользование телефоном составляет %.2f руб\n", Payment);
    
    return Payment;
}

void Age_Group (float age)
{
    if ((0<age) && (age<6))
    {
        printf("Человек в возрасте %.1f (года/лет) относится к группе дошкольник\n", age);
    }
    else if ((6<=age) && (age<17))
    {
        printf("Человек в возрасте %.0f (года/лет) относится к группе ученик\n", age);
    }
    else if ((17<=age) && (age<60))
    {
        printf("Человек в возрасте %.0f (года/лет) относится к группе работник\n", age);
    }
    else // age>=60
    {
        printf("Человек в возрасте %.0f (года/лет) относится к группе пенсионер\n", age);
    }
}
int Sum_Max_and_Min (int a, int b, int c)
{
    int Result;
    int Max;
    int Min;
    if ((a>=b) && (a>=c)) { Max=a; }
    else if ((b>=a) && (b>=c)) { Max=b; }
    else { Max=c; };
    
    if ((a<=b) && (a<=c)) { Min=a; }
    else if ((b<=a) && (b<=c)) { Min=b; }
    else { Min=c; }
    
    Result=Max+Min;
    printf("Сумма большего и меньшего из чисел:\n%d, %d, %d равна: %d\n", a, b, c, Result);
    return Result;
}
int Is_Sum_Positive (int x, int y, int z)
{
    printf("Из чисел: %d, %d, %d\n", x, y, z);
    int result;
    int Sum1 = x+y;
    int Sum2 = y+z;
    int Sum3 = x+z;
    
    if (Sum1>=0)
    {
        result = 1;
        printf("Сумма чисел %d и %d является положительной \nи равна: %d\n", x, y, Sum1);
    }
    else if (Sum2>=0)
    {
        result = 1;
        printf("Сумма чисел %d и %d является положительной \nи равна: %d\n", y, z, Sum2);
    }
    else if (Sum3>=0)
    {
        result = 1;
        printf("Сумма чисел %d и %d является положительной \nи равна: %d\n", x, z, Sum3);
    }
    else
    {
        result = 0;
        printf("Сумма любых двух чисел не является положительной \n");
    }
    
    return result;
}
float Best_Result_of_Swimming (float u, float v, float w)
{
    printf("Результаты заплыва: %.2f,\t%.2f,\t%.2f\n", u, v, w);
    float Result;
    if ((u<=v) && (u<=w)) { Result=u; }
    else if ((v<=w) && (v<=u)) { Result=v; }
    else { Result=w; }
    printf("Pезультат победителя заплыва:%.2f\n", Result);
    return Result;
}
int Is_Number_Even (int number)
{
    int result = number%2;
    if (result==0)
    {
        printf("Число %d четное\n", number);
    }
    else
    {
        printf("Число %d нечетное\n", number);
    }
    return result;
}
float Perimeter_of_Triangle (int x1, int y1, int x2, int y2, int x3, int y3)
{
    float d1 = sqrtf(powf((x2-x1),2)+powf((y2-y1),2));
    float d2 = sqrtf(powf((x3-x2),2)+powf((y3-y2),2));
    float d3 = sqrtf(powf((x3-x1),2)+powf((y3-y1),2));
    
    float Perimeter = d1+d2+d3;
    
    return Perimeter;
}
int Is_Year_Leap (int year)
{
    int result;
    int V=year%4;
    int S=year%100;
    int VS=year%400;
    
    if (V!=0) { result=0; }
    else if (S!=0) { result=1; }
    else if (VS==0) { result=1; }
    else { result=0; };
    
    /*if (VS==0) {result=1;}
     else if (S==0) {result=0;}
     else if (V==0) {result=1;}
     else {result=0;}*/
    
    if (result==1) {printf("Год %d високосный\n", year);}
    else {printf("Год %d невисокосный\n", year);}
    
    return result;
}




