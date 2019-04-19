#include <iostream>
#include "complex.h"
#include <stdio.h>
using namespace std;

int main() 
{
 // menu();
 // operations();
Comp z;
	int N;
	FILE *F;
	setlocale(LC_ALL, "Russian");
	
	F = fopen("complex.txt", "r");
	if (!F) exit(3);

	fscanf(F, "%d", &N);
	if (N < 1) exit(2);
	
	Comp *p = new Comp[N];
	
	fscanf(F, "%f%fi", &p[0].real, &p[0].imag);
	double max = p[0].abc(p[0]);
	int pos = 0;

	for (int i = 1; i < N; ++i) {
		fscanf(F, "%f%fi", &p[i].real,&p[i].imag);
		if (p[i].abc(p[i]) > max) {
			max = p[i].abc(p[i]);
			pos = i;
		}
	}
	cout << "Комплексное число с максимальным модулем в массиве: ";
	p[pos].printA(p[pos]);

	delete p;
	fclose(F);
  return 0 ;
  
}