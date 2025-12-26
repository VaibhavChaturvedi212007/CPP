 #include<iostream>
 #include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    int num ,guess,tries =0;
    srand(time(0));
    num= (rand() %10) +1;
    cout<<"******Number Guessing Game*********";
    do{
        cout<<"Enter a guessing number between (1-100)";
        cin>>guess;
        tries++;

        if(guess>num){
            cout<<"to High"<<endl;
        }
        else if(guess<num){
          cout<<"too low"<<endl;
        }else{
            cout<<"coreect # of tries = "<<tries<<endl;
        }
    }
     while(guess!=num);
       cout<<"******************************"<<endl;

       return 0;

}