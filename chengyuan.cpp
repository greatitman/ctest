#include<stdio.h>
class A
{
	public:
		A();
		~A();
};
A::A()
{
	printf("construct A\r\n");
}
A::~A()
{
	printf("deconstruct A\r\n");
}
class B
{
	public:
		B();
		A aa;
		~B();
};
B::B()
{
	printf("B construct \r\n");
}
B::~B()
{
	printf("B deconstruct \r\n");
}
int main()
{
	B * mb = new B();
	printf("main\r\n");
	delete mb;
}
