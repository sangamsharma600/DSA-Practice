/*
4   3   2   1
4   3   2   1
4   3   2   1
4   3   2   1
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
            // Since we are printing in inverted order we use the formula (num-j+1)
            
            cout<<num-j+1<<"\t";
            j++;
        }
        cout<<endl;
        i++;
    }
    // Printing same pattern using decrement method:
    cout<<"Printing same pattern using different method:";
    i=1;
    while(i<=num){
        int j=num;
        while(j>=1){
            cout<<j<<"\t";
            j--;
        }
        cout<<endl;
        i++;
    }
}