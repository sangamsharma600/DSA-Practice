/*
1   2   3   4   3   2   1
1   2   3   *   3   2   1
1   2   *   *   *   2   1
1   *   *   *   *   *   1
*/

#include<iostream>
using namespace std;
int main(){
    int i = 1,n;
    cout<<"Enter a num:";
    cin>>n;

    while (i <= n) {
        int j = 1;

        // Print the numbers in increasing order on the left side
        while (j <= i) {
           cout << j << " ";
            j++;
        }

        // Print asterisks in the middle
        int numAsterisks = 2 * (n - i);
        for (j = 1; j <= numAsterisks; j++) {
            cout << "* ";
        }

        // Print the numbers in decreasing order on the right side
        j = i;
        while (j >= 1) {
            std::cout << j;
            if (j != 1) {
                cout << " ";
            }
            j--;
        }

        cout << std::endl;
        i++;
    }
}