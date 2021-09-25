#include<stdio.h>
#include <iostream>

using namespace std;

void intersection(int ar[],int ar2[],int m,int n) {

    for(int i=0 ; i< m ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            if(ar[i]==ar2[j]) {
                cout<<ar[i]<<" ";
                break;
            }
        }
    }
}


void Union (int ar[], int ar2[],int m, int n) 
{
    if(ar2[0]<ar[0]){cout<<ar2[0];}

    for (int i = 0; i <m-1; i++)
    {
        cout<<ar[i];
        for (int j = 0; j < n; j++)
        {
            // cout<<"the num in second loop is "<<ar2[j]<<"\n";
            if( ar2[j]>ar[i] && ar2[j]<ar[i+1])
            {
                cout<<ar2[j];
            }
        }
        
    }
    cout<<ar[m-1];
}

int main() 
{
    int ar[] = {1,3,4,5,7,9,100};
    int ar2[] ={0,2,3,5,6,9};    
    intersection(ar,ar2,sizeof(ar)/sizeof(ar[0]),sizeof(ar2)/sizeof(ar2[0]));
    cout<<"\n";
    Union(ar,ar2,sizeof(ar)/sizeof(ar[0]),sizeof(ar2)/sizeof(ar2[0]));
    
    return 0;
}