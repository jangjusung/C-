#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <windows.h>

using namespace std;

int A[10] = { 0, };

void arr()
{
	int Arand;
	int stop = 1;
	while (stop)
	{
		Arand = rand() % 10;
		A[Arand] = 1;
		for (int i = 0; i < 10; i++)
		{
			cout << A[i];
		}
		A[Arand] = 0;
		Sleep(500);
		system("cls");
	}
}
int main()
{
	srand(unsigned(time(NULL)));
	arr();
}