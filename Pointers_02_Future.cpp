#include <iostream>

using namespace std;

int main()
 {

	int Room[2][2] =				//	[세로][가로]
	{								
		{ 1,2 }, { 3,4 }
	};

	int* PRoom = &Room[1][0];					
												
	cout << "세로 끝 : ";
	cout << * PRoom << endl;




	return 0;

}




