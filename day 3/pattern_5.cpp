/*
1
2   2
3   3   3
4   4   4   4
*/

#include<iostream>
using namespace std;
int main(){
int i =1,num;
cout<<"Enter a number:";
cin>>num;
while(i<=num){
  int j=1;
  while(j<=i){
    cout<<i<<"\t";
    j++;
  }
  cout<<endl;
  i++;
}
}