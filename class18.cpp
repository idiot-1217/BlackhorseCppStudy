#include <iostream>
using namespace std;

/*
�̳з�ʽ���������̳С������̳С�˽�м̳С�
�ٶ������������Ȩ�����ݣ�������������˽�У�����������ֱ��Թ�����������˽�з�ʽ�̳С�
�������ڲ������Է��ʹ������������ݣ������ܷ���˽�����ݡ��������ⲿ���Թ�����ʽ�̳еģ�
ֻ�ܷ��ʵ����๫�����ݣ��Ա�����ʽ�̳еģ���˽����ȫ����Ϊ����Ȩ�ޣ���������ʲ�������
˽�з�ʽ�̳еģ�ȫ����Ϊ˽��Ȩ�ޣ���������ʲ�����

���������зǾ�̬��Ա���ᱻ����̳�

�ȹ��츸�࣬�ٹ������࣬���������࣬����������

���μ̳� ������̳У�������μ̳��������������
*/






//class Base {
//	public:
//		void speak() {
//			cout << "˵" << endl;
//		}
//		void listen() {
//			cout << "��" << endl;
//		}
//		void read() {
//			cout << "��" << endl;
//		}
//};
//
//class My: public Base {
//	public:
//		void write() {
//			cout << "д" << endl;
//		}
//};
//
//void test01() {
//	My me;
//	me.listen();
//	me.read();
//	me.speak();
//	me.write();
//}
//
//class Father {
//	public:
//		Father() {
//			m_A = 10;
//		}
//		void func() {
//			cout << "���ຯ�����ã�" << endl;
//		}
//		static void func(int a) {
//			cout << "���ຯ�����أ�" << a << endl;
//		}
//		int m_A;
//};
//
//class Son: public Father {
//	public:
//		Son() {
//			m_A = 30;
//		}
//		void func() {
//			cout << "���ຯ������!" << endl;
//		}
//		int m_A;
//};
//
//void test02() {
//	Son s1;
//	cout << "�����Ա����" << s1.m_A << " " << "�����Ա����" << s1.Father::m_A << endl;
//	s1.func();
//	s1.Father::func();
//	s1.Father::func(10);
//	Son::Father::func(20);
//}
//
//int main() {
//	test02();
//	system("pause");
//	return 0;
//}

class animal {
	public:
		int m_age;
};

class sheep: virtual public animal {

};

class tuo: virtual public animal {

};

class what: public sheep, public tuo {

};

void test03() {
	what w;
	w.sheep::m_age = 10;
	w.tuo::m_age = 20;
	cout << w.sheep::m_age << endl;
	cout << w.tuo::m_age << endl;
}

int main() {
	test03();
	return 0;
}
