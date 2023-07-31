#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include <time.h>
#include<locale>
#include <iostream>

using namespace std;

void RandMas(int *mas, int n)
{
	for (int i = 0; i < n; i++)
		mas[i] = rand() % 10;
}

void Output(int *a, int n)//вывод массива
{
	for (int i = 0; i < n; i++)
		printf("%d", a[i]);
}

void ShellSort(int *a, int n)               //по формуле Сэджвика
{	int s, i, j, t;
	for (s = n/2; s > 0; s/= 2)
		for (i = 0; i < n-s; i++)
			for (j = i; j >= 0 && a[j] > a[j + s]; j--)
			{
				t = a[j];
				a[j] = a[j + s];
				a[j + s] = t;
			}
}

//void ShellSort(int *a, int n)
//{
//	int s, i, j, t;
//	for (s = n / 2; s > 0; s /= 2)
//		for (i = s; i < n; i++)
//			for (j = i - s; j >= 0 && a[j] > a[j + s]; j -= s)
//			{
//				t = a[j];
//				a[j] = a[j + s];
//				a[j + s] = t;
//			}
//}

void main()
{
	int  *a, n;
	cout << "input kol-vo elements: ";
	cin >> n;
	a = new int[n];
	RandMas(a, n);
	Output(a, n);
	cout << endl;
	ShellSort(a,n);
	Output(a, n);
	delete[] a;
	_getch();
}