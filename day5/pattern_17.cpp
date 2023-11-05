/*
            *
        *   *
    *   *   *
*   *   *   *    
*/

#include<iostream>
using namespace std;
int main(){
    int i=1, num;
    cout<<"Enter a number:";
    cin>>num;
    while(i<=num){
    int space = num-i;
        while(space){
            cout<<"\t";
            space--;
        }
        int j=1;
        while(j<=i){
            cout<<"*\t";
            j++;
        }
        cout<<endl;
        i++;
    }
}