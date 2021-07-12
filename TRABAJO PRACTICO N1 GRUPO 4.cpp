#include <iostream>
#include <ctime>
#include <windows.h>
#include <stdlib.h>

void integrantes_grupo();                                                 //cartel grafico de los nombres de cada integrante del grupo
void nombres_alumnos();                                                   //cartel integrantes
void logo();                                                              //logo utn frsf
void tiempos();                                                           //funcion para calcular la duracion de la sesion
void menu_principal(int opcion);                                          //retorna el primer menu.
void menu_algoritmos();                                                   //retorna al menu de algoritmos (segundo menu).
void secuencia_collatz();                                                 //retorna el menu de secuencia de collatz.
void juego_construccion(int opcion);                                      //retorna a la funcion de juegos en construccion
void definicion_collatz();                                                //retorna a la deficion de collatz
void cartel_collatz();                                                    //cartel collatz
int ejecucion_collatz(int n);                                             //ejecucion del problema de collatz
void decimal_binario();                                                   //retorna al menu de decimal a binario
void definicion_binario();                                                //definicion de decimal a binario
void numero_espiral();                                                    //retorna al menu de numero espiral
unsigned long long decimal_binario_ejecucion(unsigned long long decimal); //ejecucion de numero binario a decimal
void cartel_decimal_binario_iterativo();                                  //cartel decimal a binario, version iterativa
void cartel_decimal_binario_recursivo();                                  //cartel decimal a binario, version recursivo
void binario(int decimal);                                                //funcion para resolver el calculo de conversion de decimal a binario
int decimal_binario_recursivo(int decimal);                               //funcion recusividad decimal a binario
void definicion_numero_espiral();                                         //definicion de numero en espiral
unsigned long long ejecucion_espiral(unsigned long long);                 //ejecuion espiral (se utiliza la variable de tipo "unsigned long long" para que abarque la mayor capacidad de enteros posible)
void cartel_espiral();                                                    //cartel espiral
void salida();
void despedida(); //finalizacion del programa

using namespace std;

int main()
{
	bool repite = true;
	clock();
	do{
		int opcion, opcion1, opcion2, opcion3, opcion4, opcion5;
		
		
		system("cls");
		menu_principal(opcion);
		cin >> opcion;
		system("cls");
		
		switch (opcion)
		{
		case 1:
			menu_algoritmos();
			cin >> opcion1;
			system("cls");
			break;
		case 2:
			juego_construccion(opcion);
			cin>>opcion;
			switch(opcion){
			case 9:
				repite = false;
				break;
			}
			system("cls");
			break;
		case 9:
			salida();
			cin >> opcion5;
			system("cls");
			
			break;
		}
		
		switch (opcion1)
		{
		case 1:
			secuencia_collatz();
			cin >> opcion2;
			system("cls");
			break;
		case 2:
			decimal_binario();
			cin >> opcion3;
			system("cls");
			break;
		case 3:
			numero_espiral();
			cin >> opcion4;
			break;
		case 9:
			repite = false;
			break;
		}
		switch (opcion2)
		{
		case 1:
			definicion_collatz();
			cin >> opcion2;
			switch(opcion2){
			case 9:
				repite = false;
				break;
			}
			system("cls");
			break;
		case 2:
			int n;
			cartel_collatz();
			cin >> n;
			ejecucion_collatz(n);
			cout << endl;
			cout << "Presione la tecla 9 para volver al menu principal: " << endl;
			cin >> opcion2;
			switch(opcion2){
			case 9:
				repite = false;
				break;
			}
			break;
		case 9:
			
			repite = false;
			
			break;
		}
		switch (opcion3)
		{
		case 1:
			definicion_binario();
			cin >> opcion1;
			
			system("cls");
			break;
		case 2:
			int decimal;
			cartel_decimal_binario_iterativo();
			cin >> decimal;
			decimal_binario_ejecucion(decimal);
			cout << endl
				<< "Presione la tecla 9 para volver al menu principal: " << endl;
			cin >> opcion3;
			switch(opcion3){
			case 9:
				repite = false;
				break;
			}
			break;
		case 3:
			cartel_decimal_binario_recursivo();
			decimal_binario_recursivo(decimal);
			cout << endl
				<< "Presione la tecla 9 para volver al menu principal: " << endl;
			cin >> opcion3;
			switch(opcion3){
			case 9:
				repite = false;
				break;
			}
			break;
		case 9:
			repite = false;
			break;
		}
		switch (opcion4)
		{
		case 1:
			definicion_numero_espiral();
			cin >> opcion4; //hacer el retorno al menu anterior
			switch(opcion4){
			case 9:
				repite = false;
				break;
			}
			system("cls");
			break;
		case 2:
			unsigned long long n;
			
			cartel_espiral();
			
			cin >> n;
			
			cout << "El resultado es: " << ejecucion_espiral(n) << endl;
			cout << "Presione la tecla 9 para volver al menu principal: " << endl;
			cin >> opcion4;
			switch(opcion4){
			case 9:
				repite = false;
				break;
			}
			break;
		case 9:
			repite = false;
			
			break;
		}
		switch (opcion5)
		{
		case 1:
			despedida();
			tiempos();
			return 0;
			break;
			
		case 2:
			repite = false;
			break;
		}
	}while(repite == false);
	
	return 0;
}

