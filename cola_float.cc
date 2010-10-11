#include "cola_float.h"
#include <iostream>
using namespace std;

cola_float::cola_float(){
  primero=ultimo=0;
}
cola_float::~cola_float(){
  delete primero;
  delete ultimo;
}

void cola_float::insertar(float valor){
  nodo *paux = new nodo();
  if (vacia()){
    paux->valor=valor;
    paux->sig=NULL;
    primero=ultimo=paux;
  }
  else {
    paux->valor=valor;
    paux->sig=NULL;
    ultimo->sig=paux;
    ultimo=paux;
  }
}

float cola_float::extraer(){
  if (vacia()) cerr << "No hay elementos" << endl;
  else {
		float tmp = primero->valor;
		nodo *old = primero;
    primero = primero->sig;
		delete old;
    return tmp;
  }
  return -1;
}

bool cola_float::vacia() const{
  if (primero == 0 && ultimo == 0) return true;
  else return false;
}

void cola_float::mostrar()const{
  if ( vacia() ) cerr << "No se puede mostrar, está vacía\n";
  else{
    nodo *nuevo = primero;
    cout << "[ ";
    while( nuevo ){
			cout << nuevo->valor << " ";
			nuevo = nuevo->sig;
    }
		cout << "]" << endl;
  }  
}
