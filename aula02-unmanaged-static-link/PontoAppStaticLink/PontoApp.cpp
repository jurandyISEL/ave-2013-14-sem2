// PontoApp.cpp : Defines the entry point for the console application.
//

#include "Ponto.h"
#include <iostream>
#include <stdio.h>

int main(int argc, char * argv[])
{
	Ponto* p = new Ponto(5,7);
	p->Print();
	printf("p._x = %d\n", p->_x);
	free(p);
	return 0;

	/*
	Ponto p(5,7);
	p.Print();
	printf("p._x = %d\n", p._x);
	return 0;
	*/
}

