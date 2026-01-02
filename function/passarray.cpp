#include<iostream>
using namespace std;
void vaibhav(int mynumber[5]){
        for(int i=0;i<5;i++){
            cout<<mynumber[i]<<endl;
        }
    }
int main(){
    int mynumber[5]={10,20,30,40,50};
    vaibhav(mynumber);
    return 0;
}