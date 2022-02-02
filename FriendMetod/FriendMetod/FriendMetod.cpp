#include <iostream>
#include <Windows.h>
#include <conio.h>
class charlocus
{
	int x, y;
	char cc;
	void gotoxy(int xpos, int ypos)
	{
		COORD scrn;
		HANDLE hOutput = GetStdHandle(STD_OUTPUT_HANDLE);
		scrn.X = xpos; scrn.Y = ypos;
		SetConsoleCursorPosition(hOutput, scrn);
	}
	friend void friend_put(charlocus*, char);
	public:
		charlocus(int xi, int yi, char ci)

		{
			 x = xi; y = yi; cc = ci;
		}

		void display()
		{
			gotoxy(x, y);
			_putch(cc);
		};
};
	

void main()
{
	charlocus D(21,5, '.');
	charlocus S(11,11, '.');
	D.display(); _getch();
	S.display(); _getch();
	
}