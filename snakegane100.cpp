//#include<iostream>
//#include<conio.h>
//#ifdef _WIN32
//#include <Windows.h>
//#else
//#include <unistd.h>
//#endif
//#include <cstdlib>
//#include<ctime>
//using namespace std;
//bool gameover;
//const int width = 45;
//const int height = 25;
//int x, y, fx, fy,score;
//enum edirection { STOP = 0,LEFT,RIGHT,UP,DOWN };
//int tailx[100], taily[100];
//int tailn=0;
//edirection dir;
//char c;
//void setup()
//{
//	gameover = 0;
//	dir = STOP;
//	x = width / 2;
//	y = height / 2;
//	srand(time(0));
//	fx = rand() % width;
//	fy = rand() % height;
//	score = 0;
//}
//void draw()
//{
//	system("cls");
//	for (int i = 0; i < width+2; i++)
//		cout << "#";
//	cout << endl;
//	for (int j = 0; j < height; j++)
//	{
//		for (int i = 0; i < width+1; i++)
//		{
//			if (i == 0 || i == width)
//				cout << "#";
//			if (j == y && i == x)
//				cout << "O";
//			else if (j == fy && i == fx)
//				cout << "*";
//			else 
//			{
//				bool print = true;
//				for (int k = 0; k < tailn; k++)
//				{
//					if (tailx[k] == i && taily[k] == j)
//					{
//						cout << "o";
//						print = false;
//					}
//				}
//				if (print)
//					cout << " ";
//			}
//		}
//		cout << endl;
//	}
//	for (int i = 0; i < width+2; i++)
//		cout << "#";
//	cout << endl;
//	cout << "score=" << score;
//}
//void logic()
//{
//	int xp = tailx[0];
//	int yp = taily[0];
//	int x2p, y2p;
//	tailx[0] = x;
//	taily[0] = y;
//	for (int i = 1; i < tailn; i++)
//	{
//		x2p = tailx[i];
//		y2p = taily[i];
//		tailx[i] = xp;
//		taily[i] = yp;
//		xp = x2p;
//		yp = y2p;
//
//	}
//	switch (dir)
//	{
//	
//	case LEFT:
//		x--;
//		break;
//	case RIGHT:
//		x++;
//		break;
//	case UP:
//		y--;
//		break;
//	case DOWN:
//		y++;
//		break;
//	default:
//		break;
//	}
//	if (c == 'y' || c == 'Y')
//	{
//		if (x >= width)
//			x = 0;
//		else if (x < 0)
//			x = width - 1;
//		if (y >= height)
//			y = 0;
//		else if (y < 0)
//			y = height - 1;
//	}
//	if (x > width || x<0 || y>height || y < 0)
//		gameover = true;
//	for (int j = 0; j < tailn; j++)
//	{
//		if (tailx[j] == x && taily[j] == y)
//			gameover = true;
//	}
//	if (x == fx && y == fy)
//	{
//		score++;
//		tailn++;
//		srand(time(0));
//		fx = rand() % width;
//		fy = rand() % height;
//		system("color 4b");
//		Sleep(10);
//		Beep(523,500);
//	}
//}
//void input()
//{
//	if (_kbhit())
//	{
//		switch (_getch())
//		{
//		case 'w':
//			dir = UP;
//			break;
//		case 'a':
//			dir = LEFT;
//			break;
//		case 's':
//			dir = DOWN;
//			break;
//		case 'd':
//			dir = RIGHT;
//			break;
//		case 'x':
//			gameover = true;
//			break;
//		};
//	}
//
//}
//int main()
//{
//	cout << "You want a classic mode y/n";
//	cin >> c;
//	setup();
//	while (!gameover)
//	{
//		system("color b4");
//		draw();
//		input();
//		logic();
//		Sleep(10);
//	}
//	
//	return 0;
//}
