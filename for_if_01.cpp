#include <iostream>
#include <conio.h>				//�ֿܼ� ���� Ű �Է� ���� �νĽ����ִ� ��� �Լ�




using namespace std;


int PlayerX = 1;
int PlayerY = 1;
char PlayerShape = 'P';									// �ƽ�Ű�ڵ�


int GoalX = 8;
int GoalY = 8;
char GoalShape = 'G';

char FloorShape = ' ';
char WallShape = '*';


int Key = 0;
int WorldMap[10][10] =
{
	{ 1,1,1,1,1,1,1,1,1,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,1,1,1,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,1,0,0,0,0,1 },
	{ 1,0,0,0,1,0,0,0,0,1 },
	{ 1,1,1,1,1,1,1,1,1,1 },
};


bool IsRunning = true;			//	ȣ��� IsRunning�� true ���� �Է�
								//	IsRunning �� true �� �������� ���� Tick���� false ��ȯ Key�� �����������μ�
								//	Tick�� ���� �ǵ��� ����.

void Input()					// void �� ��ȯ�� �Լ�, return���� x, ȣ�⹮���� ����ϱ� ����
{

	//cin >> Key;
	Key = _getch();				// enterŰ�� �ν� �����ش�.

}

void Tick()
{

	if (Key == 'w')
	{
		PlayerY--;
	}

	else if (Key == 'a')
	{
		PlayerX--;
	}

	else if (Key == 's')
	{
		PlayerY++;
	}

	else if (Key == 'd')
	{
		PlayerX++;
	}

	else if (Key == 27)					//	ESC Key�� �ƽ�Ű�ڵ� 27
	{
		
		IsRunning = false;				//	true�� 1 ���� On, false�� 0 ���� Off

	}									//	IsRunning �� true �� �������� ���� Tick���� false ��ȯ Key�� �����������μ�
										//	Tick�� ���� �ǵ��� ����.


}


void Render()
{

	system("cls");										//	�ܼ�â�� û�����ִ� ��ɾ� Ŀ���

	for (int Y = 0; Y < 10; ++Y)
	{

		for (int X = 0; X < 10; ++X)
		{

			if (PlayerX == X && PlayerY == Y)
			{
				cout << PlayerShape;
			}

			else if (GoalX == X && GoalY == Y)
			{
				cout << GoalShape;
			}

			else if (WorldMap[Y][X] == 0)
			{
				cout << FloorShape;
			}

			else if (WorldMap[Y][X] == 1)
			{
				cout << WallShape;
			}

		}

		cout << "\n";

	}

}


int main()
{

	Render();

	while (IsRunning)
	{

		Input();
		//Ű �Է�
		//cin >> Key;

		Tick();
		//Ű ó��
		//if (Key == 'w')
		//{
		//
		//}

		Render();
		//World ��ȿ�� �°� ���
		//for (int Y = 0; Y < 10; ++Y)
		//{
		//
		//	for (int X = 0; X < 10; ++X)
		//	{
		//
		//		cout << World[Y][X]
		//
		//	}
		//}
	}

	return 0;

}




//		Atomic World -> Bit World ���� -> ���ϱ