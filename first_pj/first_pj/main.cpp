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
//拷贝构造，如果没写，系统会自动生成。系统会自动进行对成员变量的拷贝
//成员级别的拷贝
//如果成员有指针，就会发生指针的拷贝，两个指针指向相同的内存区域

//void C {
//	C c;
//	return c;	//返回时也会发生拷贝构造
//};

//写一个类，就一定要写拷贝构造
//一定要写：default constructor,virtual,copy con..
//如果不想被拷贝构造，就写进private。那就不能直接拿这个对象做事。