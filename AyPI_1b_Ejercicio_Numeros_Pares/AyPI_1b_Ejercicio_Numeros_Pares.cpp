#include <cstdlib>
#include <iostream>
#include <ctime>

#define TOPE_NUMEROS 10
#define RANDOM_MAX 100

using namespace std;

const int MaximoValorPosible = 2147483647;

// Precondicion: Ninguna
// Postcondicion: Queda inicializada la secuencia de numeros random par
void Incializar();

// Precondicion: Debe haber llamado antes a inicializar una unica vez
// Postcondicion: Devuelve un numero par aleatorio
int ObtenerNumeroAleatorioPar();


int main() {
	Incializar();
	cout << "Obtener Numeros Aleatorios Pares" << endl;
	for (int i = 0; i < 5; i++) {
		cout << ObtenerNumeroAleatorioPar() << endl;
	}
	return 0;
}

void Incializar() {
	srand(time(NULL));
}

int ObtenerNumeroAleatorioPar() {
	int num = 2 * (rand() % (MaximoValorPosible / 2));
	// Unarios, binarios, ternearios
	return num;
}

// [10 90 90]
