#include<iostream>
using namespace std;
bool isOdd(int num){
    for(int i=1;i<=num;i++){
        if(num%2==0){
            return false;
        }
        else{
            return true;
        }
    }
}
int main(){
    int a=5,b=100;
    for(int i=a;i<=b;i++){
        if(isOdd(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}