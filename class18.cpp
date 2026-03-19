#include <iostream>
using namespace std;
class car {
    public :
    string model ;
    int speed ;
    double price ;
    void cardetails(){
        cout<<"carmodel :"<<model<<endl<<"carspeed :"<<speed<<endl<<"carprice :"<<price<<endl;
    }

};
int main () {
    car myfavoritecar1;

    myfavoritecar1.model = "samsung";
    myfavoritecar1.speed = 20;
    myfavoritecar1.price = 100000;

    myfavoritecar1.cardetails();

    car myfavoritecar2;

    myfavoritecar2.model = "tesla";
    myfavoritecar2.speed = 30;
    myfavoritecar2.price = 9000;

    myfavoritecar2.cardetails();
    

    return 0;

}