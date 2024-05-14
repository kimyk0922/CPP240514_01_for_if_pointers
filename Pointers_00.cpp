#include <iostream>

using namespace std;



int main()									//	변수를 저장하는 함수(int , float , bool , char)에 Pointers(*)를 붙이면 그 위치 값을 저장하고
											//	그것을 변수 값에 붙일 경우 그 위치에 저장 된 값을 가리키고 표시한다.
{

	int Number = 10;						//	int = 변수에 정수를 저장하는 것

	int* PNumber = 0;						//	int* = 변수에 저장된 정수의 주소 값을 저장하는 것
											//	변수 값이 저장된 메모리의 위치(주소) 값을 알 수 있다.


	PNumber = &Number;						//	int 자료형의 주소값을 불러 오고 싶다면 변수 앞에 &를 붙인다.
											//	예시. &Number


	//PNumber++;							//	주소 값에 +1을 하면 int의 크기 값이 +4가 된다.
	//		cout << PNumber << endl;


			cout << &Number << endl;
			cout << *PNumber << endl;		//	주소 값을 불러 오는 변수 앞에 *(pointer)을 붙이면 다시 정수 값 출력
			cout << Number << endl;			//	예시. 변수 PNumber 앞에 *를 붙일 경우(*PNumber) 주소 값이 아닌 저장된 10을 출력

	return 0;

}











//	Java, C#, Python, dart
//	Computer Memory Managed Laguage
//	
//	장점 : 난이도 하락
//	단점 : 성능 하락 , 버는 돈이 적다
//
//
//	C++
//	Unmanaged Laguage
// 
//	장점 : 성능 향상
//	단점 : 난이도 상승 , 버는 돈이 많다
//
//