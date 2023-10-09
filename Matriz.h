#pragma once
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <ctime>
#include <cmath> 
#include <iomanip>
#include <windows.h>

using namespace std;
using namespace System;

int n = 80;
int power = 3;
int* arreglo = new int[n];
float matriz[4][4];
float vectorinicial[4][1];
float primeraprob[4][1];
float diados[4][4];
float segundaprob[4][1];
float diatres[4][4];
float terceraprob[4][1];
float diacuatro[4][4];
float cuartaprob[4][1];
int contN = 0;
int contPN = 0;
int contPS = 0;
int contS = 0;// DE n CLIMAS
int NaN = 0; int NaPN = 0; int NaPS = 0; int NaS = 0;
int PNaN = 0; int PNaPN = 0; int PNaPS = 0; int PNaS = 0;
int PSaN = 0; int PSaPN = 0; int PSaPS = 0; int PSaS = 0;
int SaN = 0; int SaPN = 0; int SaPS = 0; int SaS = 0;



void asignar() {//asignar numeros en el arreglo
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		arreglo[i] = rand() % 4 + 1;
	}
}

void imprimir() {//imprimir el arreglo con letras
	Console::BackgroundColor = ConsoleColor::Red;
	cout << "BASE DE DATOS CLIMATICOS:";
	Console::BackgroundColor = ConsoleColor::Black;
	cout << "\n El clima de los " << n << " dias anteriores fue:" << endl;
	cout << endl;
	Console::BackgroundColor = ConsoleColor::White;

	for (int i = 0; i < n; i++) {
		Console::ForegroundColor = ConsoleColor::Red;
		if (arreglo[i] == 1) { cout << "N  -> "; }
		Console::ForegroundColor = ConsoleColor::Blue;
		if (arreglo[i] == 2) { cout << "PN -> "; }
		Console::ForegroundColor = ConsoleColor::DarkGreen;
		if (arreglo[i] == 3) { cout << "PS -> "; }
		Console::ForegroundColor = ConsoleColor::DarkMagenta;
		if (arreglo[i] == 4) { cout << "S  -> "; }
	}
	Console::BackgroundColor = ConsoleColor::Black;
	cout << endl;

}


void Nclimas() {//contadores de los climas en el arreglo

	for (int i = 0; i < n + 1; i++) {

		if (arreglo[i] == 1) { contN++; }
		if (arreglo[i] == 2) { contPN++; }
		if (arreglo[i] == 3) { contPS++; }
		if (arreglo[i] == 4) { contS++; }

	}
	if (arreglo[79] == 1) { contN--; }
	if (arreglo[79] == 2) { contPN--; }
	if (arreglo[79] == 3) { contPS--; }
	if (arreglo[79] == 4) { contS--; }


	Console::ForegroundColor = ConsoleColor::White;
	cout << endl;
	cout << endl;
	cout << "La cantidad de dias que fueron:";
	cout << endl;
	cout << "\n Nublados= " << contN;
	cout << "\n Parcialmente Nublados= " << contPN;
	cout << "\n Parcialmente Soleados= " << contPS;
	cout << "\n Soleados= " << contS;
	cout << endl;
}

void ClimaSiguiente() {//contadores para identificar patrones

	for (int i = 0; i < n + 1; i++) {
		if (arreglo[i] == 1 && arreglo[i + 1] == 1) { NaN++; }
		if (arreglo[i] == 1 && arreglo[i + 1] == 2) { NaPN++; }
		if (arreglo[i] == 1 && arreglo[i + 1] == 3) { NaPS++; }
		if (arreglo[i] == 1 && arreglo[i + 1] == 4) { NaS++; }

		if (arreglo[i] == 2 && arreglo[i + 1] == 1) { PNaN++; }
		if (arreglo[i] == 2 && arreglo[i + 1] == 2) { PNaPN++; }
		if (arreglo[i] == 2 && arreglo[i + 1] == 3) { PNaPS++; }
		if (arreglo[i] == 2 && arreglo[i + 1] == 4) { PNaS++; }

		if (arreglo[i] == 3 && arreglo[i + 1] == 1) { PSaN++; }
		if (arreglo[i] == 3 && arreglo[i + 1] == 2) { PSaPN++; }
		if (arreglo[i] == 3 && arreglo[i + 1] == 3) { PSaPS++; }
		if (arreglo[i] == 3 && arreglo[i + 1] == 4) { PSaS++; }

		if (arreglo[i] == 4 && arreglo[i + 1] == 1) { SaN++; }
		if (arreglo[i] == 4 && arreglo[i + 1] == 2) { SaPN++; }
		if (arreglo[i] == 4 && arreglo[i + 1] == 3) { SaPS++; }
		if (arreglo[i] == 4 && arreglo[i + 1] == 4) { SaS++; }
	}


	cout << endl;
	cout << "La cantidad de veces que: " << endl;
	cout << "\n    N->N= " << NaN << "   N->PN= " << NaPN << "   N->PS= " << NaPS << "   N->S= " << NaS << endl;
	cout << "\n    PN->N= " << PNaN << "  PN->PN= " << PNaPN << "  PN->PS= " << PNaPS << "  PN->S= " << PNaS << endl;
	cout << "\n    PS->N= " << PSaN << "  PS->PN= " << PSaPN << "  PS->PS= " << PSaPS << "  PS->S= " << PSaS << endl;
	cout << "\n    S->N= " << SaN << "   S->PN= " << SaPN << "   S->PS= " << SaPS << "  S->S= " << SaS << endl;
	cout << endl;
}



