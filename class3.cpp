#include <iostream>
#include <ctime>
using namespace std;

int main() {
	// 顺序结构 选择结构 循环结构
	//1.选择结构
	int A, B, C = 0;
	int Re = 0;
	int i = 1;
	cout << "请输入A,B,C的体重" << endl;
	cin >> A >> B >> C;
	if (A >= B) {
		if (A >= C) {
			cout << "A最重" << endl;
		} else {
			cout << "C最重" << endl;
		}
	} else {
		if (B >= C) {
			cout << "B最重" << endl;
		} else {
			cout << "C最重" << endl;
		}
	}
	//三目运算符 表达式1？表达式2:表达式3 三目运算符返回的是变量，可以继续赋值
	A >= B ? Re = 1 : Re = 2; // (a>b?a:b)=10; c=(a>b?a:b);多种用法
	cout << Re << endl;
	//switch语句 只能判断整型或字符型，无法判断区间等；优点为结构清晰，执行效率高。
//	switch (A) {
//		case 10:
//			cout << "10" << endl;
//			break;
//		case 20:
//			cout << "20" << endl;
//			break;
//		default:
//			cout << "defalut" << endl;
//	}
	//2.循环结构
	while (i < 10) {
		cout << i << endl;
		i++;
	}
	// rand()%100 生成0~99的随机数；rand()%100+1 生成1~100的随机数
	// srand((unsigned int)time(NULL));随机数种子，根据时间生成随机数，确保每次生成的数不同
	int d = 1;
	do {
		cout << d << endl;
		d ++;
	} while (d < 10);
	//跳转语句break（跳出循环）；continue（停止循环当前步，执行下一步循环）；goto
	return 0;
}