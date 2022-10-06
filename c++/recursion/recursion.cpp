#include<iostream>
using namespace std;

int sum(int n){
    if(n==0){
        return 0;
    }

    int prevSum = sum(n-1);
    return n + prevSum;
}

int power(int n, int p){
    if(p == 0){
        return 1;
    }
    int prevPower = power(n, p-1);
    return n * prevPower;
}

int factoril(int n){
    if(n==0){
        return 1;
    }
    int prevfact = factoril(n-1);
    return n*prevfact;
}

int fib(int n){
    if(n==0 || n==1){ //base case
        return n;
    }
    return fib(n-1) + fib(n-2);
}

//array sorted or not using recurtion
bool sort(int arr[], int n){
    if(n == 1){
        return true;
    }

    int prevArr = sort(arr+1, n-1);
    return (arr[0]<arr[1] && prevArr);
}
void dec(int n){
    if(n==1){
        cout<<"1"<<endl;
        return;
    }
    cout<<n<<endl;
    dec(n-1);
}
void inc(int n){
    if(n==1){
        cout<<"1"<<endl;
        return;
    }
    inc(n-1);
    cout<<n<<endl;
}
int firstOcc(int arr[], int n, int i, int key){

    //Base case
    if(i == n){
        return -1;//n = size of array that means we did not get first occurrence of key
    }

    if(arr[i] == key){
        return i;
    }
    return firstOcc(arr, n, i+1, key);
}
int lastOcc(int arr[], int n, int i, int key){
    if(i == n){
        return -1;//n = size of array that means we did not get first occurrence of key
    }
    int restArr = lastOcc(arr, n, i+1, key);
    if(restArr != -1){
        return restArr;
    }
    if(arr[i] == key){
        return i;
    }
    return -1;
}

int main()
{
    int arr[] = {1,2,6,4,2,7,2,5};
    // int n; cin>>n;
    // cout<<sum(4)<<endl;
    // cout<<power(4 , 3)<<endl;
    // cout<<factoril(4)<<endl;
    // cout<<fib(6)<<endl;
    // cout<<sort(arr, 5)<<endl;
    // dec(n);
    // inc(n);
    cout<<firstOcc(arr, 8, 0, 2)<<endl;
    cout<<lastOcc(arr, 8, 0, 2)<<endl;
    return 0;
}