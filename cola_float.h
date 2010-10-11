#ifndef _COLA_
#define _COLA_
struct nodo{
  float valor;
  nodo *sig;
};
class cola_float {
  nodo *primero, *ultimo;
public:
  cola_float(); //constructor
  ~cola_float(); //destructor
  void insertar(float valor);
  float extraer();
  bool vacia() const;
  void mostrar () const;
};

#endif
