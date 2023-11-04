/*
1
2   1
3   2   1
4   3   2   1
*/
#include<iostream>
using namespace std;
int main(){
    int i =1, num;
    cout<<"Enter a num:";
    cin>>num;
    while(i<=num){
        int j =1;
        while(j<=i){
            cout<<i-j+1<<"\t";
            j++;
        }
        cout<<endl;
        i++;
    }
}