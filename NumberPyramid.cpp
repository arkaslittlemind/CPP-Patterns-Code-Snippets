//Write a programme to print the following pattern//

//Pattern//

        1 
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter Size:";
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        for (int spaces = 0; spaces < n-i; spaces++)
        {
            cout<<"  ";
        }
        
        for (int j = i; j >= 1; j--)
        {
            cout<<j<<" ";
        }
        for (int j = 2; j <= i; j++)
        {
            cout<<j<<" ";
        }
        
        cout<<"\n";
    }
    return 0;
}
