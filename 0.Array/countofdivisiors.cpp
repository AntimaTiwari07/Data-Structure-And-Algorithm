#include<iostream>
using namespace std;
void display(int a[],int n){
    for(int i =0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
void count(int a[],int n){
    int count = 0;
    for(int i = 0;i<n;i++){
        count = 0;
        for(int j = 1;j<=a[i];j++){
           if(a[i]%j==0){
            count++;
           }
        }
        a[i]=count;
    }
}
int main(){
    int a[]={8,9,8};
    int n = sizeof(a)/sizeof(int);
    count(a,n);
    display(a,n);
}