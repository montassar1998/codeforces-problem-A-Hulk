#include <bits/stdc++.h>
#define love "I love"
#define hate "I hate"
using namespace std;
 
int main()
{
    int n;
    stringstream s;
    cin>>n;string res="";
    for(int i=1;i<=n;i++){
        if(i%2==1)
            res+="I hate ";
        else
            res+="I love ";
        if(i<n){
            res+="that ";
        }
    }
    res+="it";
    cout<<res;
    return 0;
}
