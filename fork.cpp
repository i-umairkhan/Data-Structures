#include<iostream>
#include<sys/types.h>
#include<unistd.h>
using namespace std;

int main(){
    cout<<"Parent ID: "<<getppid()<<endl;
    cout<<"Child ID: "<<getpid()<<endl;
    cout<<"Waiting for Child"<<endl;
    sleep(3);
    fork();
    cout<<"Parent ID: "<<getppid()<<endl;
    cout<<"Child ID: "<<getpid()<<endl;
}
