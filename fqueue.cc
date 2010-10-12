#include "fqueue.h"
#include <iostream>
using namespace std;

fqueue::fqueue(){
  first=last=0;
}
fqueue::~fqueue(){
  float f;
  while(!empty()){
    f=extract();}

}

void fqueue::insert(float value){
  node *aux = new node();
  if (empty()){
    aux->value=value;
    aux->nxt=NULL;
    first=last=aux;
  }
  else {
    aux->value=value;
    aux->nxt=NULL;
    last->nxt=aux;
    last=aux;
  }
}

float fqueue::extract(){
  if (empty()) cerr << "No items to extract" << endl;
  else {
    float tmp = first->value;
    node *old = first;
    first = first->nxt;
    delete old;
    return tmp;
  }
  return -1;
}

bool fqueue::empty() const{
  if (first == 0 && first == 0) return true;
  else return false;
}

void fqueue::show()const{
  if ( empty() ) cerr << "[ : empty: ]\n";
  else{
    node *aux = first;
    cout << "[";
    while( aux ){
      cout << " : " << aux->value;
      aux = aux->nxt;
    }
    cout << " : ]" << endl;
  }
}

fqueue& fqueue::operator<< (float value){
  insert(value);
  return *this;
}

fqueue& fqueue::operator>> (float& fnum){
  fnum=extract();
  return *this;
 }

void fqueue::flip(){
  node *r;
  int n=0,i; float *aux;
  for (r=first; r!=NULL; r=r->nxt) n++;
  cout << n << " items" << endl;
  aux=new float[n];
  for(i=n-1; i>=0; i--){
    aux[i]=extract();
  }
  for(i=0;i<n;i++)
    insert(aux[i]); 
}
    
  
