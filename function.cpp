#include<iostream>
using namespace std;

void welcome(string name){
    cout<<"Welcome, "<<name<<"!"<<endl;
}

int main(){

    string myName = "Drubo Roy Bishwas";
    welcome(myName);

    return 0;
}