#include<iostream>
#include<sys/types.h>
#include<unistd.h>
using namespace std;

int main(){
    int num1 , num2, sum;
    cout<<"Num1: ";
    cin>> num1;
    cout<<"Num2: ";
    cin>> num2;
    pid_t a = fork();
    if(a==0){
        cout<<"Child Process"<<endl;
        sum = num1 + num2;
        cout<<"Exiting Child"<<endl;
    }
   
    cout<<"Sum: "<<sum<<endl;
    
} 
