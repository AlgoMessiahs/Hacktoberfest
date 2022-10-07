#include<iostream>
using namespace std;

void towerToHanoi(int n, char src, char dest, char helper){
    if(n==0){
        return;
    }
    towerToHanoi(n-1,src,helper,dest);
    cout<<"Move from "<<src<<" to "<<dest<<endl;
    towerToHanoi(n-1,helper,dest,src);

}

int main()
{
    towerToHanoi(3,'A','B','C');
    return 0;
}