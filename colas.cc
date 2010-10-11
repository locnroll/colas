#include <iostream>
using namespace std;
#include "cola_float.h"

int main (){
  cola_float q;
  cout << "lol" << endl;
  q.mostrar();
  cout << "mostrar" << endl;
  q.extraer();
  cout << "extraer" << endl;
  q.insertar(3.5);

  q.insertar(2.4);
  q.mostrar();
  q.extraer();
  q.mostrar();
  q.insertar(5.2);
  q.insertar(1.1);
  q.mostrar();
  return 0;
}
