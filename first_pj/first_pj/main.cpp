#include<iostream>
using namespace std;

//���أ�д�����ı�Ӽ��˳������������
//�������ص��������. .* :: ?: sizeof
//���ر��뱣֤������������������������ȼ�
//�����غ�����һ����ĳ�Աʱ���������ز����б�this����Ϊȫ�ֺ���ʱ���ͱ��������������

class Interger {
	int i;
public:
	Interger(int n):i(n){}
	const Interger operator+(const Interger& that)const {
		return Interger(i + that.i);	//�����µĶ���
	}
};

//z=x+y ��
//z=x+3 ��
//z=3+y ���ԣ�receiver��3�����Ǽ�����ȫ�����غ������Ϳ���

//�������������ӽ�receiver�����������������

//���޸����ӵģ�����ȥ������const���޸����ӵģ�����ȥ�Ͳ�����const
//��������ֵ�ģ�һ����reference

int main() { 

	return 0;
}