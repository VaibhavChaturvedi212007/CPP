#include <iostream>
using namespace std;
    // When we use void then there is no use of return a value.
    // if you want to function to return a value , you can use data type (int,string etc..) instead of void , use the 
    // return keyword inside the function.


 
// int myfunction(int x){
//      5+x;
//     return x;  
// }
// int main(){
//     cout<<myfunction(3);
//     return 0;
// }



// int myfunction(int x,int y){
//     return x+y;
// }
// int main(){
//     // cout<<myfunction(5,3);
//     int z= myfunction(5,2);
//     cout<<z;
//     return 0;
// }

int doubleGame(int x){
    return x*2;
}
int main(){
    for(int i=0;i<=5;i++){
        cout<<"Double of"<<i<<"is"<<doubleGame(i)<<endl;
    }
    return 0;
}