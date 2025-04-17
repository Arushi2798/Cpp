#include <iostream>
using namespace std;

// decimal to binary
int binarytodecimal(int n){
    int power = 1;
    int ans=0;
    while (n>0){
        int r = n%2;
        n=n/2;

        ans+=(r*power) ;
        power*=10;
    }
    cout<< ans;
}

int main(){
    int n;
    cin>>n;
    // binarytodecimal(n);
    
    
    return 0;
}