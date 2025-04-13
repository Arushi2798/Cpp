#include <iostream>
using namespace std;

int hello(){
    cout<<"hello guys";
    return 4;
}

int min(int a , int b){
    return( a>b ? b : a);
}

int sum(int a){
    int s=0;
    for(int i=1 ; i<=a ; i++){
        s+=i;
    }
    return s;

}

int factorial(int a){
    int s=1;
    for(int i=a ; i>1 ; i--){
        s*=i;
    }
    return s;

}

int digitsum(int a){
    int digsum=0;
    while (a >0){
        int r=a%10;
        a=a/10;
        digsum+=r;
    }
    return digsum;
}

int bicoef(int n, int r ){
    int ncr= factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}

bool isprime(int a){
    bool isprime = true;
    for (int i = 2 ; i < a ; i++){
        if(a%i==0){
            isprime= false;
            break;
    }
}

    return isprime;
}

int allprime(int a){
    if(a==2){
        return 0;
    }
    else if(a==3){
        return(2);
    }
    else{
        // cout<<1<<' ';
        for (int i = 2 ; i <a ; i++){
            int res = isprime(i);
            if (res==1){
                cout<<i<<" ";
            }
        }
    }
}

void fibo(int n){
    int a=1,b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=2;i<n;i++){
        int s=b+a;
        a=b;
        b=s;
        cout<<s<<" ";
    }
}

int main(){

    // function practise
    // cout << endl << hello() << endl;
    // int a, b;
    // cin>>a>>b;
    // cout<<min(a,b);
    int a,b ;
    cin>>a;
    // cin>>a>>b;
    // cout<<sum(a);
    // cout<<factorial(a);
    // cout<<digitsum(a);
    // cout<<bicoef(a,b);
    // cout<<isprime(a);
    // cout<<allprime(a);
    fibo(a);

    // //basic practise
    // for (int n=4;n<=10;n++){
    //     cout<<n<<" ";
    // }
    
    // int n=0;
    // while (n < 5){
    //     cout<<n;
    //     n++;
        
    // }
    // cout<<endl;

    // char a='a';
    // cout<< (a>=65 && a <=90 ?"upper":"lower")<<endl;

    // int a=5;
    // cout<<(a>2 ? "good":"bad")<<endl;

    // int a=3;
    // int b=++a;
    // cout<<b<<"\n"<<a<<endl;

    // float a=49.5; 
    // int b=7;
    // cout<<((int)a/b)<<endl;

    // int age;
    // cout<< "enter your age: ";
    // cin>> age;
    // cout<< "your age is: "<<age;

    // char grade = 'A';
    // float price= 99.99;
    // double annualSalary = 1800000.0000;
    // bool happy = true;
    // cout << "your age: " << age<< "\n your salary: "<<annualSalary<<"\nyou happy?: "<<happy<<"\nyour grade?: "<< grade<<"\n\nprice of this item is "<<price<<endl; 
    
    // int newprice= price;
    // cout<< newprice<<"\n";
    
    // system("pause"); 
    return 0;
}
