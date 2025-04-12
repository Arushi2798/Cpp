#include <iostream>
using namespace std;

int main(){
    // to print butterfly pattern
    
//     // to print hollow diamond pattern
//     //        *
//     //       * *
//     //      *   *
//     //     *     *
//     //      *   *
//     //       * *
//     //        *

//     int x;
//     cout<<"size of daimond: ";
//     cin>>x;
    
//     for (int i=0 ; i<x ; i++){
//         for (int k=x-i-1 ; k>0 ; k--){
//             cout<<" ";
//         }
//         cout<<"*";
//         if (i!=0){
//             for (int j=0; j<2*i-1 ;j++){
//                 cout<<" ";}
//             cout<<"*";
//         }

        
//         cout<<endl;
//     }

//     for (int i=0 ; i<x-1 ; i++){
//         for (int k=0 ; k<i+1 ; k++){
//             cout<<" ";
//         }
//         cout<<"*";
//         if (i!= x-2){
//         for (int j=0 ; j<2*(x-i)-5 ;j++){
//             cout<<" ";
//         }
                
//         cout<<"*";
        
//     }cout<<endl;
// }

    // // to print hollow diamond pattern
    // //       *
    // //     *    *
    // //   *        *
    // // *            *
    // //   *        *
    // //     *    *
    // //       *
    
    // int x;
    // cout<<"size of daimond: ";
    // cin>>x;
    
    // for (int i=0 ; i<x ; i++){
    //     for (int k=x-i-1;k>0;k--){
    //         cout<<"  ";
    //     }
    //     cout<<"*";
    //     for (int j=0; j<i ;j++){
    //         cout<<"    ";
    //     }
    //     if (i>0){         
    //     cout<<"*";}
    //     cout<<endl;
    // }

    // for (int i=1 ; i<x ; i++){
    //     for (int k=0 ; k<i ; k++){
    //         cout<<"  ";
    //     }
    //     cout<<"*";

    //     for (int j=x-i-1; j>0 ;j--){
    //         cout<<"    ";
    //     }
    //     if (i<x-1){         
    //     cout<<"*";}
    //     cout<<endl;

    // }

    // // to print pyramid pattern
    // //    1
    // //   121
    // //  12321
    // // 1234321
    
    // int x;
    // cout<<"rows number: ";
    // cin>>x;
    
    // for (int i=0 ; i<x ; i++){
    //     for (int k=x-i-1 ; k>0 ; k--){
    //         cout<<" ";
    //     }
    //     for (int j=0; j < i+1 ;j++){
    //         cout<<j+1;
    //     }
    //     for (int l= i ; l>0; l--){
    //                 cout<<l;     
    //     }
    //     cout<<endl;
    // }

    // // to print 
    // // 1111
    // //  222
    // //   33
    // //    4
    
    // int x;
    // cout<<"rows number: ";
    // cin>>x;
    
    // for (int i=0 ; i<x ; i++){
    //     for (int k=0; k<i;k++){
    //         cout<<" ";
    //     }
    //     for (int j=0; j < x-i ;j++){
    //         cout<<i+1;
    //     }
    //     cout<<endl;
    // }

    // // to print floyd's triangle
    // // 1
    // // 23
    // // 456
    
    // int x,num;
    // cout<<"rows number: ";
    // cin>>x;
    // cout<<"numbers from: ";
    // cin>>num;

    // for (int i=0 ; i<x ; i++){
    //     for (int j=0 ; j<=i; j++){
    //         cout<<num;
    //         num++;
    //     }
    //     cout<<endl;
    // }

    // // to print 
    // // 1
    // // 21
    // // 321
    // // 4321
    
    // int x;

    // cout<<"highest number: ";
    // cin>>x;
    
    // for (int i=0 ; i<x ; i++){
    //     for (int j= i+1 ; j>0; j--){
    //         cout<<j;         
    //     }
    //     cout<<endl;
    // }

    // // to print 
    // // 4
    // // 43
    // // 432
    // // 4321
    
    // int x;

    // cout<<"highest number: ";
    // cin>>x;
    
    // for (int i=0 ; i<x ; i++){
    //     int num=x;
    //     for (int j= 0 ; j<= i; j++){
    //         cout<<num;
    //         num--;           
    //     }
    //     cout<<endl;
    // }

    // // to print 
    // // 10 
    // // 11 11
    // // 12 12 12
    // // 13 13 13 13
    
    // int x,n;

    // cout<<"number of rows: ";
    // cin>>x;
    // cout<<"numbers from: ";
    // cin>>n;

    // for (int i=0;i<x;i++){
    //     for (int j= 0 ; j<=i ; j++){
    //         cout<<n<<" ";
            
    //     }
    //     n++;
    //     cout<<endl;
    // }
    
    // // to print with x=4,n=1,y=3
    // // 1 2 3 
    // // 4 5 6
    // // 7 8 9
    // // 10 11 12
    
    // int x,n,y;

    // cout<<"number of rows: ";
    // cin>>x;
    // cout<<"numbers from: ";
    // cin>>n;
    // cout<<"number in each row? : ";
    // cin>>y;

    // for (int i=0; i<x ;i++){        
    //     for (int j= 0 ; j< y; j++){
    //         cout<<n<<" ";
    //         n++;
    //     }
    //     cout<<endl;
    // }

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