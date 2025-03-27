#include<iostream>
using namespace std;
int main(){
    int array[]={1,23,4,5,16,8};
    int targetSum=28;
    int size=6;
    int pairs=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            for(int k=j+1;k<size;k++)
            if(array[i]+array[j]+array[k]==targetSum){
                pairs++;
                
            }
        }
    }
    cout<<pairs<<endl;
    return 0;
}