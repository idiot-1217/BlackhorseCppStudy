#include <iostream>
using namespace std;

int add(int a, int b) {
	int sum;
	sum = a + b;
	return sum;
}

//ֵ����ʱ���βεĸı䲻��Ӱ��ʵ�Ρ�ֵ����ʱ�βλ����ڴ濪����ʱ�ռ临��ʵ�ε�ֵ��
//���������ж�Σ�����ֻ����һ�Σ�����int function_name(int a, int b);
//�������ļ���д����.h��׺��ͷ�ļ���д��������������.cpp��׺��Դ�ļ���д�����Ķ��塣����ʱ��Ҫ
//#include "name.h"
int main() {
	int i = 1;
	int j = 2;
	cout << "���Ϊ��" << add(i, j) << endl;
	system("pause");
	return 0;
}