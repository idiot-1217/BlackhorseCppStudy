#include <iostream>
using namespace std;
#include <string>

//����ע��
/*����ע��*/

//�곣��
#define PI 3.1415

//short 2 int 4 long 4 long long 8
//float 4 double 8
int main() {
	int a = 1;
	int n;
	//const���γ���
	const int z = 1;
	float b1 = 3.14; //3.14��Ĭ��˫���ȣ���ת��Ϊ������
	float b2 = 3.14f; //�˴�3.14�ǵ�����
	char c = 'X'; //�ַ��ͱ�����ռ1�ֽڣ�ֻ���õ����ţ��ڽ�һ���ַ����洢ʱת��ΪASCII��(int)c
	//ת���ַ� \n���� \\���\ \tˮƽ�Ʊ�
	//�ַ��� C���
	char a[] = "as";
	//C++���
	string a = "as"; //��Ҫͷ�ļ�#include <string>;
	cout << "�����룺" << endl;
	cin >> n;
	cout << n + a + PI + z << endl;
	return 0;
}