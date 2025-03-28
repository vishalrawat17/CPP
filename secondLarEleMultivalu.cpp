#include<iostream>
using namespace std;
int largest_Element(int array[],int size){
    int max=INT16_MIN;
    int maxIndex=-1;
    for(int i=0;i<size;i++){
        if(array[i]>max){
           max=array[i];
           maxIndex=i;
        }
    }
    return maxIndex;
}
int main(){
    int array[]={1,2,4,5,9,3,9,9};
    int arraySize=8;
    int largestElement=largest_Element(array,8);
    array[largestElement]=-1;
    for(int i=0;i<arraySize;i++){
        if(array[i]==largestElement){
            array[i]==0;
        }
    }
    int secont_Lergest_element=largest_Element(array,5);
    cout<<array[secont_Lergest_element]<<endl;
    return 0;
}
