#include<iostream>
using namespace std;

int largstNumber(int array[],int size){
    int max=INT16_MIN;
    int secMax=INT16_MIN;
    for(int i=0;i<size;i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    for(int i=0;i<size;i++){
        if(array[i]>secMax && array[i]!=max){
            secMax=array[i];
        }
    }
    return secMax;
}
int main(){
    int array[]={12,41,52,31,52,2,5};
    int secLarger=largstNumber(array,7);
    cout<<secLarger<<endl;
    return 0;
}