#include <iostream>
#include <ctime>
using namespace std;

int main() {
	// ˳��ṹ ѡ��ṹ ѭ���ṹ
	//1.ѡ��ṹ
	int A, B, C = 0;
	int Re = 0;
	int i = 1;
	cout << "������A,B,C������" << endl;
	cin >> A >> B >> C;
	if (A >= B) {
		if (A >= C) {
			cout << "A����" << endl;
		} else {
			cout << "C����" << endl;
		}
	} else {
		if (B >= C) {
			cout << "B����" << endl;
		} else {
			cout << "C����" << endl;
		}
	}
	//��Ŀ����� ���ʽ1�����ʽ2:���ʽ3 ��Ŀ��������ص��Ǳ��������Լ�����ֵ
	A >= B ? Re = 1 : Re = 2; // (a>b?a:b)=10; c=(a>b?a:b);�����÷�
	cout << Re << endl;
	//switch��� ֻ���ж����ͻ��ַ��ͣ��޷��ж�����ȣ��ŵ�Ϊ�ṹ������ִ��Ч�ʸߡ�
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
	//2.ѭ���ṹ
	while (i < 10) {
		cout << i << endl;
		i++;
	}
	// rand()%100 ����0~99���������rand()%100+1 ����1~100�������
	// srand((unsigned int)time(NULL));��������ӣ�����ʱ�������������ȷ��ÿ�����ɵ�����ͬ
	int d = 1;
	do {
		cout << d << endl;
		d ++;
	} while (d < 10);
	//��ת���break������ѭ������continue��ֹͣѭ����ǰ����ִ����һ��ѭ������goto
	return 0;
}