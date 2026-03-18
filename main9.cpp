#include <iostream> 
using namespace std ;
string   checkevenodd (int num ){
    if ( num % 2 == 0 ){
        return  " even";
    }
    else{ 
    return "odd" ;
    }
}
int main ( ) {
    int num ; 
    cout<<"enter the value of num : "<<endl;
    cin>>num;
    cout<<"the number is : "<<checkevenodd(num)<<endl;
    return 0;
}