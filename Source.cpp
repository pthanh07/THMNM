#include <iostream>

using namespace std;
int tong(int a, int b){
	return a + b;
}
int hieu(int a, int b);{
	return a-b;
}
int tich(int a, int b){
	return a*b;
}
float thuong(int a, int b);
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout << hieu(5,2);
	cout << tong(3, 5);
	cout << tich(3,5);
	cout << "hello";
	system("pause");
	return 0;
}