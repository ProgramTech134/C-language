#include <iostream>
#include <string>
using namespace std;
    class mobilephone {
        private : 
        int batterylife ;
        public :
        string model ;
        void setbattery (int b ){
        if ( 0 <= b && b <= 100 ){
            batterylife = b;
        }
        else {
            cout<<"Invalid Battery Percentage!"<<endl;
            batterylife = 0;
        }
    }
        void display () {
            cout<<"model : "<<model<<endl<< "batterylife :"<<batterylife<<endl;
        }
    
    };
    int main ( ) {

        mobilephone s1;
        int  b_input;
        string model ;

        cout<<"enter the model name : "<<endl;
        getline (cin , s1.model);

        cout<<"enter the battery life :"<<endl;
        cin>>b_input;

       s1.setbattery(b_input);
       
       s1.display ();
       return 0;
    }
    
