#include <iostream>
using namespace std;
void rev(int *,int);
int main()
{
    int a[100]={0},i,n=10;
    for(i=0;i<n;i++)
    *(a+i)=i;
    rev(a,n);
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}
void rev(int *a,int n)
{
    int i,c=0;
    for(i=0;i<n;)
    {
        if(i==0)
        {
            i++;
            continue;
        }
        else
        {
        *(a+i)=(*(a+i))+(c);
        c++;i++;
        }
    }
    cout<<"\n";
}
 