void MatrizPorbabilidad() {//determinar la probablilidad con arreglo
	matriz[0][0] = round((NaN * 1.0 / contN) * 100) / 100;
	matriz[1][0] = round((NaPN * 1.0 / contN) * 100) / 100;
	matriz[2][0] = round((NaPS * 1.0 / contN) * 100) / 100;
	matriz[3][0] = round((NaS * 1.0 / contN) * 100) / 100;

	for (int i = 0; i < 4; i++) {
		float suma = 0;
		suma += matriz[i][0];
		if (suma < 100) {
			matriz[0][0] = round((NaN * 1.0 / contN) * 1000) / 1000;
			matriz[1][0] = round((NaPN * 1.0 / contN) * 1000) / 1000;
			matriz[2][0] = round((NaPS * 1.0 / contN) * 1000) / 1000;
			matriz[3][0] = round((NaS * 1.0 / contN) * 1000) / 1000;
		}

	}

	matriz[0][1] = round((PNaN * 1.0 / contPN) * 100) / 100;
	matriz[1][1] = round((PNaPN * 1.0 / contPN) * 100) / 100;
	matriz[2][1] = round((PNaPS * 1.0 / contPN) * 100) / 100;
	matriz[3][1] = round((PNaS * 1.0 / contPN) * 100) / 100;

	for (int i = 0; i < 4; i++) {
		float suma = 0;
		suma += matriz[i][1];
		if (suma < 100) {
			matriz[0][1] = round((PNaN * 1.0 / contPN) * 1000) / 1000;
			matriz[1][1] = round((PNaPN * 1.0 / contPN) * 1000) / 1000;
			matriz[2][1] = round((PNaPS * 1.0 / contPN) * 1000) / 1000;
			matriz[3][1] = round((PNaS * 1.0 / contPN) * 1000) / 1000;
		}

	}

	matriz[0][2] = round((PSaN * 1.0 / contPS) * 100) / 100;
	matriz[1][2] = round((PSaPN * 1.0 / contPS) * 100) / 100;
	matriz[2][2] = round((PSaPS * 1.0 / contPS) * 100) / 100;
	matriz[3][2] = round((PSaS * 1.0 / contPS) * 100) / 100;

	for (int i = 0; i < 4; i++) {
		float suma = 0;
		suma += matriz[i][2];
		if (suma < 100) {
			matriz[0][2] = round((PSaN * 1.0 / contPS) * 1000) / 1000;
			matriz[1][2] = round((PSaPN * 1.0 / contPS) * 1000) / 1000;
			matriz[2][2] = round((PSaPS * 1.0 / contPS) * 1000) / 1000;
			matriz[3][2] = round((PSaS * 1.0 / contPS) * 1000) / 1000;
		}

	}

	matriz[0][3] = round((SaN * 1.0 / contS) * 100) / 100;
	matriz[1][3] = round((SaPN * 1.0 / contS) * 100) / 100;
	matriz[2][3] = round((SaPS * 1.0 / contS) * 100) / 100;
	matriz[3][3] = round((SaS * 1.0 / contS) * 100) / 100;

	for (int i = 0; i < 4; i++) {
		float suma = 0;
		suma += matriz[i][3];
		if (suma < 100) {
			matriz[0][3] = round((SaN * 1.0 / contS) * 1000) / 1000;
			matriz[1][3] = round((SaPN * 1.0 / contS) * 1000) / 1000;
			matriz[2][3] = round((SaPS * 1.0 / contS) * 1000) / 1000;
			matriz[3][3] = round((SaS * 1.0 / contS) * 1000) / 1000;
		}
		suma = 0;
	}
}

