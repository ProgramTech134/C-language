#include <iostream>
#include <string>
using namespace std;
class mobile {
     public :
     string brandname;
     int year;
     double price ;
     void mobiledetail(){
        cout<<"brandname :"<<brandname<<endl<<"year :"<<year<<endl<<"price :"<<price<<endl;
     }
    };
int main (){

    mobile myfavoritemobile;

    cout<<"enter the mobile brand name :"<<endl;
    getline(cin, myfavoritemobile .brandname);

    cout<<"enter the year :"<<endl;
    cin>>myfavoritemobile.year;

    cout<<"enter the price of mobile phone :"<<endl;
    cin>>myfavoritemobile.price;

    myfavoritemobile.mobiledetail();
    return 0;
}