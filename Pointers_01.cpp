#include <iostream>

using namespace std;



//void Swap(int* PA, int* PB)
//{
//	int Temp = *PA;					//	*(pointers) �Լ��� ����� ���� ����Ű�� ȭ��ǥ�� ����
//									//	
//		* PA = *PB;
//		* PB = Temp;
//}
//
//int main()
//{
//
//	int A = 10;
//	int B = 20;
//
//	Swap(&A, &B);
//
//
//
//	return 0;
//
//}

class AAcotor
{

};
int main()
{

	int A = 2;

	int* PA = &A;				

	cout << *PA << endl;


	/*int Size = 10;
	int* PA = new int[Size];

	PA[0] = 10;
	PA[9] = 90;

	cout << PA[0] << endl;
	cout << PA[9] << endl;

	delete[] PA;*/




	return 0;


}




