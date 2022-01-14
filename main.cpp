#include<bits/stdc++.h>
using namespace std;
int n, k;
int points[100001];
bool can(int M){
    int r = points[0] - 1, cnt = 0;
    for(int i = 0; i < n; i ++){
        if(points[i] > r){
            cnt ++;
            r = points[i] + M;
        }
    }
    return cnt <= k;
}
main(){
  cin>>n>>k;
  for(int i=0; i<n; i++){
    cin>>points[i];
  }
  int l=0, r=points[n-1]-points[0];
  while(l!=r){
    int m=(l+r)/2;
    if(can(m)) r=m;
    else l=m+1;
  }
  cout<<l;
}
