 #pragma once
struct Comp //классы для хранения комплексных чисел
{
 
 float real;
 float imag;
 Comp sum (Comp a, Comp ai);//сумма комплексных чисел
 Comp proisv(Comp a, Comp ai);//произведение комплексных чисел
 float abc (Comp a);//модуль комплексного числа
 Comp delen(Comp a, Comp ai);//деление комплексных чисел
 float arg (Comp a);//аргумент комплексного числа
 Comp sopr(Comp a);//сопряжённое комплексного числа
 void printA (Comp a);//вывод в алгебраической форме
 void printP (Comp a);//вывод в показательной форме
 //Comp();//конструктор по умолчанию
 
};

static Comp a,ai;


void menu();//Меню
//void operations();//операции