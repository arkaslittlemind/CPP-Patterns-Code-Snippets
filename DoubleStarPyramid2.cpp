//Write a programme to print the following pattern//

//Pattern//

    *
   * *
  * * *
 * * * *
* * * * *
 * * * *
  * * *
   * *
    *
    



#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter Size:";
    cin>>n;
    for (int i = 0; i < 2*n; i++)
    {
        int totalColsinRow = i > n ? 2 * n - i: i;
        for (int j = 0; j < totalColsinRow; j++)
        {
        cout<<"* ";
        }
        cout<<"\n";
        
    }
    return 0;
}
