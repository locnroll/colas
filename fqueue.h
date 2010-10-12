#ifndef _QUEUE_
#define _QUEUE_
struct node{
  float value;
  node *nxt;
};
class fqueue {
  node *first, *last;
  int n;
  float max;
public:
  fqueue(); //constructor
  ~fqueue(); //destructor
  void insert(float value);
  //  void insertb(float value);
  float extract();
  bool empty() const;
  void show() const;
  fqueue& operator<< (float value);
  fqueue& operator>> (float& fnum);
  void flip();
  void sub();
};
#endif
