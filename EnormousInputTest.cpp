#include<iostream>
using namespace std;
int main(){
    int n=0 ,k=0 ,number=0,count=0;
    cin>>n>>k;
    while (n-->0)
    {
        cin>>number;
        if (number%k==0){
            count++;
        }
    }
    cout<<count;
    
}