void menu_principal(int opcion)
{
	
	cout << " _______________________________________________________ " << endl;
	cout << "|                                                       |" << endl;
	cout << "|                    MENU PRINCIPAL                     |" << endl;
	cout << "|                                                       |" << endl;
	cout << "|-------------------------------------------------------|" << endl;
	cout << "|                                                       |" << endl;
	cout << "|1. Algoritmos Numericos                                |" << endl;
	cout << "|2. Juegos [En construccion]                            |" << endl;
	cout << "|9. Cerra la aplicacion                                 |" << endl;
	cout << "|                                                       |" << endl;
	cout << "|_______________________________________________________|" << endl;
	cout << endl;
	cout << "Ingrese la opcion: ";
	
	
}

void menu_algoritmos()
{
	
	cout << " __________________________________________________ " << endl;
	cout << "|                                                  |" << endl;
	cout << "|                MENU ALGORITMOS                   |" << endl;
	cout << "|                                                  |" << endl;
	cout << "|--------------------------------------------------|" << endl;
	cout << "|                                                  |" << endl;
	cout << "|1 - Algoritmo de Secuencia de Collatz             |" << endl;
	cout << "|                                                  |" << endl;
	cout << "|2 - Algoritmo de Conversion de Decimal a Binario  |" << endl;
	cout << "|                                                  |" << endl;
	cout << "|3 - Algoritmo de Numero Espiral                   |" << endl;
	cout << "|                                                  |" << endl;
	cout << "|9 - Volver al Menu Principal                      |" << endl;
	cout << "|__________________________________________________|" << endl;
	cout << endl;
	cout << "Ingrese una opcion para continuar: ";
	
	
}

