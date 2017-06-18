#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int n , num=0 ;

    cin>>n;
    int  arr [n] ;

    for(int i=0 ;i<n ;i++)
        cin>>arr[i];

    sort(arr , arr+n)   ;

    for(int i=0 ;i<n/2 ;i++)
        swap( arr[i] ,arr[n-1-i] ) ;

    int j =n-1 , x=0 , cnt=0 ;
    for(int i=0 ;i<n-cnt ;i++ )
    {

       x=arr[i];

        while(x+arr[j] <=4)
        {

                x+=arr[j] ;
                j--;
                cnt++;
        }
        num++;
    }


    cout<< num << endl;


    return 0;
}
