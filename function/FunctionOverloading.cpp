// FUNCTION OVERLOADING 
// Function overloading allows multiple functions to have the same name , as long
// as their parameter are different type or number:

// #include<iostream>
// using namespace std;
// void bakepizza();
// void bakepizza(string topping1);
// void bakepizza(string topping1 , string topping2);

// int main(){
//     bakepizza("onion","mushrooms");
//     return 0;
// }
// void bakepizza(){
//     cout<<"here is your pizza"<<endl;
// }
// void bakepizza(string topping1){
//      cout<<"here is your "<<topping1<<"pizza"<<endl;
// }
// void bakepizza(string topping1 , string topping2){
//      cout<<"here is your "<<topping1 <<","<<topping2<<" pizza"<<endl;
// }


#include<iostream>
using namespace std;
int number(int x , int y);
int number1(int x, int y, int z);
int main(){
    int result1= number(3,2);
    int result2= number1(3,2,1);
    cout<<"The Sum of Two Number : "<<result1<<endl;
    cout<<"The Sum Of Three Number : "<<result2<<endl;
    return 0;
}
int number(int x , int y){
    return x+y;
}
int number1(int x, int y, int z){
    return x+y+z;
}