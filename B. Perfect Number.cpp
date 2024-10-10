#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
bool is_perfect(int n)
{
    int sum = 0;
    while(n != 0)
    {
        sum += (n % 10);
        n /= 10;
    }
    return (sum == 10);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int k; cin >> k;
    int cnt = 0; 
    for(int i = 1; i <= 11000000; i++) //11000000
    {
        if(is_perfect(i))
        {
            cnt++;
            if(cnt == k)
            {
                cout << i << endl;
                return 0;
            }
        }
    }
    return 0;
}
 
