/*
1
2   3
3   4   5
4   5   6   7
*/

#include<iostream>
using namespace std;
int main(){
int i =1,num;
cout<<"Enter a number:";
cin>>num;
while(i<=num){
int count=i;
  int j=1;
  while(j<=i){
    cout<<count<<"\t";
    count++;
    j++;
  }
  cout<<endl;
  i++;
}
// without using the count value
cout<<"Printing the pattern using different method:"<<endl;
i=1;
while(i<=num){
int count=i;
  int j=1;
  while(j<=i){
    cout<<i+j-1<<"\t";
    count++;
    j++;
  }
  cout<<endl;
  i++;
}
}