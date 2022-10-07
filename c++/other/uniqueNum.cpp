#include<iostream>
using namespace std;

//To get one unique number
int unique(int arr[], int n){
    int xorsum = 0;
    for(int i=0; i<n; i++){
        xorsum ^= arr[i];
    }
    return xorsum;
}

//To get two unique number
int getBit(int n, int pos){
    return (( n & (1 << pos)) != 0);
}
void unique_two(int arr[], int n){
    int xorsum = 0;
    for(int i=0; i<n; i++){
        xorsum ^= arr[i];
    }
    int tempxor = xorsum;
    int setbit = 0;
    int pos = 0;
    while(setbit != 1){
        setbit = xorsum & 1;
        pos++;
        xorsum = xorsum >> 1;
    }
    int newxor = 0;
    for(int i=0; i<n; i++){
        if(getBit(arr[i], pos -1)){
            newxor ^= arr[i];
        }
    }
    cout<<newxor<<" "<<(tempxor^newxor)<<endl;
}

//unique number in an array where all number except one is are present thrice
int setBit(int n, int pos){
    return ( n | (1 << pos));
}

int unique_three(int arr[], int n){
    int result = 0;
    for(int i=0; i<64; i++){
        int count = 0;
        for(int j=0; j<n; j++){
            if(getBit(arr[j], i)){
                count++;
            }
        }
        if(count % 3 != 0){
            result = setBit(result, i);
        }
    }
    return result;
}

int main()
{
    int arr1[] = {1,2,3,1,2,3,5};
    int arr2[] = {1,2,3,1,2,3,5,7};
    int arr3[] = {1,2,3,4,1,2,3,1,2,3};

    cout<<unique(arr1, 7)<<endl;
    unique_two(arr2, 8);
    cout<<unique_three(arr3, 10)<<endl;
    return 0;
}