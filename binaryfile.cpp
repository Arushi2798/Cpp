#include <iostream>
using namespace std;

// decimal to binary
int decimaltobinary(int n){
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

int binarytodecimal(int n){
    int pow=1, ans=0;
    while (n>0){
    int r=n%10;
    n/=10;

    r=r*pow;
    pow*=2;
    ans+=r;
    }
    cout<< ans;
}

int main(){
    int n;
    cin>>n;
    // decimaltobinary(n);
    binarytodecimal(n);
    
    return 0;
}