#include <iostream>
#include <string>
using namespace std;
//C++����ģ�� thisָ��
/*4.3.1 ��Ա�����ͳ�Ա�����ֿ��洢��ֻ�зǾ�̬��Ա������������Ķ����ϡ�����Ҳ��ռ����ռ䣬
���к�������һ������ʵ����

thisָ��ָ�򱻵��õĳ�Ա���������Ķ������趨�壬ֱ��ʹ�á�
ʹ�������
��1�����β����Ա��������ʱ������ʹ�ã�
��2������ķǾ�̬��Ա�����з��ض���������return *this
*/

class Person {
	public:
		Person(int age) {
			this -> age = age;
		}
		int age;

		//���ض���Ӧ�������õķ�ʽPerson&
		//�����ֵ��ʽ���أ�����ÿ������캯��Person PersonAddAge�����ؿ����Ķ�����ԭ�޹ء�
		Person PersonAddAge(Person &p) {
			this -> age += p.age;
			cout << "��ʱ�ҵ�ֵΪ��" << this->age;
			return *this;
		}
};


void test01() {
	Person p1(18);
	cout << "����Ϊ��" << p1.age << endl;
}

void test02() {
	Person p1(5);
	Person p2(7);
	p2.PersonAddAge(p1);
	cout << "p2����Ϊ��" << p2.age << "�������죺" << p2.PersonAddAge(p1).age << endl;
}

/*4.3.3 ��ָ����ʳ�Ա����
��ָ����Ե��ó�Ա������������Ҫ�ж��Ƿ��õ�thisָ�롣
*/

int main() {
	test02();
	return 0;
}