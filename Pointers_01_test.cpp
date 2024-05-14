#include <iostream>

using namespace std;

int main()
{

	int Money = 5000;
	int* PMoney = &Money;


	cout << "변수의 주소 값 : ";
	cout << &Money << endl;

	cout << "변수의 저장 값 : ";
	cout << Money << endl;


	cout << "변수의 주소 값 : ";
	cout << &Money << endl;

	cout << "변수의 저장 값 : ";
	cout << *PMoney << endl;

	PMoney++;

	cout << "더해진 변수의 주소 값 : ";
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