void ImprimirMatrizProbabilidad() {
	Console::BackgroundColor = ConsoleColor::Red;
	cout << "DIA CERO:" << endl;
	Console::BackgroundColor = ConsoleColor::Black;
	cout << "La matriz de transicion es:" << endl;
	string etiquetasColumnas[5] = { " ","N", "PN", "PS", "S" };
	string etiquetasFilas[4] = { "N", "PN", "PS", "S" };

	for (int j = 0; j < 5; j++) {
		cout << setw(10) << etiquetasColumnas[j];
	}
	cout << endl;

	for (int i = 0; i < 4; i++) {
		cout << setw(10) << etiquetasFilas[i];

		for (int j = 0; j < 4; j++) {
			cout << setw(10);
			cout << matriz[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void VectorIni() {
	if (arreglo[79] == 1) { vectorinicial[0][0] = 1; }

	if (arreglo[79] == 2) { vectorinicial[1][0] = 1; }

	if (arreglo[79] == 3) { vectorinicial[2][0] = 1; }

	if (arreglo[79] == 4) { vectorinicial[3][0] = 1; }
}

void ImprimirVectorIni() {
	cout << endl;
	cout << "El vector incial es :" << endl;
	for (int i = 0; i < 4; i++) {
		cout << setw(10);
		cout << vectorinicial[i][0] << " ";

		cout << endl;
	}
}

void PorbUno() {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			primeraprob[i][0] += matriz[i][j] * vectorinicial[j][0];
		}
	}
}


void ImprimirPorbUno() {
	float mayor = 0;
	int indicemayor = 0;
	cout << endl;
	Console::BackgroundColor = ConsoleColor::Red;
	cout << "DIA UNO:" << endl;
	Console::BackgroundColor = ConsoleColor::Black;
	cout << "\n Las probabilidades de que el dia siguiente sea:" << endl;
	string etiquetasFilas[4] = { "Nublado", "Parc. Nublado", "Parc. Soleado", "Soleado" };
	for (int i = 0; i < 4; i++) {
		cout << setw(20) << etiquetasFilas[i];
		cout << setw(10);
		cout << round(primeraprob[i][0] * 100) << " %";
		cout << endl;

		if (primeraprob[i][0] > mayor) {
			mayor = primeraprob[i][0];// Actualiza el número mayor
			indicemayor = i;

		}
	}
	cout << "\n Lo mas probable es que el dia siguiente sea: " << etiquetasFilas[indicemayor];
	cout << " con " << round(mayor * 100) << " %" << endl;

}


void MatrizDiaDos() {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			for (int z = 0; z < 4; z++) {
				diados[i][j] += matriz[i][z] * matriz[z][j];
			}

		}

	}

}

void ImprimirMatrizDos() {
	float mayor = 0;
	int indicemayor = 0;
	cout << endl;
	Console::BackgroundColor = ConsoleColor::Red;
	cout << "DIA DOS:" << endl;
	Console::BackgroundColor = ConsoleColor::Black;
	cout << "\n El primer paso es encontrar la matriz de probabilidad elevada a la potencia de 2 :" << endl;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << setw(10);
			cout << diados[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl;
	cout << "\n El segundo paso es multiplicar la matriz obtenida  por el vector inicial :" << endl;
	cout << "\n Las probabilidades de que el dia siguiente sea:" << endl;
	string etiquetasFilas[4] = { "Nublado", "Parc. Nublado", "Parc. Soleado", "Soleado" };
	for (int i = 0; i < 4; i++) {
		cout << setw(20) << etiquetasFilas[i];
		for (int j = 0; j < 1; j++) {
			for (int z = 0; z < 4; z++) {

				segundaprob[i][j] += diados[i][z] * vectorinicial[z][0];
			}
			cout << setw(10);
			cout << round(segundaprob[i][j] * 100) << " %";
		}
		cout << endl;
		if (segundaprob[i][0] > mayor) {
			mayor = segundaprob[i][0];// Actualiza el número mayor
			indicemayor = i;

		}
	}
	cout << "\n Lo mas probable es que el segundo dia sea: " << etiquetasFilas[indicemayor];
	cout << " con " << round(mayor * 100) << " %" << endl;
}


void MatrizDiaTres() {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			for (int z = 0; z < 4; z++) {
				diatres[i][j] += diados[i][z] * matriz[z][j];
			}

		}

	}

}

