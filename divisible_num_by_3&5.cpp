#include<iostream>
using namespace std;

int main(){
 int x;
 cout<<"Enter number: ";
 cin>>x;

 if(x%3==0 && x%5!=0) {
    cout<<"THREE";
 } else if (x%3!=0 && x%5==0) {
    cout<<"FIVE";
 } else if (x%3==0 && x%5==0) {
    cout<<"BOTH";
 } else if (x%3!=0 && x%5!=0){
    cout<<"NOT";
 } else{
    cout<<"invalid no.";
 }
    return 0;
}