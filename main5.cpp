#include <iostream>
using namespace std;
int main () {
    int marks[7] = {23, 45, 67, 12, 56, 10 , 11} ;
    marks[3] = 455;
    marks[4] = 789;

   for(int i = 0; i<=6; i++){
    cout<<marks[i]<<endl;
   }
    return 0;
}
