#include<bits/stdc++.h>
using namespace std;
///Merge for merge sort
Merge(int a[],int b[],int c[])
{
    int n,m;

    n = sizeof (a)/sizeof (a[0]);
    m = sizeof (b)/sizeof (b[0]);
    for(int i=0; i<n-1; i++)
    {
        c[i]=a[i];
    }
    for(int i=n; n+m; i++)
    {
        c[i]=b[i];
    }
}
///endl

///Partition for quick sort
int Partition(int *A,int s,int e)
{
    int pivot = A[e];
    int p=s;
    for(int i=s; i<e; i++)
    {
        if(A[i]<=pivot)
        {
            swap(A[i],A[p]);
            p++;
        }
    }
    swap(A[p],A[e]);
    return p;
}
///quick sort
void quicksort(int *A,int s,int e)
{
    if(s<e)
    {
        int p=Partition(A,s,e);
        quicksort(A,s,p-1);
        for(int i=s; i<p; i++)
        {
            cout<<A[i]<<" ";
        }
        cout<<endl;

        quicksort(A,p+1,e);
        for(int i=p; i<e; i++)
        {
            cout<<A[i]<<" ";
        }
        cout<<endl;
    }
}
///endl

///insertion sort
void insertionsort (int a[],int n)
{
    for(int i=1; i<=n-1; i++)
    {
        int x=a[i];
        int k=i;
        while(k>0 && a[k-1]>x)
        {
            a[k]=a[k-1];
            k=k-1;
        }
        a[k]=x;
    }
}

///Bubble Sort
void Bubblesort(int a[],int n)
{
    int i,j;
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(a[j]>a[j+1])
                swap(a[j],a[j+1]);
        }
    }
}
///endl

///mergesort

void Mergesort(int a[], int n)
{

    if(n<2) return;
    int mid=n/2;
    int left[mid];
    int right[n-mid];
    for(int i=0; i<mid-1; i++)
    {
        left[i]=a[i];
    }
    for(int i=mid; i<n-1; i++)
    {
        right[i-mid]=a[i];
    }
    Mergesort(left,mid-1);
    Mergesort(right,n-mid);
    Merge(left,right,a);

}
///endl

///Binary search
int binarysearch( int a[], int n, int x)
{
    int s=0,e=n-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(a[mid] == x)
        {
            return mid;
        }
        else if(x<a[mid])
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }


    }
    return -1;
}
///selsection sort
void selectionsort( int a[],int n)
{
    for(int i=0;i<n-1;i++)
}
int main()
{
    int A[]= {101,15,29,31,12,50,77,34,98,98,45};
    int n = sizeof (A)/sizeof (A[0]);

    //quicksort(A,0,10);

    //Bubblesort(A,n);
    // Mergesort(A,n);
    //insertionsort(A,n);
    /*for(int i=0; i<11; i++)
    {
        cout<<A[i]<<" ";
    }*/
    int x=binarysearch(A,n,77);

    if(x==-1)
    {
        cout<<"NOT FOUND";
    }
    else
        cout<<"Found at position "<<x;

}
