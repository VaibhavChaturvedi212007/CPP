#include<iostream>
using namespace std;
void myfunction(){
    cout<<"i am greater"<<endl;
}
int main(){
    // function = a block of reusable code 
    // myfunction = is the name of the function 
    // void means that the function does not have a return value.
    // Declared functions are not executed immediately. They are "saved for later use", 
    // and will be executed later, when they are called.
    // To call a function, write the function's name followed by two parentheses () and a semicolon ;
    
    myfunction();   
    myfunction();
    myfunction();
    return 0;
}