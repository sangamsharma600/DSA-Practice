/*
A   B   C
A   B   C
A   B   C
*/
#include<iostream>
using namespace std;
int main(){
    int i=1,num;
    cout<<"Enter a num:";
    cin>>num;
    while(i<=num){
        int j =1;
        while(j<=num){
            char ch = 'A'+j-1;
            cout<<ch<<"\t";
            j++;
        }
        cout<<endl;
        i++;
    }
}