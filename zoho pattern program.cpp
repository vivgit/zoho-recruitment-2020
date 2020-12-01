#include<bits/stdc++.h>

using namespace std;

void showPattern(int n)
{
    int cnt=1;
    for(int row=1;row<=n;row++)
    {
        //set the fixed width as 4 ans left align all outputs
        
        //spaces
        for(int sp=1;sp<=(n-row);sp++)
            cout << left << setw(4) << " ";
        
        //numbers    
        for(int num=1;num<=row;num++)
        {
            cout << left << setw(4) << cnt ;
            cnt++;
        }
        cout << endl;
    }
}

int main()
{
    int n;  cin >> n;
    
    showPattern(n);
    return 0;
}