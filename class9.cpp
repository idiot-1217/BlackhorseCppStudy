//�����á�
//���ã������������
//�﷨���������� &����=ԭ����

//***ָ�������õĹ�ϵ��
//ָ��ָ������ĵ�ַ�����ú�ԭ��������ͬһ���ڴ棻
//ָ������ж༶������ֻ����һ����
//�ڶ���ʱ��ָ����Բ���ʼ�������ñ���Ҫ��ʼ������ȷ��˭�ı�����
//ָ�����ָ��գ���ָ�롢Ұָ�롣���ò�����ָ��ա���ˣ���Ϊ��������ʱ��ָ����Ҫ�ж��Ƿ�Ϊ�ա�
//ָ���ʼ��֮����Ըı䣬���ò����޸ġ�int &b = a; b = c;���ǽ�c��ֵ����b�����Ǹ������á�
//sizeof�����ͬ����64λ�����ϣ�int *ռ��8�ֽڣ�int ռ��4�ֽڡ�
//++�ĺ��岻ͬ��ָ������ڴ���ƣ����ò��ݱ���ֵ��1��

#include <iostream>
using namespace std;

//int main() {
//	int a = 10;
//	int &b = a;
//	cout << b << a << endl;
//	b = 9;
//	cout << b << a << endl;
//	a = 8;
//	cout << b << a << endl;
//	return 0;
//}

//������Ϊ������������ָ��
//void swap1(int a, int b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//void swap2(int *a, int *b) {
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//void swap3(int &a, int &b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//int main() {
//	int a = 10;
//	int b = 20;
//	swap1(a, b);
//	cout << a << " " << b << endl;
//	swap2(&a, &b);
//	cout << a << " " << b << endl;
//	swap3(a, b);
//	cout << a << " " << b << endl;
//	return 0;
//}

//������Ϊ�����ķ���ֵ��1.��Ҫ���ؾֲ����������ã�2.�����ĵ��ÿ�����Ϊ��ֵ��
//int &test() {
//	int a = 10;
//	return a;
//}
//
//int &test1() {
//	static int a = 10; //��̬������ȫ����
//	return a;
//}
//
//int main() {
//	int &ref = test1();
//	int &res = test();
//	test1() = 100;
//	cout << "����1��" << ref << endl;
////	cout << "����2��" << res << endl;
//}

// ���õı�����ָ�볣��
// �������ã������βΣ���ֹ�������
void show(const int &a) {
	cout << a << endl;
}

int main() {
	int a = 10;
	show(a);
	return 0;
}