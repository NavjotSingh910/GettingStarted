#include <iostream>
using namespace std;

int main() {
	int T=0,A=0,B=0,storeRemender[1000];
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>A>>B;
        storeRemender[i]=A%B;
    }
    
    for(int i=0;i<T;i++){
        cout<<storeRemender[i];
    }
    return 0;
}
