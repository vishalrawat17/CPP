#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int array[]={1,2,5,4,6};
    int key=6;
    int ans=-1;
    int size=sizeof(array)/sizeof(array[0]);
    for(int i=0;i<=size;i++) {
        if(array[i]==key){
            ans=i;
        }
    }
    cout<<ans<<endl;
    getch();
    return 0;
    
}