#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int a[220];
int main()
{
 
    int A[3],B[3],a[3],b[3];
    for(int i=0;i<6;i++){
        char x;
        scanf("%c",&x);
        if(i<3){ A[i]=x-'0'; }
        else B[i-3]=x-'0';
    }
    int sum1,sum2;
    int s1=A[0]+A[1]+A[2];
    int s2=B[0]+B[1]+B[2];
    if(s1>s2){
        b[0]=A[0];
        b[1]=A[1];
        b[2]=A[2];
        a[0]=B[0];
        a[1]=B[1];
        a[2]=B[2];
        sum2=s1;
        sum1=s2;
    }
    else {
        b[0]=B[0];
        b[1]=B[1];
        b[2]=B[2];
        a[0]=A[0];
        a[1]=A[1];
        a[2]=A[2];
        sum2=s2;
        sum1=s1;
    }
 
 
    sort(a,a+3);
    sort(b,b+3);
 
 
    int tmp=abs(sum1-sum2);
    if(tmp==0) printf("0");
    else if(tmp<=b[2]||tmp<=(9-a[0])) printf("1");
    else if(tmp<=b[2]+b[1]||tmp<=(18-a[0]-a[1])||tmp<=b[2]+9-a[0]) printf("2");
    else printf("3");
    return 0;
}
