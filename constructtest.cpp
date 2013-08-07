#include<stdio.h>

class A
{
 public:
    virtual void virfun()=0;
  protected:// public:
    A();//{  printf("hell construct A\n");
  protected://public:
    ~A();//{ printf("destruct A\n");}
};
A::A(){  printf("hell construct A\n");}
A::~A(){ printf("destruct A\n");}

class AA:public A
{
  //public:
    AA(){  printf("AA construct\n");}
  public:
    static AA* create(int i=20);
    virtual void virfun();
    ~AA(){  printf("AA deconstruct\n");}
};

AA* AA::create(int i)
{
   printf("iiii=%d\n",i);
   return  new AA();
}
void AA::virfun(){ printf("virtula function\n");}
int main()
{
    printf("hello cpp\n");
    AA *aa = AA::create();
    delete aa;
}
