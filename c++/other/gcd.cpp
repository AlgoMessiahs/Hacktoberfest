#include<iostream>
using namespace std;

// int gcd(int a, int b){
//     if(b == 0){
//         return a;
//     }
//     return gcd(b, a%b);
// }

int gcd(int a, int b){
    while(b!=0){
        int rem = a%b;
        a = b;
        b = rem;
    }
    return a;
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << gcd(a, b) << endl;

    return 0;
}