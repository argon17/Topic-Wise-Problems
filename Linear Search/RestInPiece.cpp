#include "../nub.h"
void solve()
{
    int n; cin>>n;
    int m = n;
    while(m){
        if(m%100==21){
            cout<<"The streak is broken!"<<endl;
            return;
        }
        m /= 10;
    }
    cout<<(n%21==0?"The streak is broken!":"The streak lives still in our heart!")<<endl;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int TEST=1;
    cin >> TEST;
    //init();
    while(TEST--)
    {
        solve();
    }
}