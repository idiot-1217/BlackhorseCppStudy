#include <iostream>
using namespace std;

int main() {
	int a = 10, b = 3;
	float c = 10, d = 3;
	cout << a + b << " " << a - b << " "
	     << a *b << " "  << a / b << " "
	     << c / d << " " << a % b << endl;
	//ǰ�õ���
	++a;
	cout << a << endl;
	//���õ���
	b++;
	cout << b << endl;
	//ǰ�õ�������õ���������
	int comp1 = ++a * 10; //���㲽�裺��a��1��Ȼ��comp1=(a+1)*10
	int comp2 = a++ * 10; //���㲽�裺��comp2=a*10��Ȼ��a��1
	cout << comp1 << " " << comp2 << " " << a << endl;
	//ǰ�õݼ�
	--a;
	cout << a << endl;
	//���õݼ�
	b--;
	cout << b << endl;
	//ǰ�õݼ�����õݼ�������
	int comp3 = --a * 10; //���㲽�裺��a��1��Ȼ��comp3=(a-1)*10
	int comp4 = a-- * 10; //���㲽�裺��comp4=a*10��Ȼ��a��1
	cout << comp3 << " " << comp4 << " " << a << endl;
	cout << (3 == 4) << (3 != 4) << (3 < 4) << (3 > 4) << (3 <= 4) << (3 >= 4) << endl;
	//�߼�����
	//��!����&&����||
	return 0;
}