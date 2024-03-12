#include <iostream>
using namespace std;

void student::nhap(){
	
}
void student::xuat(){
	cout<<"\nHo ten sinh vien : "<<hoten;
	cout<<"\nDiem 1 sinh vien : "<<d1;
	cout<<"\nDiem 2 sinh vien : "<<d2;
}
main(){
	int n;
	cout<<"\nNhap so luong sinh vien : ";
	cin>>n;
	student a[30];
	for(int i=0;i<n;i++){
		cout<<"\nSinh vien thu "<<i+1<<" co thong tin la : \n";
		a[i].nhap();
		}
	for(int i=0;i<n;i++)
	a[i].xuat();
	for(int i=0;i<n;i++)
	a[i].hienthi();
}
