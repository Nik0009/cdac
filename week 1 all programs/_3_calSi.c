// 3. WAP to calculate simple interest. (si=p*n*r)/100.

#include<stdio.h>
int calSI(int p,int n,int r);
void main()
{
    int p,n,r;
    printf("Enter Principal,Rate of Interest and Time:");
    scanf("%d%d%d",&p,&n,&r);
    calSI(p,n,r);

}
int calSI(int p,int n,int r)
{
    int si;
    si=(p*n*r)/100;
    printf("%d",si);
    return 0;
}