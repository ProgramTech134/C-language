#include <iostream>
using namespace std;
int main () {
   int rows = 10;
   for( int i = 1; i <= rows; i++){

      for(int j = 1; j <= rows - i; j++){
         cout<<" ";
      }
      for(int k = 1; k <=i; k++){
         cout<<k;
      }
      for(int k = i-1; k>=1; k--){
         cout<<k;
      }
      cout<<endl;
   }
   return 0;
}