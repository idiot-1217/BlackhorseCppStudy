#include <iostream>
#include <string>
using namespace std;

//�������Ϊ���Ա
//class A {
//	public:
//		A(string name) {
//			A_name = name;
//			cout << "A�Ĺ��캯��" << endl;
//		}
//		string A_name;
//};
//
//class B {
//	public:
//		B(string b_name, string b_a_name):B_name(b_name),B_A(b_a_name)
//		{
//			cout << "B�Ĺ��캯��" << endl;
//		}
//		string B_name;
//		A B_A;
//};
//�������Ϊ��Աʱ���ȹ����Ա���ٹ�������������������������Ա����

//��̬��Ա
/*
��̬��Ա�ؼ��� static
��̬��Ա���������ж�����ͬһ�����ݣ�����׶η����ڴ棻���������������ʼ����

��̬��Ա���������ж�����ͬһ����̬��Ա��������̬��Ա����ֻ�ܷ��ʾ�̬��Ա������

*/
class car {
	public:
		static int length; // ��������
		string name; //��̬��Ա�������޷����ʷǾ�̬��Ա������
		static void check() {
			cout << length << endl;
		}
};

int car::length = 5; //�����ʼ��
//��̬��Ա��������ͨ�����������ֱ�ӷ��ʣ���̬��Ա����ͬ��ӵ�з���Ȩ�����ơ�

void test() {
	car c1;
	c1.name = "Ford";
	cout << c1.length << endl;
	c1.check();
}

int main() {
	test();
	car::check();
	return 0;
}