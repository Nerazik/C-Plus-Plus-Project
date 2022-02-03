#include <iostream>
#include <Windows.h>
using namespace std;

class Point
{
	friend class Line;
	friend class Triangel;
public:
	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}
	static void gotoxy(int xpos, int ypos)
	{
		COORD position;
		HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);
		position.X = xpos;
		position.Y = ypos;
		SetConsoleCursorPosition(screen, position);
	}
	
private:
	int x, y;
};

class Line
{
public:
	Line(Point& a, Point& b) {
		Point::gotoxy(a.x, a.y);
		putchar('.');
		Point::gotoxy(b.x, b.y);
		putchar('.');
	}
};

class Triangel
{
public:
	Triangel(Point& a, Point& b, Point& c) {
		Point::gotoxy(a.x, a.y);
		putchar('.');
		Point::gotoxy(b.x, b.y);
		putchar('.');
		Point::gotoxy(c.x, c.y);
		putchar('.');
	};
};

int main()
{
	Point A(50, 18);
	Point B(37, 5);
	Point C(29, 11);
	Triangel(A, B, C);
	Sleep(3000);
	system("cls");
	Line(A, B);
	Sleep(3000);
	system("cls");
	Line(A, C);
	Sleep(3000);
	system("cls");
	Line(B, C);
	Sleep(3000);
	system("cls");
}