#include <iostream>

using namespace std;
<<<<<<< HEAD
int tong(int a, int b)
{
	return a+b;
}

int hieu(int a, int b)
{
	return a-b;
}

int tich(int a, int b);
float thuong(int a, int b);
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	int a,b;
	cout<<"Nhap a la: ";cin>>a;cout<<endl;	
	cout<<"Nhap b la: ";cin>>b;cout<<endl;
	cout<<"Tong cua a va b la: "<<tong(a,b);
	cout<<"Hieu cua a va b la: "<<hieu(a,b);

	system("pause");
	return 0;
}