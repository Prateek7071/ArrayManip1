//Hackerrank Array Manipulator Method 1

#include <iostream>
#include <string>
using namespace std;


int main() {
    long n,m,a,b,k;
    cin>>n>>m;
    long *arr=new long[n];
    for(int i=0;i<n;i++)
        arr[i]=0;
    long *q=new long[m*3];
    for(int i=0;i<m*3;i++){
        cin>>q[i];
    }

    for(int i=0;i<m;i++){
        a=q[3*i]-1,b=q[1+3*i]-1,k=q[2+3*i];
        for(int j=a;j<=b;j++) {
            arr[j] =arr[j] + k;
        }
    }
    for(int i = 1;i < n; ++i) {
        if(arr[0] < arr[i])
            arr[0] = arr[i];
    }
    cout<<arr[0];
    return 0;
}