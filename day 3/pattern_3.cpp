/*
1   2   3
4   5   6
7   8   9
*/
#include<iostream>
using namespace std;
int main(){
    int i=1, num, n=1;
    cout<<"Enter a number:";
    cin>>num;
    while(i<=num){
        int j=1;
        while (j<=num){
            cout<<n<<"\t";
            n++;
            j++;
        }
        cout<<endl;
        i++;
    }
}