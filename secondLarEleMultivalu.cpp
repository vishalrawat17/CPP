#include<iostream>
using namespace std;
int largestElement(int array[],int size){
    int max=INT16_MIN;
    int maxindex=-1;
    for(int i=0;i<size;i++){
        if(array[i]>max){
            max=array[i];
            maxindex=i;
        }
    }
    return maxindex;
}
int main(){
    int array[]={13,99,99,5,6};
    int size=5;
    int largestElemenIndex=largestElement(array,5);
    //array[largestElemenIndex]=-1;
    int larger=array[largestElemenIndex];
    for(int i=0;i<size;i++){
        if(array[i]==larger){
            array[i]=-1;
        }
    }
    int second_largest_element=largestElement(array,5);
    cout<<array[second_largest_element]<<endl;
    return 0;
}
