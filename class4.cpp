#include <iostream>
#include <string>
using namespace std;

//Ѱ�����ֵ
//int main() {
//	int a[4] = {23, 245, 33, 49};
//	int arr[5];
//	int max = a[0];
//	for (int i = 1; i < 4; i++) {
//		if (a[i] > max) {
//			max = a[i];
//		}
//	}
//	cout << max << endl;
//	return 0;
//}

//��ת�������
//int main() {
//	int n = 0;
//	cin >> n;
//	int arr[n];
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//	int i = 0;
//	while (i < n) {
//		cout << arr[n - i - 1];
//		i++;
//	}
//	return 0;
//}

//ð������
//int main() {
//	int arr[9] = {4, 1, 8, 6, 5, 7, 9, 3, 2};
//	for (int i = 0; i < 9; i++) {
//		for (int j = 0; j < 9 - 1 - i; j++) {
//			if (arr[j] > arr[j + 1]) {
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	for (int i = 0; i < 9; i++) {
//		cout << arr[i] << " ";
//	}
//	return 0;
//}

//��ά����
//int main() {
//	//���巽ʽ1
//	int a[2][2];
//	//���巽ʽ2
//	int b[2][3] = {{1, 2, 3}, {4, 5, 6}};
//	//���巽ʽ3
//	int c[2][3] = {1, 2, 3, 4, 5, 6};
//	//���巽ʽ4
//	int d[][3] = {1, 2, 3, 4, 5, 6};
//	system("pause");
//	//��ά��������ƿ��Բ鿴ռ�ÿռ�Ĵ�С���鿴��ά������׵�ַ��
//	return 0;
//}

//��ά���鰸��
int main() {
	int a[3][3] = {
		{100, 100, 100},
		{90, 50, 100},
		{60, 70, 80}
	};
	for (int i = 0; i < 3; i++) {
		int tmp = 0;
		for (int j = 0; j < 3; j++) {
			tmp += a[i][j];
		}
		cout << "�ܷ�Ϊ��" << tmp << endl;
	}
	return 0;
}