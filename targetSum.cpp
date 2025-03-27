#include<iostream>
using namespace std;
int main(){
    int array[]={1,23,4,5};
    int targetSum=24;
    int size=4;
    int pairs=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(array[i]+array[j]==targetSum){
                pairs++;
                
            }
        }
    }
    cout<<pairs<<endl;
    return 0;
}