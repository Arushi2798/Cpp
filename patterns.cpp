#include <iostream>
using namespace std;

int main(){
    
    
    // to print 
    // 1 2 3 
    // 4 5 6
    // 7 8 9
    // 10 11 12
    
    int x,n;

    cout<<"number of rows: ";
    cin>>x;
    cout<<"numbers from: ";
    cin>>n;

    for (int i=0; i<x ;i++){        
        for (int j= 0 ; j< 3; j++){
            cout<<n<<" ";
            n++;
        }
        cout<<endl;
    }

    // // to print 
    // // ABC
    // // DEF
    // // GHI
    // // JKL
    
    // int x;

    // cout<<"number of rows: ";
    // cin>>x;
    // char ch='A';

    // for (int i=0;i<x;i++){        
    //     for (int j= 0 ; j< 3; j++){
    //         cout<<ch;
    //         ch++;
    //     }
    //     cout<<endl;
    // }


    // // to print 
    // // A
    // // AB
    // // ABC
    // // ABCD
    
    // int x;

    // cout<<"number of rows: ";
    // cin>>x;
    
    // for (int i=0;i<x;i++){
    //     char ch='A';
    //     for (int j= 0 ; j<= i; j++){
    //         cout<<ch;
    //         ch++;
    //     }
    //     cout<<endl;
    // }

    // // to print 
    // // *
    // // **
    // // ***
    // // ****
    
    // int x;

    // cout<<"number of rows: ";
    // cin>>x;
    
    // for (int i=0;i<x;i++){
    //     for (int j= 0 ; j<=i ; j++){
    //         cout<<'*';
    //     }
    //     cout<<endl;
    // }


    // // to print 
    // // ABC
    // // ABC
    // // ABC
    // // ABC
    // int x;
    // char y,n;
    // cout<<"number of rows: ";
    // cin>>x;
    // cout<<"char from: ";
    // cin>>n;
    // cout<<"char till: ";
    // cin>>y;
    
    // for (int i=0;i<=x-1;i++){
    //     for (char j= n ; j<=y ; j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }


    // // to print 
    // // 1234
    // // 1234
    // // 1234
    // // 1234

    // int x,y,n;
    // cout<<"number of rows: ";
    // cin>>x;
    // cout<<"numbers from: ";
    // cin>>n;
    // cout<<"numbers till: ";
    // cin>>y;
    
    // for (int i=0;i<=x-1;i++){
    //     for (int j= n ; j<=y ; j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }


    // // to print 
    // // *****
    // // *****
    // // *****
    // // *****
    // int x,y;
    // cout<<"number of rows: ";
    // cin>>x;
    // cout<<"number of stars: ";
    // cin>>y;
    
    // for (int i=0;i<=x-1;i++){
    //     for (int j= 0 ; j<=y ; j++){
    //         cout<<'*';
    //     }
    //     cout<<endl;
    // }

    return 0;
}