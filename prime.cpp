#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "enter a number you wanna cheack :";
    cin >> n;
    bool isprime=true;

    for(int i=2 ; i*i <=n ; i++){
        if (n % i == 0){
            isprime=false;
            break;
        }
    }

    // for(int i=2 ; i <= n-1 ; i++){
    //     if (n % i == 0){
    //         isprime=false;
    //         break;
    //     }
    // }

    if (isprime==true){
        cout<<"it's a prime number\n";
    }else{
        cout<<"it's not prime\n";
    }

    return 0;
}