#include<bits/stdc++.h>
using namespace std;

int main()
{   
    double W,H;
    cin >> W >> H;
    double Mosteller = (sqrt(W*H)/60) , Haycock = 0.024265 * pow(W,0.5378) * pow(H,0.3964), Boyd = 0.0333 * pow(W,(0.6157-(0.0188*log10(W)))) * pow(H,0.3);
    cout << setprecision(15) << Mosteller << "\n" << Haycock << "\n" << Boyd;
}