void secuencia_collatz()
{
	
	cout << " ________________________________________________ " << endl;
	cout << "|                                                |" << endl;
	cout << "|       ALGORITMO DE SECUENCIA DE GOLLATZ        |" << endl;
	cout << "|                                                |" << endl;
	cout << "|------------------------------------------------|" << endl;
	cout << "|                                                |" << endl;
	cout << "|1 - Ver definicion                              |" << endl;
	cout << "|                                                |" << endl;
	cout << "|2 - Ejecutar                                    |" << endl;
	cout << "|                                                |" << endl;
	cout << "|9 - Volver al Menu Principal                    |" << endl;
	cout << "|________________________________________________|" << endl;
	cout << endl;
	cout << "Ingrese una opcion: ";
	
	
}
void definicion_collatz()
{
	
	cout << " ________________________________________________ " << endl;
	cout << "|                                                |" << endl;
	cout << "|      ALGORITMO DE SECUENCIA DE GOLLATZ         |" << endl;
	cout << "|                 DEFINICION                     |" << endl;
	cout << "|------------------------------------------------|" << endl;
	cout << "|                                                |" << endl;
	cout << "|   La secuencia de Collatz de un numero entero  |" << endl;
	cout << "|   se construye de la siguiente forma:          |" << endl;
	cout << "|                                                |" << endl;
	cout << "|   Si el numero es par, se lo divide por 2,     |" << endl;
	cout << "|   si es impar, se lo multiplica por 3 y        |" << endl;
	cout << "|   se le suma uno.                              |" << endl;
	cout << "|   La sucesion termina al llegar a uno.         |" << endl;
	cout << "|                                                |" << endl;
	cout << "|________________________________________________|" << endl;
	cout << endl;
	system("pause");
	cout << "Presione la tecla 9 para volver al menu principal: ";
	
	
}
int ejecucion_collatz(int n)
{
	int cont = 0, aux;
	
	aux = n;
	while (n > 1)
	{
		cont++;
		if (n % 2 == 0)
		{
			n /= 2;
		}
		else
		{
			n = (n * 3) + 1;
		}
		if (n > aux)
		{
			aux = n;
		}
	}
	cout << endl;
	cout << "Numero de pasos para que N vuelva a 1: " << cont << " " << endl
		<< "El numero mas grande que toma N durante la secuencia es: " << aux;
	return n;
}
void decimal_binario()
{
	cout << " ________________________________________________ " << endl;
	cout << "|                                                |" << endl;
	cout << "|  ALGORITMO DE CONVERSION DE DECIMAL A BINARIO  |" << endl;
	cout << "|                                                |" << endl;
	cout << "|------------------------------------------------|" << endl;
	cout << "|                                                |" << endl;
	cout << "|1 - Ver definicion                              |" << endl;
	cout << "|                                                |" << endl;
	cout << "|2 - Ejecutar con funcion iterativa              |" << endl;
	cout << "|                                                |" << endl;
	cout << "|3 - Ejecutar con funcion recursiva              |" << endl;
	cout << "|                                                |" << endl;
	cout << "|9 - Volver al Menu Principal                    |" << endl;
	cout << "|________________________________________________|" << endl;
	cout << endl;
	cout << "Ingrese una opcion para continuar: ";
	
}
void definicion_binario()
{
	cout << " ________________________________________________ " << endl;
	cout << "|                                                |" << endl;
	cout << "| ~ALGORITMO DE CONVERSION DE DECIMAL A BINARIO~ |" << endl;
	cout << "|                  ~DEFINICION~                  |" << endl;
	cout << "|------------------------------------------------|" << endl;
	cout << "|                                                |" << endl;
	cout << "|   Se divide el numero del sistema decimal      |" << endl;
	cout << "|   entre 2, cuyo resultado entero se vuelve     |" << endl;
	cout << "|   a dividir entre 2, y asi sucesivamente       |" << endl;
	cout << "|   hasta que el dividendo sea menor que         |" << endl;
	cout << "|   el divisor, 2. Es decir, cuando el numero    |" << endl;
	cout << "|   a dividir sea 1, finaliza la division.       |" << endl;
	cout << "|________________________________________________|" << endl;
	cout << endl;
	system("pause");
	cout << "Presione la tecla 9 para volver al menu principal: ";
	
}
unsigned long long decimal_binario_ejecucion(unsigned long long decimal)
{
	unsigned long long binario = 0, x = 1;
	
	while (decimal >= 1)
	{
		if (decimal % 2 == 1)
		{
			binario = binario + x;
		}
		decimal /= 2;
		x *= 10;
	}
	cout << endl;
	
	cout << "El numero convertido a binario es: " << binario << endl;
	
	return binario;
}
void binario(int decimal)
{
	if (decimal > 1)
		binario(decimal / 2);
	cout << decimal % 2;
}
int decimal_binario_recursivo(int decimal)
{
	do
	{
		cin >> decimal;
		if (decimal < 0)
		{
			cout << "El numero decimal es negativo, digite uno positivo!!" << endl;
		}
	} while (decimal < 0);
	cout << "Su numero en decimal es: " << decimal << endl;
	cout << "Su numero convertido a binario es: ";
	
	binario(decimal);
	
	return decimal;
}
void numero_espiral()
{
	system("cls");
	
	cout << " ________________________________________________ " << endl;
	cout << "|                                                |" << endl;
	cout << "|          ALGORITMO DE NUMERO ESPIRAL           |" << endl;
	cout << "|                                                |" << endl;
	cout << "|------------------------------------------------|" << endl;
	cout << "|                                                |" << endl;
	cout << "|1 - Ver definicion                              |" << endl;
	cout << "|                                                |" << endl;
	cout << "|2 - Ejecutar                                    |" << endl;
	cout << "|                                                |" << endl;
	cout << "|9 - Volver al Menu Principal                    |" << endl;
	cout << "|________________________________________________|" << endl;
	cout << endl;
	cout << "Ingrese una opcion para continuar: ";
	
}
void definicion_numero_espiral()
{
	system("cls");
	cout << " ________________________________________________ " << endl;
	cout << "|                                                |" << endl;
	cout << "|         ~ALGORITMO DE NUMERO ESPIRAL~          |" << endl;
	cout << "|                 ~DEFINICION~                   |" << endl;
	cout << "|------------------------------------------------|" << endl;
	cout << "|                                                |" << endl;
	cout << "|  Esta secuencia de numeros es muy interesante  |" << endl;
	cout << "|  y Junji decidio llamarla numeros espirales.   |" << endl;
	cout << "|  Estos numeros son de una manera muy especial, |" << endl;
	cout << "|  ya que como una espiral esta secuencia era    |" << endl;
	cout << "|  cada vez mas grande, pero trataba de alejarse |" << endl;
	cout << "|  lo menos posible del centro.                  |" << endl;
	cout << "|                                                |" << endl;
	cout << "|________________________________________________|" << endl;
	cout << endl;
	system("pause");
	cout << "Presione la tecla 9 para volver al menu principal: ";
	
}
unsigned long long ejecucion_espiral(unsigned long long n)
{
	if (n == 1)
	{
		return 1;
	}
	else
		return ((n * n) + ejecucion_espiral(n - 1));
}


