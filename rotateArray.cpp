#include<iostream>
using namespace std;
int main(){
    int array[]={1,2,3,4,5};
    int n=5;

    int k=2;
    k=k%n;

    int ansArray[5];
    int j=0;
    for(int i=n-k;i<n;i++){
        ansArray[j++]=array[i];
    }

    for(int i=0;i<=k;i++){
        ansArray[j++]=array[i];

    }

    for(int i=0;i<n;i++){
        cout<<ansArray[i]<<" ";
    }
    cout<<endl;
    return 0;
}