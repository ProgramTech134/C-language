#include <iostream>
using namespace std;
class mylock {
public :
int secretcode ;
public :
void setcode(int c ){
    secretcode = c;

}
void showcode(){
    cout<<"code hai "<<secretcode<<endl;
}
};
int main(){
    mylock obj;
    obj . setcode(3790);
    obj.showcode();
    return 0;
}