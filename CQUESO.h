#pragma once
#include "iostream"
using namespace std;
using namespace System;
class CQUESO
{
private:
	int q;
	int w;
	int alto, ancho;
public:
	CQUESO(int pq, int pw);
	void Pinta();
};
CQUESO::CQUESO(int pq, int pw)
{
	q = pq; w = pw;
	ancho = 18; alto = 6;
}
void CQUESO::Pinta(void) {
	Console::SetCursorPosition(q, w);
	cout << "    ___";
	Console::SetCursorPosition(q, w + 1);
	cout << "  .'o O'-._";
	Console::SetCursorPosition(q, w + 2);
	cout << " / O o_.-`|";
	Console::SetCursorPosition(q, w + 3);
	cout << "/O_.-'  O |";
	Console::SetCursorPosition(q, w + 4);
	cout << "| o   o .-`";
	Console::SetCursorPosition(q, w + 5);
	cout << "|o O_.-'";
	Console::SetCursorPosition(q, w + 6);
	cout << "'--`";
}