#include<iostream>
using namespace std;

class A {
	int i;
	const int size;//�г�Ա������constʱ��һ��Ҫ���б��ʼ��
	//int array[size];//wrong!
	static const int p = 10;
	int array_new[p];//����

public:
	A():i(0),size(0){}
	void f() {
		cout << "f()" << endl;
	}
	void f() const {
		cout << "f() const" << endl;
	}
	//�������ƺͲ�������ͬ�����ǲ����ظ����壬��overload
};

int main() {
	//char *s = "hello world" ;//����ʵ������const�������ڴ������ǲ���д��
	//const char *s = "hello world";//����д������ᱨ��const char*��û�������ˣ������ǲ��������������и��ĵ�
	//ϵͳ���hello world�ڴ�����еĵ�ֱַ�ӽ���s
	char s[] = "hello world";//����д����ȷ�� 
	//s[]��˵����һ�����飬�������ڶ�ջ���
	cout << s << endl;
	s[0] = 'b';
	cout << s << endl;

	const A a;//const�Ļ������������Ҫ��ֵ�����������湹�캯�������б��ʼ��
	a.f();
	return 0;
}

//�������к����ݴ���ڲ�ͬ������
//���ر�������ڶ�ջ��
//ȫ�ֱ�����һ��ȫ���������ȫ�ֱ�����ĳ������ڴ������	
//����������ַ
//�����������ķѺܴ�ռ䡣���������ĺܴ���Դ�����Դ�һ����ַ��ʡ�ܶࡣ
//�κ�ʱ�򴫵�ַ��һ�����������Ҫȷ������const�Ա�֤��ȫ��

//const Currency the_raise(42, 38);			//˵���������ֵ�ǲ����޸ĵģ������������const
////����const����һ���������޸�,�����Ͷ���ĵط���Ҫ����const
//int get_day() const;
//int get_day() const {
//	return day;
//}

