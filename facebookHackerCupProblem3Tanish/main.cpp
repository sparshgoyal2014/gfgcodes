#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool compare(vector<pair<ll,ll>> v1,vector<pair<ll,ll>> v2){
    return v1[1].first<v2[1].first;
}

void find(vector<vector<pair<ll,ll>>> v,ll &ans,ll i,ll l,ll r){

    ans=max(ans,r-l);

    if(i==v.size())
    return ;

    for(ll j=i;j<v.size();j++){

        if(v[j][0].first==r)
            find(v,ans,j+1,l,v[j][0].second);

        if(v[j][1].first==r)
            find(v,ans,j+1,l,v[j][1].second);
    }
}


int main(){

    int t;
    cin>>t;

    while(t--){

        ll n;
        cin>>n;

        vector<vector<pair<ll,ll>>> v(n);

        for(ll i=0;i<n;i++){

            ll a,b;
            cin>>a>>b;
            v[i].push_back(make_pair(a-b,a));
            v[i].push_back(make_pair(a,a+b));

        }

        sort(v.begin(),v.end(),compare);

        ll ans=0;
        for(ll i=0;i<v.size();i++){

            find(v,ans,i+1,v[i][0].first,v[i][0].second);
            find(v,ans,i+1,v[i][1].first,v[i][1].second);
        }

        cout<<ans<<endl;
    }
    return 0;
}