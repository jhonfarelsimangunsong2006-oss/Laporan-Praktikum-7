#include<iostream>
using namespace std;

void tukar1( int r , int t ){
    int temp=r;
    r=t;
    t=temp;

}
void tukar2( int &x , int &y){
    int temp=x;
    x=y;
    y=temp;


}
int main(){
    int a , b;
    cout<<"masukkan bilangan pertama: ";
    cin>>a;
    cout<<"masukkan bilangan kedua: ";
    cin>>b;
cout<<"sebelum ditukar: "<<"a = "<<a<<" b = "<<b<<endl;
tukar1(a,b);
cout<<"setelah tukarByvalue: "<<"a = "<<a<<" b = "<<b<<endl;
tukar2(a,b);
cout<<"setelah tukarByreference: "<<"a = "<<a<<" b = "<<b;

return 0;

}
