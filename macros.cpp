#include<iostream>
using namespace std;

// inline int getMax(int& a,int& b){
//    return (a>b) ? a:b;
// }

int print(int arr[],int n,int start){
    for (int i = start; i < n; i++)
    {
       cout<<arr[i]<<endl;
    }
    
}

int main(){
// int a =1,b=2;
// int ans =0;

// ans=getMax(a,b);
// cout<<ans<<endl;

// a++;
// b=b+4;
// ans=getMax(a,b);
// cout<<ans<<endl;
int arr[5]={1,2,3,4,5};
int n=5;
print(arr,n,0);


return 0;
}