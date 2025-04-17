#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    string reminder;
    cin>>n;
    while (n!=0){
        int r = n%2;
        n=n/2;
        cout << r ;
    }
    // cout << r ;
    return 0;
    // return 0;
}