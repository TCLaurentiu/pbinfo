#include
using namespace std;
int main(){
int n, m[20][20], c=0;
cin>>n;
for(int i=0;i<n;i++) for(int j=0;j<n;j++) cin>>m[i][j];
for(int i=0;i<n;i++) for(int j=0;j<n;j++){ if(i-1>=0) if(m[i][j]<=m[i-1][j]) continue;
if(i+1<n) if(m[i][j]<=m[i+1][j]) continue; if(j-1>=0) if(m[i][j]<=m[i][j-1]) continue;
if(j+1<n) if(m[i][j]<=m[i][j+1]) continue;
c++;
}
cout<<c;
}
