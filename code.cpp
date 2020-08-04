#include <iostream>
using namespace std;
 
 
int main() {
    
    int a,b,same=0,diff=0;
    cin>>a>>b;
    
    while(a>0 && b>0){
        a--;
        b--;
        diff++;
    }
    
    while(a>1){
        a=a-2;
        same++;
    }
    
    while(b>1){
        b=b-2;
        same++;
    }
    
    cout<<diff<<" "<<same<<endl;
    
    
    return 0;
}
