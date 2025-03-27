#include<iostream>
using namespace std;
int square(int num){
    int result=num*num;
    return result;
}
int main(){
    for(int i=1;i<=5;i++){
        cout<<square(i)<<endl;
    }
    return 0;
}