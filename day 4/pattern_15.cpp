/*
A
B   C
C   D   E
D   E   F   G
*/

#include<iostream>
using namespace std;
int main(){
    int i =1, num;
    cout<<"Enter a num:";
    cin>> num;
    while(i<=num){
        int j =1;
        while(j<=i){
            char ch = 'A'+i+j-2;
            cout<<ch<<"\t";
            j++;
        }
        cout<<endl;
        i++;
    }
}