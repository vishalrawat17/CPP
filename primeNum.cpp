#include<iostream>
using namespace std;
int isPrime(int num){
    for(int i=2;i<num;i++){
    if(num%i==0) return false;
    }
    return true;
}
int main(){
    int a=5,b=100;
    for(int i=a;i<=b;i++){
        if(isPrime(i)){
            cout<<i<<endl;
        }
    }
    return 0;
}