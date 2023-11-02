#include<iostream>
using namespace std;
int main(){
    float f;
    cout<<"Enter the temp in fahrenheit:";
    cin>>f;
    cout<<(5/9);
    float c = (f-32)*(5.f/9.f);
    cout<<"The "<<f<<"℉ is " << c<<"℃"<<endl;
}