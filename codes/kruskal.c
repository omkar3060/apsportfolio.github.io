#include<stdio.h>
struct node
{
    int u,v,w;
};
void insertionsort(struct node a[20],int n)
{
    int j,i,k;
    struct node m;
    for(j=1;j<n;j++)
    {
        i=0;
        while(a[j].w>a[i].w)
        {
            i+=1;
        }
        m=a[j];
        for(k=0;k<j-i;k++)
        {
            a[j-k]=a[j-k-1];
        }
        a[i]=m;
    }
}
int root(int arr[],int i)
{
    while(i!=arr[i])
    i=arr[i];
    return i;
}
void union1(int arr[],int n,int u,int v)
{
    int ru=root(arr,u),rv=root(arr,v);
    arr[ru]=rv;
}
int find(int arr[9],int n,int u,int v)
{
    if(root(arr,u)==root(arr,v))
        return 1;
    return 0;
}
void kruskals(struct node a[14],int n,int arr[9])
{
    int k=0;
    int cost=0,count=0;
    for(k=0;k<14;k++)
    {
       if(find(arr,n,a[k].u,a[k].v)==0)
       {
           printf("%d %d\n",a[k].u,a[k].v);
           cost+=a[k].w;
           count++;
           union1(arr,n,arr[a[k].u],arr[a[k].v]);
           if(count==n-1)
            break;
       }
    }
    printf("%d is the cost of the minimum spanning tree\n",cost);
}
int main()
{
    struct node a[14]={{0,3,6},{0,2,1},{0,4,8},{1,2,2},{1,5,8},{2,5,4},{3,5,3},{1,4,3}};
    int arr[9],n=6;
    for(int i=0;i<n;i++)
    {
        arr[i]=i;
    }
    insertionsort(a,14);
    kruskals(a,n,arr);
}
