#include <iostream>
#include <conio.h>				//콘솔에 각종 키 입력 값을 인식시켜주는 헤더 함수




using namespace std;


int PlayerX = 1;
int PlayerY = 1;
char PlayerShape = 'P';									// 아스키코드


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


bool IsRunning = true;			//	호출어 IsRunning에 true 값을 입력
								//	IsRunning 에 true 값 지정해준 다음 Tick에서 false 변환 Key를 지정해줌으로서
								//	Tick이 종료 되도록 설정.

void Input()					// void 는 반환형 함수, return값이 x, 호출문으로 사용하기 좋음
{

	//cin >> Key;
	Key = _getch();				// enter키를 인식 시켜준다.

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

	else if (Key == 27)					//	ESC Key의 아스키코드 27
	{
		
		IsRunning = false;				//	true는 1 이자 On, false는 0 이자 Off

	}									//	IsRunning 에 true 값 지정해준 다음 Tick에서 false 변환 Key를 지정해줌으로서
										//	Tick이 종료 되도록 설정.


}


void Render()
{

	system("cls");										//	콘솔창을 청소해주는 명령어 커멘드

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
		//키 입력
		//cin >> Key;

		Tick();
		//키 처리
		//if (Key == 'w')
		//{
		//
		//}

		Render();
		//World 자효에 맞게 출력
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




//		Atomic World -> Bit World 저장 -> 더하기