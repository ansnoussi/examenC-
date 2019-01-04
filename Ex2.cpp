#include <iostream>
using namespace std;
class A{
public:
	void M1(){cout << " A";}
	virtual void M2(){cout << " A";}
	virtual void M3(){cout << " A";}
};
class B: public A{
public:
	virtual void M1(){cout << " B";}
	virtual void M2(){cout << " B";}
	void M3(){cout << " B";}
};
class C: public B{
public:
	void M1(){cout << " C";}
	void M2(){cout << " C";}
	void M3()const{cout << " C";}
};
int main(){
	A a;
	B b;
	C c;
	A* pa = &b;
	B* pb = &c;
	A* pc = &c;
	pa->M1(); pa->M2(); pa->M3(); cout << "\n";
	pb->M1(); pb->M2(); pb->M3(); cout << "\n";
	pc->M1(); pc->M2(); pc->M3(); cout << "\n";
	b = c;
	b.M1(); b.M2(); b.M3(); cout << "\n";
}
