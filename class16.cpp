#include <iostream>
#include <string>
using namespace std;

/***********************************************************************************
4.4 友元
	关键字：friend
	目的：让一个函数或类，访问另一个类中的私有成员
4.4.1 全局函数做友元

4.4.2 类做友元

4.4.3 成员函数做友元

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
	cout << "公共属性：" << building->m_sittingroom << "私有属性：" << building->m_bedroom;
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
