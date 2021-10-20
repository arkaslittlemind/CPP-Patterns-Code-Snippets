//Write a programme to print the following pattern//

//Pattern//

1 
1 2
1 2 3
1 2 3 4
1 2 3 4 5



#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter Size:";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
        
    }
    return 0;
}
