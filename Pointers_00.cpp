#include <iostream>

using namespace std;



int main()									//	������ �����ϴ� �Լ�(int , float , bool , char)�� Pointers(*)�� ���̸� �� ��ġ ���� �����ϰ�
											//	�װ��� ���� ���� ���� ��� �� ��ġ�� ���� �� ���� ����Ű�� ǥ���Ѵ�.
{

	int Number = 10;						//	int = ������ ������ �����ϴ� ��

	int* PNumber = 0;						//	int* = ������ ����� ������ �ּ� ���� �����ϴ� ��
											//	���� ���� ����� �޸��� ��ġ(�ּ�) ���� �� �� �ִ�.


	PNumber = &Number;						//	int �ڷ����� �ּҰ��� �ҷ� ���� �ʹٸ� ���� �տ� &�� ���δ�.
											//	����. &Number


	//PNumber++;							//	�ּ� ���� +1�� �ϸ� int�� ũ�� ���� +4�� �ȴ�.
	//		cout << PNumber << endl;


			cout << &Number << endl;
			cout << *PNumber << endl;		//	�ּ� ���� �ҷ� ���� ���� �տ� *(pointer)�� ���̸� �ٽ� ���� �� ���
			cout << Number << endl;			//	����. ���� PNumber �տ� *�� ���� ���(*PNumber) �ּ� ���� �ƴ� ����� 10�� ���

	return 0;

}











//	Java, C#, Python, dart
//	Computer Memory Managed Laguage
//	
//	���� : ���̵� �϶�
//	���� : ���� �϶� , ���� ���� ����
//
//
//	C++
//	Unmanaged Laguage
// 
//	���� : ���� ���
//	���� : ���̵� ��� , ���� ���� ����
//
//