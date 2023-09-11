#include <iostream>
#include <string>
using namespace std;

//寻找最大值
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

//翻转输出数组
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

//冒泡排序
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

//二维数组
//int main() {
//	//定义方式1
//	int a[2][2];
//	//定义方式2
//	int b[2][3] = {{1, 2, 3}, {4, 5, 6}};
//	//定义方式3
//	int c[2][3] = {1, 2, 3, 4, 5, 6};
//	//定义方式4
//	int d[][3] = {1, 2, 3, 4, 5, 6};
//	system("pause");
//	//二维数组的名称可以查看占用空间的大小，查看二维数组的首地址。
//	return 0;
//}

//二维数组案例
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
		cout << "总分为：" << tmp << endl;
	}
	return 0;
}