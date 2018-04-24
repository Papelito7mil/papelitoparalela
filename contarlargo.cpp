#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;


int contarLargo(char* fichero)
{
	int cont=-2;
	ifstream fixero;
	fixero.open(fichero);
	string linea;
	while(!fixero.eof())
	{
		getline(fixero,linea);
		cont++;
	}
	return cont;
}


int main(int argc, char* argv[])
{
	cout<<"Largo Fichero: "<<contarLargo(argv[1])<<endl;
}
