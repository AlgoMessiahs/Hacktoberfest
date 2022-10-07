#include<iostream>
using namespace std;

int getBit(int n, int pos){
    return ((n & (1<<pos)) != 0);
}
int setBit(int n, int pos){
    return (n | (1<<pos));
}
int clearBit(int n, int pos){
    return (n & ~(1<<pos));
}
int updateBit(int n, int pos, int v){
    int mask = ~(1<<pos);
    return (n & mask) | (v<<pos);
}
int main()
{
    cout << getBit(5, 2) << endl;
    cout << setBit(5, 2) << endl;
    cout << clearBit(5, 2) << endl;
    cout << updateBit(5, 2, 1) << endl;
    return 0;
}