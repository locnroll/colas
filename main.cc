#include <iostream>
using namespace std;
#include "fqueue.h"

int main (){
  fqueue q;
  float f1,f2,f3;
  f1=f2=f3=-1;
  q.insert(3.5);
  q.show();
  q.insert(5.2);
  q.show();
  q << 2.1 << 4.5 << 6.9;
  q.show();
  q >> f1 >> f2 >> f3;
  cout << "f1= " << f1 << endl
       << "f2= " << f2 << endl
       << "f3= " << f3 << endl;
  q << 1.5 << 5.1 << 10.01 << 01.10;
  q.show();
  q.flip();
  q.show();
  return 0;
}
