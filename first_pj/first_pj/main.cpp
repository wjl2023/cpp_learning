#include<iostream>
using namespace std;
//class A{
//public:
//	int i;
//public:
//	A():i(10){}
//};
//
//class B :public A {
//private:
//	int j;
//public:
//	B():j(30){}
//};
//
//int main() {
//	A a;
//	B b;
//	cout << a.i << " " << b.i << endl;
//	cout << sizeof(a) << " " << sizeof(b) << endl;
//	int *p = (int*)&a;
//	cout <<p<<" "<< *p << endl;
//	p = (int*)&b;
//	cout << p << " " << *p << endl;
//	*p = 20;
//	cout << a.i << endl;
//	return 0;
//}
//
//
////upcast:向上适应，所有子类的对象都可以当成是父类的对象

//virtual--对这个函数的调用，如果是通过指针或者引用，就不能相信他一定是什么类型，要等到运行时候才能确定。
//指针是什么类型，到时候再调那个类型的函数
//给virtual的函数一个什么对象，他就做对应的事情。
//动态绑定：运行时根据指针所指的对象来确定调用的函数。
//静态绑定：根据代码决定要调用的函数

//任何一个类，只要有虚函数，那么这个类的对象就会比正常的大一点。

class A {
public:
	A():i(10){}
	virtual void f() {
		cout << "A()::f()" << i << endl;
	}
	int i;
};

class B:public A{
public:
	B():j(20){}
	virtual void f() {
		cout << "B()::f()" << j << endl;
	}
	int j;
};

//有virtual函数的类，开头都会有一个隐藏的vptr指针，指向vtable表（类的）
//vtable里面是所有的virtual函数的地址

int main() {
	//A a,b;
	//a.f();
	//cout << sizeof(a) << endl;
	//int* p = (int*)&a;
	//int* q = (int*)&b;
	////p++;
	//cout << *p << endl;
	//cout << *q << endl;

	A a;
	B b;
	A* p = &a;//p所指的对象是A的对象

	int* r = (int*)&a;
	int* t = (int*)&b;

	*r = *t;//实际上是把a的vptr指针指到b的那里去了，所以显示的j实际上是别人的内存
	p->f();


	//a = b;//这一步只是把b的值给a，a还是A。复制只是成员变量的复制，并不能把类型复制过去
	//a.f();//通过指针去调用才是动态绑定，用.调用不是动态绑定
	//p = &a;
	//p->f();

	return 0;
}

//父类和子类如果某个函数都是virtual，函数名和参数表都相同，那么这两个函数是override的
