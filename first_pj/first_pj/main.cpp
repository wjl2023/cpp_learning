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
////upcast:������Ӧ����������Ķ��󶼿��Ե����Ǹ���Ķ���

//virtual--����������ĵ��ã������ͨ��ָ��������ã��Ͳ���������һ����ʲô���ͣ�Ҫ�ȵ�����ʱ�����ȷ����
//ָ����ʲô���ͣ���ʱ���ٵ��Ǹ����͵ĺ���
//��virtual�ĺ���һ��ʲô������������Ӧ�����顣
//��̬�󶨣�����ʱ����ָ����ָ�Ķ�����ȷ�����õĺ�����
//��̬�󶨣����ݴ������Ҫ���õĺ���

//�κ�һ���ֻ࣬Ҫ���麯������ô�����Ķ���ͻ�������Ĵ�һ�㡣

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

//��virtual�������࣬��ͷ������һ�����ص�vptrָ�룬ָ��vtable����ģ�
//vtable���������е�virtual�����ĵ�ַ

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
	A* p = &a;//p��ָ�Ķ�����A�Ķ���

	int* r = (int*)&a;
	int* t = (int*)&b;

	*r = *t;//ʵ�����ǰ�a��vptrָ��ָ��b������ȥ�ˣ�������ʾ��jʵ�����Ǳ��˵��ڴ�
	p->f();


	//a = b;//��һ��ֻ�ǰ�b��ֵ��a��a����A������ֻ�ǳ�Ա�����ĸ��ƣ������ܰ����͸��ƹ�ȥ
	//a.f();//ͨ��ָ��ȥ���ò��Ƕ�̬�󶨣���.���ò��Ƕ�̬��
	//p = &a;
	//p->f();

	return 0;
}

//������������ĳ����������virtual���������Ͳ�������ͬ����ô������������override��
