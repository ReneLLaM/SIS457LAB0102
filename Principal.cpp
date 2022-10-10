#include <iostream>
using namespace std;

int main() {
	int a = 1;
	while (a <= 2) {
		cout << "Nombre: Rene Llanos Machuca" << endl;
		cout << "Carrera: Ingenieria de Sistemas" << endl;
		cout << "CU:35-5051" << endl;
		cout << "Esta ves si o si apruebo la materia!!!" << endl;
		a = a + 1;
		if (a == 2) {
			cout << "Desea volver a imprimir biografia  Si(1), No(2)" << endl;
			cin >> a;
		}

	}
	

	return 0;
}