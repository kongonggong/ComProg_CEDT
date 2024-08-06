#include<bits/stdc++.h>
using namespace std;

int main()
{
    size_t n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];

    int L=0,R=n-1, mxL =arr[L],mxR= arr[R], i ,sum=0;
    while (L<R)//make both highest
    {
        
        if(arr[L]>arr[R]) { R --; mxR = max(mxR,arr[R]); i=R; }
        else if(arr[L]<=arr[R]) { L ++; mxL = max(mxL,arr[L]); i=L;}
        if(min(mxL,mxR) -  arr[i] >= 0) sum += min(mxL,mxR) -  arr[i];
    }
    cout << sum;
    /*
        14
        10 5 4 3 2 1 2 3 4 5 6 7 8 9
        58


        14
        1 4 2 5 1 1 4 2 3 1 6 4 5 1
        21
    */
}