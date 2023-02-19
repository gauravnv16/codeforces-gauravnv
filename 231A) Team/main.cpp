#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int mainCount = 0;
    while(n --){
        int a,b,c,count = 0;
        
        cin>>a>>b>>c;
        
        if(a == 1) count ++;
        if(b == 1) count ++;
        if(c == 1) count ++;
        
        if(count >= 2) mainCount ++;
    }
    
    cout<<mainCount;

    return 0;
}
