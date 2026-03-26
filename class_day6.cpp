#include <iostream>
#include <string>
using namespace std;
class student {
    public :
    string name;
    int rollno ;
    float cgpa ;
    string department ;
void inputdetail(){
    cout<<"enter the name :"<<endl;
    cin>>name;
    cout<<"enter the rollno :"<<endl;
    cin>>rollno;
    cout<<"enter the cgpa :"<<endl;
    cin>>cgpa;
    cout<<"enter the department :"<<endl;
    cin>>department;
}
void showdetails (){
    cout<<"name :"<<name<<endl<<"rollno :"<<rollno<<endl<<"cgpa :"<<cgpa<<endl<<"department :"<<department<<endl;
}
void checkscolarship(){
    if (cgpa > 3.5){
        cout<<"eligible for scolarship"<<endl;
    }
    else {
        cout<<"not eligible "<<endl;
    }
}
};
int main (){
    student s1;
    student s2;

    s1.inputdetail();
    s1.showdetails();
    s1.checkscolarship();

    s2.inputdetail();
    s2.showdetails();
    s2.checkscolarship();

    return 0;
}