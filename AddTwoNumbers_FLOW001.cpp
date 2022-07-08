#include<iostream>
using namespace std;
int main(){
    int T,A[1000],B[1000],i=0;
    cin>>T;
    while(i<T){
        cin>>A[i];
        cin>>B[i];
        i++;
    }
    i=0;
    while(i<T){
        cout<<A[i]+B[i]<<endl;
        i++;
    }
    return 0;
}