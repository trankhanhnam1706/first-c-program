
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double a,p,n,r,year;
    cout<<"chuong trinh tinh lai suat ngan hang:"<<endl;
    cout<<"nhap so tien gui: ";cin>>p;
    cout<<"nhap phan tram lai suat: ";cin>>r;
    r=r/100;
    cout<<"nhap so nam gui: ";cin>>n;
    cout<< setiosflags(ios::fixed|ios::showpoint)<<setprecision(2);
    cout<<"year"<<setw(40)<<"so tien co trong tai khoan la:"<<endl;
    for (year=0;year<n;year=year+1){
        p=p+p*r;
        cout<<year<<setw(21)<<p<<endl;
    }
    return 0;
}
