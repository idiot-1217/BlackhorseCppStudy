/*
***��������***
*���캯���������ʼ��������(){}
1.���캯����û�з���ֵҲ��дvoid
2.����������������ͬ
3.���캯�������в�������˿��Է�������
4.�����ڵ��ö���ʱ����Զ����ù��죬�����ֶ�����,����ֻ�����һ��

*���캯���ķ��ࣺ
1.���ղ�������Ϊ�вι�����޲ι��죬�޲ι������ΪĬ�Ϲ���
2.�������ͷ���Ϊ��ͨ����Ϳ�������
class Person {
public:
	Person() {
	}
	Person(int a) {
	}
	Person(const Person& p) {
	}
}

*���캯���ĵ���
1�����ŷ� Person p1(10);�����޲ι��캯��ʱ���ü����ţ������Ǻ�������
2����ʽ�� Person p2 = Person(10); Person p3 = Person(p2);ǰ������ͨ�����ǿ�����Person(10)Ϊ��������
��������ǰ�������꼴���ͷš�
3����ʽת���� Person p4 = 10; Person p5 = p4;�������ÿ������캯����ʼ���������󣬱�������Ϊ�Ƕ�����
��Person p5(p4)

*�������캯���ĵ���ʱ��
1. ʹ���Ѵ����Ķ����ʼ��һ���¶���
void test01() {
	Person p1;
	Person p2(p1);
}
2. ֵ���ݵķ�ʽ������������ֵ
void do(Person p) {
}
void test02() {
	Person p3;
	do(p3);
}
3. ֵ��ʽ���ؾֲ�����
void do2() {
	Person p4;
	return p4;
} //���ض���ĸ���
void test03() {
	Person p5 = do2();
}

*���캯���ĵ��ù���
Ĭ������£�����һ���࣬C++�����ṩ������������Ĭ�Ϲ��캯����Ĭ�������������������캯��
����û��Զ������вι��캯������ôC++�����ṩĬ�ϵ��޲ι��캯��������Ȼ�ṩ�������캯����
����û������˿������캯������ôC++�����ṩ�����Ĺ��캯����

*�����ǳ����
ǳ�������򵥵Ŀ�����ֵ������
������ڶ������¿��ٿռ䣬���ڿ�����
�������ٵ�����ͨ�����������ͷ�
if (m_h != NULL) {
	delete m_h;
	m_h = NULL;
}
ǳ���������������� �����������ظ��ͷš��������Ϊ������û���д�������캯�����ڶ�������
����һ��ռ䡣

*��ʼ���б�
Person() :m_a(10),m_b(20)
{
}
����
Person(int a, int b):m_a(a), m_b(b)
{
}



*��������������������~����(){}
1.����������û�з���ֵҲ��дvoid
2.����������������ͬ,������ǰ���Ϸ��� ~
3.���������������в�������˲����Է�������
4.�����ڶ�������ǰ���Զ����������������ֶ�����,����ֻ�����һ��

�������ṩ�Ĺ���������Ϊ��ʵ��


*/