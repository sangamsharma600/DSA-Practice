/*
1   2   3   4
1   2   3   4
1   2   3   4
1   2   3   4
*/

#include<iostream>
using namespace std;
int main(){
    int i =1,num;
    cout<<"Enter a number:";
    cin>>num;
    while(i<=num){
        int j=1;
        while(j<=num){
            cout<<j<<"\t";
            j++;
        }
        cout<<endl;
        i++;
    }
}