#include <iostream>
using namespace std;

int main(){

    // // to print 
    
    // int y,n;

    // cout<<"numbers from: ";
    // cin>>n;
    // cout<<"numbers till: ";
    // cin>>y;
    
    // for (int i=n;i<=y;i++){
    //     for (int j= n ; j<=y ; j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }


    // to print 
    // ABC
    // ABC
    // ABC
    // ABC
    int x;
    char y,n;
    cout<<"number of rows: ";
    cin>>x;
    cout<<"char from: ";
    cin>>n;
    cout<<"char till: ";
    cin>>y;
    
    for (int i=0;i<=x-1;i++){
        for (char j= n ; j<=y ; j++){
            cout<<j;
        }
        cout<<endl;
    }


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