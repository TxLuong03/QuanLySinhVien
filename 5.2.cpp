#include <iostream>
using namespace std;
class student{
	private:
		char hoten[30];
		float d1,d2;
	public:
		void nhap();
		void xuat();
		float dtb(){
			return (d1+2*d2)/3;
		}
		void hienthi(){
			if(dtb()>=5){
				cout<<"\nSinh vien co diem trung binh tren 5 la : "<<hoten;
			}
		}
};
void student::nhap(){
	cin.ignore(1);
	cout<<"Nhap ho ten : ";
	cin.getline(hoten,30);
	cout<<"Nhap diem 1 : ";
	cin>>d1;
	cout<<"Nhap diem 2 : ";
	cin>>d2;
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
