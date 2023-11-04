/*
A   B   C
D   E   F   
G   H   I
*/
#include<iostream>
using namespace std;
int main(){
    int i=1,num;
    cout<<"Enter a num:";
    cin>>num;
    char ch = 'A';
    while(i<=num){
        int j =1;
        while(j<=num){
            
            cout<<ch<<"\t";
            j++;
            ch+=1;

        }
        cout<<endl;
        i++;
    }
}