void cartel_espiral()
{
	system("cls");
	cout << " ________________________________________________ " << endl;
	cout << "|                                                |" << endl;
	cout << "|         ~ALGORITMO DE NUMERO ESPIRAL~          |" << endl;
	cout << "|________________________________________________|" << endl;
	cout << endl;
	cout << "Ingrese un numero para que se ejecute el codigo: ";
}
void cartel_collatz()
{
	system("cls");
	cout << " ________________________________________________ " << endl;
	cout << "|                                                |" << endl;
	cout << "|             ~SECUENCIA DE COLLATZ~             |" << endl;
	cout << "|________________________________________________|" << endl;
	cout << endl;
	cout << "Ingrese un numero para que se ejecute el codigo: ";
}
void cartel_decimal_binario_iterativo()
{
	system("cls");
	
	cout << " ________________________________________________ " << endl;
	cout << "|                                                |" << endl;
	cout << "|         ~CONVERSION DECIMAL A BINARIO~         |" << endl;
	cout << "|              ~VERSION ITERATIVO~               |" << endl;
	cout << "|________________________________________________|" << endl;
	cout << endl;
	cout << "Ingrese un numero positivo para que se ejecute el codigo: ";
}
void cartel_decimal_binario_recursivo()
{
	
	cout << " ________________________________________________ " << endl;
	cout << "|                                                |" << endl;
	cout << "|         ~CONVERSION DECIMAL A BINARIO~         |" << endl;
	cout << "|              ~VERSION RECURSIVO~               |" << endl;
	cout << "|________________________________________________|" << endl;
	cout << endl;
	cout << "Ingrese un numero positivo para que se ejecute el codigo: ";
}

void juego_construccion(int opcion)
{
	cout << " ________________________________________________ " << endl;
	cout << "|                                                |" << endl;
	cout << "|                                                |" << endl;
	cout << "|                    vvvvvvv                     |" << endl;
	cout << "|                    (O . O)                     |" << endl;
	cout << "|          ------ooO--------Ooo------            |" << endl;
	cout << "|          |                        |            |" << endl;
	cout << "|          | Juegos en construccion!|            |" << endl;
	cout << "|          | Vuelva en otro momento |            |" << endl;
	cout << "|          |________________________|            |" << endl;
	cout << "|                                                |" << endl;
	cout << "|                                                |" << endl;
	cout << "|________________________________________________|" << endl;
	cout << endl;
	cout << "Presione la tecla 9 para volver al menu principal: ";
	
}

void salida()
{
	cout << " ________________________________________________ " << endl;
	cout << "|                                                |" << endl;
	cout << "|     ¿Estas seguro de que quieres salir?        |" << endl;
	cout << "|                                                |" << endl;
	cout << "|1 - Si, quiero salir                            |" << endl;
	cout << "|                                                |" << endl;
	cout << "|2 - No, prefiero continuar                      |" << endl;
	cout << "|________________________________________________|" << endl;
	cout << endl;
	cout << "Ingrese una opcion para continuar: ";
}

