#include<iostream>
using namespace std;

static int objcount = 0;

class HowMany {
public:
	HowMany() {
		objcount++;
		cout << "HowMany()" << objcount << endl; 
	}
	HowMany(const HowMany& HM) {
		objcount++;
		cout << "HowMany()" << objcount << endl;
	}
	HowMany(int i) {
		objcount++;
		cout << "HowMany()" << objcount << endl;
	}
	~HowMany() {
		objcount--;
		cout << "HowMany()" << objcount << endl;
	}
};
int main() {
	HowMany a;
	HowMany b = a;
	HowMany c(0);
	return 0;
}


//T::T(const& T)
//�������죬���ûд��ϵͳ���Զ����ɡ�ϵͳ���Զ����жԳ�Ա�����Ŀ���
//��Ա����Ŀ���
//�����Ա��ָ�룬�ͻᷢ��ָ��Ŀ���������ָ��ָ����ͬ���ڴ�����

//void C {
//	C c;
//	return c;	//����ʱҲ�ᷢ����������
//};

//дһ���࣬��һ��Ҫд��������
//һ��Ҫд��default constructor,virtual,copy con..
//������뱻�������죬��д��private���ǾͲ���ֱ��������������¡