void ImprimirMatrizTres() {
	float mayor = 0;
	int indicemayor = 0;
	Console::BackgroundColor = ConsoleColor::Red;
	cout << "DIA TRES:" << endl;
	Console::BackgroundColor = ConsoleColor::Black;
	cout << "\n El primer paso es calcular la matriz de probabilidad elevada a la potencia de 3 :" << endl;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << setw(10);
			cout << diatres[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl;
	cout << "\n El segundo paso es multiplicar la matriz obtenida  por el vector inicial :" << endl;
	cout << "\n Las probabilidades de que el dia siguiente sea:" << endl;
	string etiquetasFilas[4] = { "Nublado", "Parc. Nublado", "Parc. Soleado", "Soleado" };
	for (int i = 0; i < 4; i++) {
		cout << setw(20) << etiquetasFilas[i];
		for (int j = 0; j < 1; j++) {
			for (int z = 0; z < 4; z++) {

				terceraprob[i][j] += diatres[i][z] * vectorinicial[z][0];
			}
			cout << setw(10);
			cout << round(terceraprob[i][j] * 100) << " %";
		}
		cout << endl;
		if (terceraprob[i][0] > mayor) {
			mayor = terceraprob[i][0];// Actualiza el número mayor
			indicemayor = i;

		}
	}
	cout << "\n Lo mas probable es que el tercer dia sea: " << etiquetasFilas[indicemayor];
	cout << " con " << round(mayor * 100) << " %" << endl;
}


void MatrizDiaCuatro() {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			for (int z = 0; z < 4; z++) {
				diacuatro[i][j] += diatres[i][z] * matriz[z][j];
			}

		}

	}

}

void ImprimirMatrizCuatro() {
	float mayor = 0;
	int indicemayor = 0;
	Console::BackgroundColor = ConsoleColor::Red;
	cout << "DIA CUATRO:" << endl;
	Console::BackgroundColor = ConsoleColor::Black;
	cout << "\n El primer paso es encontrar la matriz de probabilidad elevada a la potencia de 4 :" << endl;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << setw(10);
			cout << diacuatro[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl;
	cout << "\n El segundo paso es multiplicar la matriz obtenida  por el vector inicial :" << endl;
	cout << "\n Las probabilidades de que el dia siguiente sea:" << endl;
	string etiquetasFilas[4] = { "Nublado", "Parc. Nublado", "Parc. Soleado", "Soleado" };
	for (int i = 0; i < 4; i++) {
		cout << setw(20) << etiquetasFilas[i];
		for (int j = 0; j < 1; j++) {
			for (int z = 0; z < 4; z++) {

				cuartaprob[i][j] += diacuatro[i][z] * vectorinicial[z][0];
			}
			cout << setw(10);
			cout << round(cuartaprob[i][j] * 100) << " %";
		}
		cout << endl;
		if (cuartaprob[i][0] > mayor) {
			mayor = cuartaprob[i][0];// Actualiza el número mayor
			indicemayor = i;

		}
	}
	cout << "\n Lo mas probable es que el cuarto dia sea: " << etiquetasFilas[indicemayor];
	cout << " con " << round(mayor * 100) << " %" << endl;

}



void LimpiarArr() {

	contN = 0; contPN = 0; contPS = 0; contS = 0;
	NaN = 0; NaPN = 0; NaPS = 0; NaS = 0;
	PNaN = 0; PNaPN = 0; PNaPS = 0; PNaS = 0;
	PSaN = 0; PSaPN = 0; PSaPS = 0; PSaS = 0;
	SaN = 0; SaPN = 0; SaPS = 0; SaS = 0;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			matriz[i][j] = 0;
			vectorinicial[i][0] = 0;
			primeraprob[i][0] = 0;
			diados[i][j] = 0;
			segundaprob[i][0] = 0;
			diatres[i][j] = 0;
			terceraprob[i][0] = 0;
			diacuatro[i][j] = 0;
			cuartaprob[i][0] = 0;
		}
	}


}

