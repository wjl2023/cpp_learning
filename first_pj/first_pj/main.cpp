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
	//char* p = &c;//p��ָ��
	//char& r = c;//r�����á�һ�������ڶ����ʱ��Ҫ����ʼֵ����ʱr����c�ı���
	//���õİ�������ʱ�ǲ��ܸı�ģ�ָ���ǿ��Ըı��
	//int& y = x;
	//const int& z = x;//����ͨ��z�޸�x������x�ǿɱ��
	//cout << "y=" << y << endl;
	//cout << "z=" << z << endl;
	//f(y);
	//cout << "y=" << y << endl;
	//cout << "x=" << x << endl;
	//cout << "z=" << z << endl;
	int a = 0;
	f(&a);//ugly(explicit)
	g(a);//clear(hidden)������Ҫ������ԭ����ȷ��a�᲻�ᱻ�ı�
	h() = 16;//ֻҪ�����þͿ��Ե���ֵ
	

	return 0;
}

//ָ����Կգ����ò�����
//ָ��������Ѵ��ڵĶ����������������Ѵ��ڵĶ���
//����֮���ǲ��ܸ�ֵ��
