#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int count=1,i;
    cin>>s;
    for(i=0; s[i]!='\0'; i++)
    {


         if(s[i]==s[i+1])
        {

            count++;
            // cout<<count<<endl;
                  if(count>=7)
            {
                cout<<"YES"<<endl;
                break;

            }
        }
         else
            count=1;

    }


    if(count<7)
       cout<<"NO"<<endl;


}
