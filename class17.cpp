#include <iostream>
#include <string>
using namespace std;

/*************************************************************************
����������ء�

/*
4.5.1 �Ӻţ�-> ʵ�������Զ��������������
��Ա����orȫ�ֺ�����operator+
*/
//class Person {
//	public:
//		int m_A;
//		int m_B;
//		Person operator+(Person &p) {
//			Person tmp;
//			tmp.m_A = this->m_A + p.m_A;
//			tmp.m_B = this->m_B + p.m_B;
//			return tmp;
//		} //����Ϊ p1.operator+(p2)����������أ�ͬ�����Է�����������
//};

//����д��ȫ�ֺ���
//Person operator+(Person &p1, Person &p2) {
//	Person tmp;
//	tmp.m_A = p1.m_A + p2.m_A;
//	tmp.m_B = p1.m_B + p2.m_B;
//	return tmp;
//}

//void test01() {
//	Person p1;
//	p1.m_A = 10;
//	p1.m_B = 7;
//	Person p2;
//	p2.m_A = 10;
//	p2.m_B = 7;
//	Person p3 = p1 + p2;
//	cout << p3.m_A << p3.m_B << endl;
//}

/*
4.5.2 ����
��������Զ�����������
*/


//class milk {
//	public:
//		int m_A;
//		int m_B;
//		// ����������޷�ʹ�ó�Ա�����ķ�ʽʵ�����أ���Ϊ�ᵼ��cout����
//};
//
//ostream &operator<<(ostream &cout, milk &p) {
//	cout << "p.m_A = " << p.m_A << " " << "p.m_B = " << p.m_B;
//	return cout;
//}
//
//void test02() {
//	milk p1;
//	p1.m_A = 5;
//	p1.m_B = 10;
//	cout << p1 << endl;
//}

/*
4.5.3 ����
ʵ���Լ�����������
*/
//class Interger {
//		friend ostream &operator<<(ostream &cout, Interger &p);
//	public:
//		int m_A = 10;
//		// ����ǰ��++
//		Interger &operator++() {
//			m_A ++;
//			return *this;
//		}
//		// ���غ���++
//		Interger operator++(int) {
//			Interger tmp = *this;
//			m_A ++;
//			return tmp;
//		} //����ֵ�����ؾֲ����ö����Ѿ��ͷţ��Ƿ�������
//};

//ǰ��
//ostream &operator<<(ostream &cout, Interger & p) {
//	cout << "����m_A:" << p.m_A << endl;
//	return cout;
//}
//����
//ostream &operator<<(ostream &cout, Interger p) {
//	cout << "����m_A:" << p.m_A << endl;
//	return cout;
//}


//void test03() {
//	Interger p;
//	cout << p << endl;
//	cout << ++p << endl;
//}

//void test04() {
//	Interger p1;
//	cout << p1++;
//}

/*
4.5.4 ��ֵ
��ֵ�����operator=��������ֵ���п���
�������������ָ�����������ֵ����ʱҲ�������ǳ����
*/
//class Person {
//	public:
//		Person (int age) {
//			m_Age = new int(age);
//		}
//		int *m_Age;
//		~Person () {
//			if (m_Age != NULL) {
//				delete m_Age;
//				m_Age = NULL;
//			}
//		}
//
//		Person &operator=(Person &p) {
//			//���ж��Ƿ��������ڶ����������ͷ�
//			if (m_Age != NULL) {
//				delete m_Age;
//				m_Age = NULL;
//			}
//			//������ڶ��������µ����ݣ�������������
//			m_Age = new int(*p.m_Age);
//			return *this;
//		}
//};

//void test05() {
//	Person p1(18);
//	Person p2(20);
//	Person p3(22);
//	p3 = p2 = p1;
//	cout << "p1������Ϊ��" << *p1.m_Age << endl;
//	cout << "p2������Ϊ��" << *p2.m_Age << endl;
//	cout << "p3������Ϊ��" << *p3.m_Age << endl;
//}

/*
4.5.5 ��ϵ
��ϵ��������أ������������Զ������͵Ķ�����жԱȲ�����
*/
//class Person {
//	public:
//		Person(string name, int age) {
//			m_Name = name;
//			m_Age = age;
//		}
//		string m_Name;
//		int m_Age;
//		bool operator==(Person &p) {
//			return (m_Name == p.m_Name && m_Age == p.m_Age);
//		}
//};

//void test06() {
//	Person p1("Jack", 18);
//	Person p2("Jack", 20);
//	if (p1 == p2) {
//		cout << "��ͬ" << endl;
//	} else {
//		cout << "����ͬ" << endl;
//	}
//}

/*
4.5.6 ��������
()�������أ���Ϊ�º���
*/
class Add {
	public:
		int a;
		int b;
		int operator()(int a, int b) {
			return a + b;
		}
};
/*************************************************************************/

void test07() {
	Add add;
	cout << add(10, 10) << endl;
	//������������
	cout << Add()(200, 200) << endl;
}


int main() {
	//test01();
	//test02();
	//test03();
	//test04();
	//test05();
	//test06();
	test07();
	system("pause");
	return 0;
}