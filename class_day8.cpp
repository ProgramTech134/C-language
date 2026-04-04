#include <iostream>
#include <string>
using namespace std;
class student {
   private :
   int marks ;
   public :
  string name ;
   void setmarks(int m ){
    if ( m >= 0 && m <= 100 ){
    marks = m;
    }
    else {
        cout<<"invalid "<<endl;
        marks = 0;
    }
}
    int getmarks(){
        return marks;
    }

    void display(){
        cout<<"marks :"<<marks<<endl<<"marks :"<<marks<<endl;
        if (marks >= 50 ){
            cout<<"pass"<<endl;
        }
        else{
            cout<<"fail"<<endl;
        }
    }
   };
int main () {
    student s1;
    string name;
    int m_input;

    cout<<"enter the name : "<<endl;
    getline(cin,s1.name);

    cout<<"enter the marks:"<<endl;
    cin>>m_input;

    s1.setmarks(m_input);
    s1.display();
    return 0;
}