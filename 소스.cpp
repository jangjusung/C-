#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int A[10];
int B[10];

void arr()
{
	int count = 0;
	int Arand, Brand;
	for (int i = 0; i < 10; i++)
	{
		Arand = rand() % 10;
		A[i] = Arand;
	}

	for (int i = 0; i < 10; i++)
	{
		Brand = rand() % 10;
		B[i] = Brand;
	}
	cout << "A�迭:";
	for (int i = 0; i < 10; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl << "B�迭:";
	for (int i = 0; i < 10; i++)
	{
		cout << B[i] << " ";
	}
	for (int i = 0; i < 10; i++)
	{
		if (A[i] == B[i])
		{
			count = count + 10;
		}
	}
	cout << endl;
	cout << "�� ������ ���� ����=" << count << "%";
}
int main()
{
	srand(unsigned(time(NULL)));
	arr();
}
