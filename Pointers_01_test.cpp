#include <iostream>

using namespace std;

int main()
{

	int Money = 5000;
	int* PMoney = &Money;


	cout << "������ �ּ� �� : ";
	cout << &Money << endl;

	cout << "������ ���� �� : ";
	cout << Money << endl;


	cout << "������ �ּ� �� : ";
	cout << &Money << endl;

	cout << "������ ���� �� : ";
	cout << *PMoney << endl;

	PMoney++;

	cout << "������ ������ �ּ� �� : ";
	cout << PMoney << endl;



	return 0;
}



//int i[2][2] =
//{ 1,2 }, { 3,4 };
//
//
//
//
//1 3
//
//2 4

