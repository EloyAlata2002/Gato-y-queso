#pragma once
#include "iostream"
using namespace std;
using namespace System;
class CRATON
{
private:
	int x;
	int y;
	int dx, dy;
	int ancho, alto;
	int dw,dpw,dq,dpq;
public:
	CRATON(int px,int py);
	void Pinta();
	void Borra();
	void Mueve();
	void Imprime(int pw,int pq);
};
CRATON::CRATON(int px, int py)
{
	x = px; y = py;
	dx = 1; dy = 1; dw = -1; dpw = 1; dq = -1; dpq = 1;
	ancho = 17; alto = 3;
}
void CRATON::Pinta(void) 
{
	Console::SetCursorPosition(x, y);
	cout << "       ____()()";
	Console::SetCursorPosition(x, y + 1);
	cout << "      /      @@";
	Console::SetCursorPosition(x, y + 2);
	cout << "`~~~~~\\_;m__m._>o";
}
void CRATON::Borra(void) 
{
	Console::SetCursorPosition(x, y);
	cout << "                 ";
	Console::SetCursorPosition(x, y + 1);
	cout << "                 ";
	Console::SetCursorPosition(x, y + 2);
	cout << "                 ";

}
void CRATON::Mueve(void)
{
	if (x + dx < 0 || x + ancho + dx>79) dx = dx * -1;
	if (y + dy < 0 || y + alto + dy>24) dy = dy * -1;
	x += dx;
	y += dy;
	
}

void CRATON::Imprime(int pw, int pq) 
{  
	if (x + ancho > pw)  x += dw;
    if (x + ancho < pw)  x += dpw;
	if (y-alto > pq) y += dq;
	if (y-alto < pq) y += dpq;
}
