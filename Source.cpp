#include "CRATON.h"
#include"CQUESO.h"
#include "conio.h"
using namespace System;
int main() {
	srand(time(NULL));
	int posiw,posiq;
	posiw = 15 + rand() % 45;
	posiq = 1 + rand() % 19;
	CQUESO* obj = new CQUESO(posiw, posiq);
	CRATON* obj1 = new CRATON(20,12);
	while (1) {
		obj1->Pinta();
		_sleep(140);
		if (kbhit()) {
			obj->Pinta();
			obj1->Borra();
			obj1->Imprime(posiw,posiq);
		}
		else {
			obj1->Borra();
			obj1->Mueve();
		}
	}
	system("pause>0");
	return 0;
}