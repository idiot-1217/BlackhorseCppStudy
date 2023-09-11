#include <iostream>
using namespace std;

int main() {
	int a = 10, b = 3;
	float c = 10, d = 3;
	cout << a + b << " " << a - b << " "
	     << a *b << " "  << a / b << " "
	     << c / d << " " << a % b << endl;
	//前置递增
	++a;
	cout << a << endl;
	//后置递增
	b++;
	cout << b << endl;
	//前置递增与后置递增的区别
	int comp1 = ++a * 10; //运算步骤：将a加1，然后comp1=(a+1)*10
	int comp2 = a++ * 10; //运算步骤：将comp2=a*10，然后a加1
	cout << comp1 << " " << comp2 << " " << a << endl;
	//前置递减
	--a;
	cout << a << endl;
	//后置递减
	b--;
	cout << b << endl;
	//前置递减与后置递减的区别
	int comp3 = --a * 10; //运算步骤：将a减1，然后comp3=(a-1)*10
	int comp4 = a-- * 10; //运算步骤：将comp4=a*10，然后a减1
	cout << comp3 << " " << comp4 << " " << a << endl;
	cout << (3 == 4) << (3 != 4) << (3 < 4) << (3 > 4) << (3 <= 4) << (3 >= 4) << endl;
	//逻辑运算
	//非!，与&&，或||
	return 0;
}