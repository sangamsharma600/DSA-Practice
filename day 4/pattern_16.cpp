/*
D   
C   D   
B   C   D
A   B   C   D
*/

#include<iostream>
using namespace std;
int main(){
    int i =1, num;
    cout<<"Enter a num:";
    cin>> num;

    while(i<=num){
        char ch = 'A'+num-i;
        int j =1;
        while(j<=i){
            cout<<ch<<"\t";
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
}