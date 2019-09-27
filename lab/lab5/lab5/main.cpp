#include "ListaTrabajador.h"
#include "Trabajador.h"
#include "Vendedor.h"
#include "Gerente.h"
#include "Secretaria.h"

using namespace std;

int main()
{
	Trabajador trabajador1("003", 50, 100000, 2);
	ListaTrabajador* trab = new ListaTrabajador();
	trab->insertarInicio(trabajador1);
	cout << trab->toString() << endl;

	return 0;
}