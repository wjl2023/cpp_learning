#include<iostream>
using namespace std;

//重载：写函数改变加减乘除等运算符功能
//不能重载的运算符：. .* :: ?: sizeof
//重载必须保证操作数的数量和运算符的优先级
//当重载函数是一个类的成员时，已有隐藏参数列表this；当为全局函数时，就必须包含两个参数

class Interger {
	int i;
public:
	Interger(int n):i(n){}
	const Interger operator+(const Interger& that)const {
		return Interger(i + that.i);	//返回新的对象
	}
};

//z=x+y 对
//z=x+3 对
//z=3+y 不对，receiver是3；但是假如是全局重载函数，就可以

//运算符的左边算子叫receiver，决定用哪种运算符

//不修改算子的，传进去必须是const；修改算子的，传进去就不能是const
//拿来做左值的，一定是reference

int main() { 

	return 0;
}