void despedida()
{
	logo();
	nombres_alumnos();
	integrantes_grupo();
	system("cls");
	
	cout << " ________________________________________________ " << endl;
	cout << "|                                                |" << endl;
	cout << "|                                                |" << endl;
	cout << "|                    vvvvvvv                     |" << endl;
	cout << "|                    (> . <)                     |" << endl;
	cout << "|          ------ooO--------Ooo------            |" << endl;
	cout << "|          |                        |            |" << endl;
	cout << "|          | QUE TENGAS UN BUEN DIA |            |" << endl;
	cout << "|          |________________________|            |" << endl;
	cout << "|                                                |" << endl;
	cout << "|                                                |" << endl;
	cout << "|________________________________________________|" << endl;
	system("pause");
}





void tiempos()
{
	system("cls");
	int tiempo, aux = 0;
	tiempo = clock() / CLK_TCK;
	aux = tiempo;
	
	if (tiempo >= 60)
	{
		tiempo /= 60;
		aux %= 10;
		cout << "Duracion de la sesion: " << tiempo << " minutos y " << aux << "segundos";
	}
	else
	{
		cout << "Duracion de la sesion: " << tiempo << " segundos";
	}
}



void nombres_alumnos()
{
	
	system("cls");
	
	cout << " ________________________________________________________ " << endl;
	cout << "|                                                        |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|                         vvvvvvv                        |" << endl;
	cout << "|                         (O . O)                        |" << endl;
	cout << "|               ------ooO--------Ooo-------              |" << endl;
	cout << "|               |                         |              |" << endl;
	cout << "|               |      ~INTEGRANTES~      |              |" << endl;
	cout << "|               |_________________________|              |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|________________________________________________________|" << endl;
	
	Sleep(4000);
}

void logo()
{
	
	cout << " ________________________________________________________ " << endl;
	cout << "|                                                        |" << endl;
	cout << "|          _____       _____       _____                 |" << endl;
	cout << "|           _____      _____      _____                  |" << endl;
	cout << "|            _____     _____     _____                   |" << endl;
	cout << "|             _____    _____    _____                    |" << endl;
	cout << "|              _____________________                     |" << endl;
	cout << "|               ___________________                      |" << endl;
	cout << "|                _________________                       |" << endl;
	cout << "|          _____________________________                 |" << endl;
	cout << "|          _____________________________                 |" << endl;
	cout << "|          _____________________________                 |" << endl;
	cout << "|          _____________________________                 |" << endl;
	cout << "|                _________________                       |" << endl;
	cout << "|               ___________________                      |" << endl;
	cout << "|              _____________________                     |" << endl;
	cout << "|             _____    _____    _____                    |" << endl;
	cout << "|            _____     _____     _____                   |" << endl;
	cout << "|           _____      _____      _____                  |" << endl;
	cout << "|          _____       _____       _____                 |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|            __  __    ______    __   __                 |" << endl;
	cout << "|            __  __    ______    ___  __                 |" << endl;
	cout << "|            __  __      __      _______                 |" << endl;
	cout << "|            ______      __      __  ___                 |" << endl;
	cout << "|            ______      __      __   __                 |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|          UNIVERSIDAD TECNOLOGICA NACIONAL              |" << endl;
	cout << "|          FACULTAD REGIONAL SANTA FE                    |" << endl;
	cout << "|________________________________________________________|" << endl;
	
	Sleep(4000);
}

void integrantes_grupo()
{
	system("cls");
	
	cout << " ________________________________________________________ " << endl;
	cout << "|                                                        |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|                         vvvvvvv                        |" << endl;
	cout << "|                         (O . O)                        |" << endl;
	cout << "|               ------ooO--------Ooo-------              |" << endl;
	cout << "|               |                         |              |" << endl;
	cout << "|               | Delarmelina, Valentino  |              |" << endl;
	cout << "|               | Contursi, Julieta Maria |              |" << endl;
	cout << "|               | Marcon, Juan Agustin    |              |" << endl;
	cout << "|               |_________________________|              |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|________________________________________________________|" << endl;
	
	Sleep(4000);
	
	system("cls");
}

