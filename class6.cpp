#include <iostream>
using namespace std;

//基础课程最后两部分：指针与结构体
//一、指针
// int main() {
//	int a = 10;
//定义指针 类型 * 指针变量名
//int *p;
//将指针p指向对应a的内存
//p = &a; //或者 int *p = &a
//通过p获取值,解引用
// cout << *p << endl;
//指针所占内存空间：32位操作系统下，指针占用4个字节；64位操作系统，占8个字节。
//空指针：用于指针初始化，指向地址为0，但不可以访问，0~255之间的内存编号为系统内存占用。
//	int *p = NULL;
//	cout << p << endl;
//野指针：指针变量指向非法空间 int *p = (int *)0x1100; 不要随意访问空、野指针，地址非申请。

// ***常量指针***
// const int *p = &a; const修饰解引用指针p，指向地址可以改，但指向的值不可以改。
// ***指针常量***
// int * const p = &a; const修饰指针p，意味着地址不可以改，但指向的值可以改。
// ***const双重修饰***
// const int * const p = &a; 地址、值都不可以修改。
// 利用指针访问数组中的元素：
//	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	int *p = arr;
//	cout << *p << endl;
//	p++;
//	cout << *p << endl;
// 指针作为函数的参数
//	地址传递可以修饰实参

//	system("pause");
//	return 0;
//}

// 案例：封装一个函数，利用冒泡排序，实现对整形数组的升序排序
void swap(int *p1, int *p2) {
	int tmp = *p2;
	*p2 = *p1;
	*p1 = tmp;
}

int main() {
	int arr[15] = {12, 23, 35, 13, 6, 47, 29, 46, 0, 10, 25, 44, 31, 17, 3};
	for (int i = 14; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
		}
	}
	for (int k = 0; k < 15; k++) {
		cout << arr[k] << endl;
	}
	return 0;
}

