#include <iostream>
#include <string>
using namespace std;
class  car{
    public :
    string model;
    int speed ;
    double price ;

    void cardetails(){
cout<<"carmodel :"<<model<<"carspeed :"<<speed<<"carprice :"<<price<<endl;

    }
};
int main () {
    car mycar ;
     
    cout<<"enter the car model name : "<<endl;
    getline (cin,mycar.model);

    cout<<"enter the speed :"<<endl;
    cin>>mycar.speed;

    cout<<"enter the price of car :"<<endl;
    cin>>mycar.price;

    mycar.cardetails();
    return 0 ;
}