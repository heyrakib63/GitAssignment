#include<bits/stdc++.h>
using namespace std;


int main(){

    int i, fact = 1, n;
    cout << "Enter the value of n: ";
    cin>>n;
    for(i = 1; i<=n; i++){
        fact*= i;
    }
    cout << "The factorial is: " << fact << endl;

    return 0;
}