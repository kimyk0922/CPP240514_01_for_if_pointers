#include <iostream>

using namespace std;

int main()
 {

	int Room[2][2] =				//	[����][����]
	{								
		{ 1,2 }, { 3,4 }
	};

	int* PRoom = &Room[1][0];					
												
	cout << "���� �� : ";
	cout << * PRoom << endl;




	return 0;

}




