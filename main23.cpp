#include <iostream>
#include <string>
using namespace std;
class student {
public :
string  name ;
int rollno ;
string subject ;

void display(){
    cout<<"name : "<<name<<endl<<"rollno : "<<rollno<<endl<<"subject : "<<subject<<endl;
}
};
int main () {
student obj;
cout<<"enter the name : "<<endl;
getline(cin,obj.name);

cout<<"enter the rollno : "<<endl;
cin>>obj.rollno;
cin.ignore();

cout<<"enter the subject name : "<<endl;
getline (cin, obj.subject );

obj.display();
    return 0;
}