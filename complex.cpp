#include <iostream>
#include <math.h>
#include "complex.h"

using namespace std;

//Comp::Comp():
 //imag(0),real(0){}

Comp Comp::sum (Comp a, Comp ai){
 Comp c;
 c.real = a.real + ai.real;
 c.imag = a.imag + ai.imag;
 return(c); 
}
Comp  Comp::proisv(Comp a, Comp ai)
{
 Comp c;
 c.real = a.real * ai.real - a.imag * ai.imag;
 c.imag = a.real * ai.imag + a.imag * ai.real;
 return(c); 
}

float Comp::abc (Comp a)
{
 Comp c;
 float ai;
 c.real = a.real * a.real;
 c.imag = a.imag * a.imag;
 ai = sqrt(c.real + c.imag);
 return(ai); 
}

Comp Comp::delen(Comp a, Comp ai)
{
 Comp c;
 c.real = (a.real * ai.real + a.imag * ai.imag)/abc(ai);
 c.imag = (a.imag * ai.real - ai.imag * a.real)/abc(ai);
 return(c); 
}

float Comp::arg (Comp a){
  float f;
  float pi = 3.14159265;
  if ((a.real > 0) and (a.imag > 0)) f = atan(a.imag/a.real);
  if ((a.real < 0) and (a.imag > 0)) f = pi-atan(a.imag/a.real);
  if ((a.real > 0) and (a.imag > 0)) f = -pi+atan(a.imag/a.real);
  if ((a.real > 0) and (a.imag > 0)) f = atan(a.imag/a.real);
  return f;
}

Comp Comp::sopr(Comp a)
{
 Comp c;
 c.real = a.real ;
 c.imag = (-1)*a.imag;
 return(c); 
}


void Comp::printA (Comp a)
{
 char c;
 if (a.imag < 0 ) { cout << a.real << a.imag<< "i" << endl;} 
 else 
 {c ='+'; cout << a.real << c << a.imag<< "i" << endl;  }
}


void Comp::printP (Comp a) {
  cout << abc(a) << "*e^" << arg(a) << "*i" << endl;
}

void menu(){
   cout << "Введите действительную часть комплексного числа" <<endl;
  cin >> a.real;
  cout << "Введите мнимую часть комплексного числа" <<endl;
  cin >> a.imag;
  cout << "Введите действительную часть комплексного числа" <<endl;
  cin >> ai.real;
  cout << "Введите мнимую часть комплексного числа" <<endl;
  cin >> ai.imag;
  //system("cls");
   cout <<"Какую операцию выполнить?" << endl
   << "1 - сложение" << endl
   << "2 - деление" << endl
   << "3 - умножение" <<endl;
   int s = 0;
   cin >> s;
   Comp c;
   switch (s) {
case 1:
  cout<<"Вы выбрали сложение: ";
  c.printA(c.sum(a,ai));
  cout<<endl;
break;
case 2:
  cout<<"Вы выбрали деление: ";
  c.printA(c.delen(a,ai));
  cout<<endl;
break;
case 3:
  cout<<"Вы выбрали умножение: ";
  c.printA(c.proisv(a,ai));
  cout<<endl;
  break;
default:
cout <<"Not found" << endl;
}
}