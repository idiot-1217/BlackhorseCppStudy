#include <iostream>
#include <string>
using namespace std;

/***********************************************************************************
4.4 ��Ԫ
	�ؼ��֣�friend
	Ŀ�ģ���һ���������࣬������һ�����е�˽�г�Ա
4.4.1 ȫ�ֺ�������Ԫ

4.4.2 ������Ԫ

4.4.3 ��Ա��������Ԫ

***********************************************************************************/
class Building {
		friend void visit(Building *building);
	public:
		Building() {
			m_sittingroom = "123";
			m_bedroom = "124";
		}
		string m_sittingroom;
	private:
		string m_bedroom;
};

void visit(Building *building) {
	cout << "�������ԣ�" << building->m_sittingroom << "˽�����ԣ�" << building->m_bedroom;
}

void test01() {
	Building b1;
	visit(&b1);
}

int main() {
	test01();
	system("pause");
	return 0;
}
