/*
        1
    1   2   1
1   2   3   2   1
*/

#include<iostream>
using namespace std;
int main(){
    int i=1,num;
    cout<<"Enter a num:";
    cin>>num;
    while(i<=num){
        int space = num-i;
        int j =1;
        while(space){
            cout<<"\t";
            space--;
        }
        while(j<=i){
            cout<<j<<"\t";
            j++;
        }
        int start = i-1;
        while(start){
            cout<<start<<"\t";
            start--;
        }
        cout<<endl;
        i++;
    }
}