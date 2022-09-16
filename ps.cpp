#include<iostream>
using namespace std;

int main(){
    bool flag=true;
    int N,lNum,temp;
    cin>>N;
    int arr[N];
    
    
    for (int i = 0; i < N; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0, j=N-1; i < N/2; i++, j--)
    {
        if (arr[i] != arr[j])
        {
            flag=false;
            break;
        }
        
    }

   if (flag)
   {
        cout<<"YES";
   }
   else
   {
        cout<<"NO";
   }
   
   
    cout<<endl;
    return 0;
}
