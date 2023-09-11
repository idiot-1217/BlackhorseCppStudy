#include <iostream>
using namespace std;
#include <string>

//单行注释
/*多行注释*/

//宏常量
#define PI 3.1415

//short 2 int 4 long 4 long long 8
//float 4 double 8
int main() {
	int a = 1;
	int n;
	//const修饰常量
	const int z = 1;
	float b1 = 3.14; //3.14是默认双精度，先转换为单精度
	float b2 = 3.14f; //此处3.14是单精度
	char c = 'X'; //字符型变量，占1字节，只能用单引号，内仅一个字符，存储时转化为ASCII码(int)c
	//转义字符 \n换行 \\输出\ \t水平制表
	//字符串 C风格
	char a[] = "as";
	//C++风格
	string a = "as"; //需要头文件#include <string>;
	cout << "请输入：" << endl;
	cin >> n;
	cout << n + a + PI + z << endl;
	return 0;
}