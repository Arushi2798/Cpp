#include <iostream>
using namespace std;

int main(){
    int n;
    int power = 1;
    cin>>n;
    int ans=0;
    while (n>0){
        int r = n%2;
        n=n/2;
        ans+=r*power ;
        power+=10;
    }
    cout << ans ;
    return 0;
    // return 0;
}