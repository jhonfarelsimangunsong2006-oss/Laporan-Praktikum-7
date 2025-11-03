#include<iostream>
#include<iomanip>
using namespace std;
double suhu1(double suhuf){
    return suhuf*9/5+32;
}
double suhu2(double suhuk){
    return suhuk+273.15;
}
int main()
{   int n;
    cout<<"Masukkan jumlah data suhu: ";
    cin>>n;
    double x[n];
    int i;
    for(i=0 ; i<n ;i++){
    cout<<"masukkan nilai celcius "<<i+1<<":";
    cin>>x[i];}
    cout<<right<<setw(10)<<"celcius"<<right<<setw(15)<<"fahrenheit"<<right<<setw(10)<<"kelvin"<<endl;
    cout<<"----------------------------------------------------"<<endl;
    for(i=0 ; i<n ; i++){
    cout<<right<<setw(10)<<x[i]<<right<<setw(15)<<suhu1(x[i])<<right<<setw(10)<<suhu2(x[i])<<endl;
}
return 0;
}
