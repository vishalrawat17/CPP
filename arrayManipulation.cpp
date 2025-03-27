#include<iostream>
using namespace std;
int main(){
    int array[]={1,2,4,2,3,1,4};
    int size=7;
    for(int i=0;i<size;i++){
        for(int j=i+i;j<size;j++){
            if(array[i]==array[j]){
                array[i]=array[j]=-1;
            }
        }
    }
    int unique=0;
    for(int i=0;i<size;i++){
        if(array[i]>0){
            unique=array[i];
        }
    }
    cout<<unique<<endl;
    return 0;
}