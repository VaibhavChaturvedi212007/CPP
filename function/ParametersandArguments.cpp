#include<iostream>
using namespace std;
// Parameters are specified after the function name, inside the parentheses. You can add as many parameters as you want, just separate them with a comma:
// Syntax
// void functionName(parameter1, parameter2, parameter3) {
//   // code to be executed
// }
void myfunction(string fname){
    cout<<fname<<endl;
}
int main(){
    myfunction("vaibhav");
    myfunction("chaturvedi");
    return 0;
// When a parameter is passed to the function, it is called an argument.
// so from above example fname is parameter , while vaibhav , chaturvedi are called argument.
}
