#include<bits/stdc++.h>
using namespace std;

int main()
{   
    
    int ye;
    cin >> ye;
    ye -= 543;
    ye %= 100;
    ye =  (ye + floor(ye/4) +11 );
    cout << ye%7;
}