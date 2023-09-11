#include <iostream>
using namespace std;

/*
��̬: ��̬��̬�Ͷ�̬��̬
��̬��̬���������ء����������
��̬��̬����������麯������ʱ��̬

��̬��̬�ĺ�����ַ��󶨣�����ʱȷ��������ַ��
��̬��̬�ĺ�����ַ��󶨣�����ʱȷ��������ַ��

��̬��̬������������
1. �м̳й�ϵ
2. ������д������麯��

��̬��̬��ʹ�ã������ָ������� ָ�� �������


�麯������ָ�룺ָ���麯�������ڼ�¼�麯���ĵ�ַ����������д�����麯��ʱ�������麯��ָ��
ָ����麯�������˸�����麯����

���麯��������ࣺvirtual ����ֵ���� ������ (�����б�) = 0; ���������˴��麯���������Ҳ��Ϊ
�����ࡣ�������޷�ʵ�����������������д�������еĴ��麯��������Ҳ���ڳ����ࡣ
*/

class BaseOperator {
	public:
		virtual int getResult() {
			return 0;
		}
		int m_a;
		int m_b;
};

class Add: public BaseOperator {
	public:
		int getResult() {
			return m_a + m_b;
		}
};

class Sub: public BaseOperator {
	public:
		int getResult() {
			return m_a - m_b;
		}
};

void test01() {
	//����ָ��ָ���������ʵ�ֶ�̬
	BaseOperator *p = new Add;
	p->m_a = 10;
	p->m_b = 20;
	cout << p->getResult() << endl;
	delete p; //new���󿪱��ڶ������ݣ��������ֶ��ͷ�
	p = new Sub;
	p->m_a = 20;
	p->m_b = 40;
	cout << p->getResult() << endl;
}


class Base {
	public:
		virtual void func() = 0;
};

class Car: public Base {
	public:
		void func() {
			cout << "��д�ɹ���" << endl;
		}
};

void test02() {
	Base *q = new Car;
	q->func();
}


int main() {
	test02();
	system("pause");
	return 0;
}