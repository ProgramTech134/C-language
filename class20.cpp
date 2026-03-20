#include <iostream>
#include <string>
using namespace std;
class smartphone {
    public :
    string modelname;
    int ram;
    int storage;
    double price;

    void showSpecs(){
        cout<<"model name :"<<modelname<<endl<<"ram : "<<ram<<endl<<"storage"<<storage<<endl<<"price"<<price<<endl;
    }

};
int main () {
    smartphone mymobilephone;
    cout<<"enter the model name :"<<endl;
    getline(cin,mymobilephone.modelname);
      cout<<"enter the ram :"<<endl;
    cin>>mymobilephone.ram;

      cout<<"enter the storage :"<<endl;
    cin>>mymobilephone.storage;

      cout<<"enter the price :"<<endl;
    cin>>mymobilephone.price;
    
    mymobilephone.showSpecs();

    return 0;
}