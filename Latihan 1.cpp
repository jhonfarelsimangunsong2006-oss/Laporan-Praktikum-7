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
{
    double x[4];
    int i;
    for(i=1 ; i<5 ;i++){
    cout<<"masukkan nilai celcius "<<i<<":";
    cin>>x[i];}
    cout<<left<<setw(10)<<"celcius"<<right<<setw(17)<<"fahrenheit"<<right<<setw(18)<<"kelvin"<<endl;
    cout<<"----------------------------------------------------"<<endl;
    for(i=1 ; i<5 ; i++){
    cout<<left<<setw(10)<<x[i]<<right<<setw(17)<<suhu1(x[i])<<right<<setw(18)<<suhu2(x[i])<<endl;
}

return 0;
}

