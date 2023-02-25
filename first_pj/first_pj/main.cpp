#include<iostream>
using namespace std;

class A {
	int i;
	const int size;//有成员变量是const时，一定要做列表初始化
	//int array[size];//wrong!
	static const int p = 10;
	int array_new[p];//可以

public:
	A():i(0),size(0){}
	void f() {
		cout << "f()" << endl;
	}
	void f() const {
		cout << "f() const" << endl;
	}
	//函数名称和参数表都相同，但是不是重复定义，是overload
};

int main() {
	//char *s = "hello world" ;//这里实际上是const，被放在代码段里，是不可写的
	//const char *s = "hello world";//这样写，下面会报错。const char*是没有问题了，但是是不允许下面对其进行更改的
	//系统会把hello world在代码段中的地址直接交给s
	char s[] = "hello world";//这样写是正确的 
	//s[]是说这是一个数组，数组是在堆栈里的
	cout << s << endl;
	s[0] = 'b';
	cout << s << endl;

	const A a;//const的话，创造出来就要有值，所以在上面构造函数做了列表初始化
	a.f();
	return 0;
}

//程序运行后，数据存放于不同的区域
//本地变量存放在堆栈里
//全局变量在一个全局数据区里，全局变量里的常量是在代码段里	
//传进传出地址
//传整个对象会耗费很大空间。拷贝会消耗很大资源，所以传一个地址会省很多。
//任何时候传地址到一个函数里，你需要确保他是const以保证安全。

//const Currency the_raise(42, 38);			//说明对象里的值是不能修改的，整个对象就是const
////加上const表明一个函数不修改,声明和定义的地方都要加上const
//int get_day() const;
//int get_day() const {
//	return day;
//}

