#include<stdio.h>
#include <iostream>

using namespace std;

void rotate (int ar[], int x) {

    int temp = ar[x-1];
    
    for (int i = x-1; i >=0; i--)
    {
        ar[i] = ar[i-1];
    }
    ar[0] = temp;
    
    for (int i = 0; i < x; i++)
    {
        cout<<ar[i];
    }
    

}

int main() {

    int x ;
    cin>>x;
    int ar[x];

    for (int i = 0; i < x; i++)
    {
       cin>>ar[i];
    }
    
    rotate(ar,x);
    return 0;

}