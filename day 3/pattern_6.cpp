/*
1
2   3
4   5   6
7   8   9   10
*/

#include<iostream>
using namespace std;
int main(){
int i =1,num,count=1;
cout<<"Enter a number:";
cin>>num;
while(i<=num){
  int j=1;
  while(j<=i){
    cout<<count<<"\t";
    count++;
    j++;
  }
  cout<<endl;
  i++;
}
}