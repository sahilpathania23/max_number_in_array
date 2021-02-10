//degree question
#include <iostream>
#include <climits>
#include <math.h>
using namespace std;
int main() { 
    int l,k,n,j;
    cin>>n;
    int arr[100];
    for (int i = 0; i < n; ++i)
    {
        cin>>k;
        arr[i]=k;
    }
    cin>>j;
    
    for (int h = 0; h < n; ++h)
    {
            if (arr[h]==j){
                cout<<h;
                break;
            }
            else{
                l=l+1;
            }
    }
    if(l==n){
        cout<<-1;
    }
    
	return 0;

  }
