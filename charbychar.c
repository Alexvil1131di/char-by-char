#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

int main()
{

	char key;
    int value;
    string nombre, contrasena;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos = {-1, 0};

	//---nombre y apellido----//

	cout << "introduzca su nombre y apellido: ";
	while(1){
		key = getch();
		value = key;

		if((value >= 97 ) && (value <= 122 ) || (value == 27 ) || (value == 13) ||
	       (value == 32 ) || (value == 8 ))
		{
			if ((value != 27) && (value != 13)){cout << key; nombre = nombre + key;}
			else if ((value == 27)||(value == 13)){break;}
			else if (value == 32){ cout << " ";}
			else if (value == 8){{SetConsoleCursorPosition(hConsole,pos);cout << " ";}}
		}

	}

	cout << "\n" << "su nombre es: " << nombre << "\n";
	nombre = "";


	//--------edad------------//

		cout << "introduzca su edad: ";

	while(1){
		key = getch();
		value = key;

		if((value >= 48 ) && (value <= 57 ) || (value == 27 ) || (value == 13) || (value == 8 ))
		{
			if ((value != 27) && (value != 13)){cout << key; nombre = nombre + key;}
			else if ((value == 27)||(value == 13)){break;}
			else if (value == 8){{SetConsoleCursorPosition(hConsole,pos);cout << " ";}}
		}

	}
	cout << "\n" << "su edad es: " << nombre << "\n";
	nombre = "";

	//------ahorros-------//


		cout << "introduzca su monto de ahorros en RD: ";

	while(1){
		key = getch();
		value = key;

		if((value >= 48 ) && (value <= 57 ) || (value == 27 ) || (value == 13) || (value == 8 ) || (value == 46))
		{
			if ((value != 27) && (value != 13)){cout << key; nombre = nombre + key;}
			else if ((value == 27) || (value == 13)){break;}
			else if (value == 8){{SetConsoleCursorPosition(hConsole,pos);cout << " ";}}

		}

	
	}
		cout << "\n" << "su monto de ahorros es de : " << nombre << "RD \n";
		nombre = "";

	//--------------password---------//

			cout << "introduzca su contrasena: ";

	while(1){
		key = getch();
		value = key;

		if((value == 27 ) || (value == 13) || (value == 8 ) || (value))
		{
			if ((value != 27) && (value != 13)){cout << "#"; nombre = nombre + key;}
			else if ((value == 27)||(value == 13)){break;}
			else if (value == 8){{SetConsoleCursorPosition(hConsole,pos);cout << " ";}}

		}

	}

		cout << "\n" << "confirme su contrasena: ";
		while(1){
		key = getch();
		value = key;

		if((value == 27 ) || (value == 13) || (value == 8 ) || (value))
		{
			if ((value != 27) && (value != 13)){cout << "#"; contrasena = contrasena + key;}
			else if ((value == 27)||(value == 13)){break;}
			else if (value == 8){{SetConsoleCursorPosition(hConsole,pos);cout << " ";}}
		}
	}

	if (nombre == contrasena) {cout <<"\n" << "contrasena correcta: "<< contrasena;}
	else {cout << "contrasena incorrecta";}

}