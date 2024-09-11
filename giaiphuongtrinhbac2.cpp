#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double x1,x2,a,b,c,delta;
    cout<<"chuong trinh giai phuong trinh bac 2: ax^2+bx+c=0:"<<endl;
    cout<<"nhap he so a: ";cin>>a;
    cout<<"nhap he so b: ";cin>>b;
    cout<<"nhap he so c: ";cin>>c;
    delta=pow(b,2)-4*a*c;
    if (delta>=0){
            if (delta==0)
            {
                x1=(-b)/(2*a);
                cout<<"phuong trinh co nghiem kep: \n x1=x2= "<<x1<<endl;
            }
            else {
                x1=(-b+sqrt(delta))/(2*a);
                x2=(-b-sqrt(delta))/(2*a);
                cout<<"phuong trinh co 2 nghiem:\n"<<"x1 la: "<<x1<<"\n"<<"x2 la: "<<x2<<endl;
            }
        }
     else cout<<"phuong trinh vo nghiem: "<<endl;
    return 0;
}
