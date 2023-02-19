#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n,k,count = 0;
    cin>>n>>k;
    
    int *arr = new int[n],i = 0;
    
    while(i < n){
        cin>>arr[i];
        i++;
    }
    i = 0;
    while(i < n){
        if(arr[i] >= arr[k-1] && arr[i]>0 ) count++;
        i++;
    }
    
    cout<<count;
    
    return 0;
}
