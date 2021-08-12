#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    while(n>0){
        string s;cin>>s;
        int ar[26]={0};
        for(int i=0;i<s.length();i++){
            if(ar[s[i]-'a']==0)
                ar[s[i]-'a']++;
        }
        int count=0;
        for(int i=0;i<26;i++){
            if(ar[i]==1)
                count++;
        }  
        cout<<count<<endl;
        n--;
    }

    return 0;
}
