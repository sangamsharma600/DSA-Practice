 #include<iostream>
 using namespace std;
 int main(){
    int num,i=1;
    cout<<"Enter the square number:";
    cin>>num;
    while(i<=num){
        int j=1;
        while(j<=num){
            cout<<"*\t";
            j++;
        }
        cout<<"\n";
        i++;
    }
 }