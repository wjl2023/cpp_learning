#include<iostream>
using namespace std;

void f(int& x) {
	x++;
}

int* f(int* x) {
	(*x)++;
	return x;
}

int& g(int& x) {
	x++;
	return x;
}
int x = 0;

int& h() {
	int q;
	return x;
}

int main() {
	//char c;
	//char* p = &c;//p是指针
	//char& r = c;//r是引用。一般引用在定义的时候要给初始值。这时r就是c的别名
	//引用的绑定在运行时是不能改变的，指针是可以改变的
	//int& y = x;
	//const int& z = x;//不能通过z修改x，但是x是可变的
	//cout << "y=" << y << endl;
	//cout << "z=" << z << endl;
	//f(y);
	//cout << "y=" << y << endl;
	//cout << "x=" << x << endl;
	//cout << "z=" << z << endl;
	int a = 0;
	f(&a);//ugly(explicit)
	g(a);//clear(hidden)，所以要看函数原型以确定a会不会被改变
	h() = 16;//只要是引用就可以当左值
	

	return 0;
}

//指针可以空，引用不可以
//指针独立于已存在的东西，引用依赖于已存在的东西
//引用之间是不能赋值的
