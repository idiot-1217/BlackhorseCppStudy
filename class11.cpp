//������󣺷�װ/��������

#include <iostream>
#include <string>
using namespace std;
/*
const double PI = 3.1415;

class Circle {
	public:
		int radius;
		double calculate() {
			return 2 * PI * radius;
		}
};

int main() {
	Circle c1;
	c1.radius = 1;
	cout << "C1 ���ܳ�Ϊ��" << c1.calculate() << endl;
	return 0;
}
*/
/*
class student {
	public:
		string name;
		int id;
		void show() {
			cout << "ѧ���������ǣ�" << name << endl;
			cout << "ѧ����ѧ���ǣ�" << id << endl;
		}
};

int main() {
	student s1;
	student s2;
	s1.name = "����";
	s1.id = 220221166;
	s2.name = "����";
	s2.id = 220221167;
	s1.show();
	s2.show();
	return 0;
}
*/

/* ��װ�ķ���Ȩ��
����Ȩ��public: ��Ա���ڿ��Է��ʣ�����Ҳ���Է���
����Ȩ��protected: ��Ա���ڿ��Է��ʣ����ⲻ���Է��ʣ���������Է��ʡ�
˽��Ȩ��private: ��Ա���ڿ��Է��ʣ����ⲻ���Է��ʣ������಻���Է��ʡ�
*/
/*
class person {
	public:
		int age;
		string name;
	protected:
		int tel;
		string address;
	private:
		int money = 10;
	public:
		void show() {
			cout << money << endl;
		}
};

int main() {
	person p1;
	p1.age = 10;
	p1.name = "Jack";
	cout << p1.age << " " << p1.name << endl;
	p1.show();
	return 0;
}
*/
/*struct �� class ��Ĭ�Ϸ���Ȩ��
structĬ��Ȩ��Ϊpublic��classĬ��Ȩ��Ϊprivate��
*/

/*��Ա����˽�л�
�����Լ����ƶ�дȨ�ޣ�������ݵ���Ч�ԡ�
private���ⲻ�ɷ��ʣ�������ͨ������public������Ӷ�д˽�����ԡ�
*/

/*
class cube {
	public:
		void set_L(double L) {
			m_L = L;
		}
		double get_L() {
			return m_L;
		}
		void set_W(double W) {
			m_W = W;
		}
		double get_W() {
			return m_W;
		}
		void set_H(double H) {
			m_H = H;
		}
		double get_H() {
			return m_H;
		}
		//�����
		double aera() {
			return 2 * (m_L * m_W + m_L * m_H + m_W * m_H);
		}
		//���
		double volume() {
			return m_L * m_W * m_H;
		}
		bool isSame(cube &s) {
			return ((m_H == s.get_H()) && (m_W == s.get_W()) && (m_L == s.get_L()));
		}
	private:
		double m_L;
		double m_W;
		double m_H;
};

bool isIdentity(cube &a, cube &b) {
	return ((a.get_H() == b.get_H()) && (a.get_W() == b.get_W()) && (a.get_L() == b.get_L()));
}

int main() {
	cube c1;
	cube c2;
	cube c3;
	c1.set_H(1.2);
	c1.set_L(1.3);
	c1.set_W(1.4);
	c2.set_H(1.5);
	c2.set_L(1.6);
	c2.set_W(1.7);
	c3.set_H(1.2);
	c3.set_L(1.3);
	c3.set_W(1.4);
	cout << "1�������" << c1.aera() << "1�������" << c1.volume() << endl;
	cout << "2�������" << c2.aera() << "2�������" << c2.volume() << endl;
	cout << isIdentity(c1, c2) << endl;
	cout << c1.isSame(c3) << endl;
	return 0;
}
*/
class point;

class circle {
	private:
		float center[2];
		float radius;
	public:
		void set_center(float x, float y) {
			center[0] = x;
			center[1] = y;
		}
		float get_center() {
			cout << center << endl;
		}
		void set_radius(float r) {
			radius = r;
		}
		float get_radius() {
			return radius;
		}
		void relation_to_point(point &s) {
			float tmp = (s.get_location()[0] - center[0]) ^ 2 + (s.get_location()[1] - center[1]) ^ 2;
			if (tmp < radius ^ 2) {
				cout << "����Բ��" << endl;
			} else if (tmp = radius ^ 2) {
				cout << "����Բ��" << endl;
			} else {
				cout << "����Բ��" << endl;
			}
		}
};

class point {
	private:
		float location[2];
	public:
		void set_location(float a, float b) {
			location[0] = a;
			location[1] = b;
		}
		float get_location() {
			cout << location << endl;
		}
};

int main() {
	circle c1;
	point p1, p2, p3;
	c1.set_center(1, 1);
	c1.set_radius(2);
	p1.set_location(0, 1);
	p2.set_location(3, 1);
	p3.set_location(5, 5);
	cout << "Բ�ģ�" << c1.get_center() << endl;
	cout << c1.relation_to_point(p1) << "\n" << c1.relation_to_point(p2) << "\n" << c1.relation_to_point(p3) << endl;
	return 0;
}