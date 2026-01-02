#include <iostream>
using namespace std;
void myfunction(string fname="Norway"){
    cout<<fname<<endl;

}
int main(){
    // You can also use a default parameter value, by using the equals sign (=).
    myfunction("Usa");
    myfunction("India");
    myfunction();
    myfunction("Russia");
    // A parameter with a default value, is often known as an "optional parameter". 
    // From above example fname  is an optional parameter and "Norway" is the default value.

}