/*
Given an array arr[] of size N, the task is to print the lexicographically next greater permutation of the given array.
 If there does not exist any greater permutation, then print the lexicographically smallest permutation of the given array.

Examples:

Input: N = 6, arr = {1, 2, 3, 6, 5, 4}
Output: {1, 2, 4, 3, 5, 6}
Explanation: The next permutation of the given array is {1, 2, 4, 3, 5, 6}.

Input: N = 3, arr = {3, 2, 1}
Output: {1, 2, 3}
Explanation: As arr[] is the last permutation. 
So, the next permutation is the lowest one.
*/
#include<iostream>
using namespace std;
#include<algorithm>
int ind(int a[],int mn)
{
     for(int i=mn-1;i>0;i--)
              {
                if(a[i]>a[i-1])
                 return i;
              }
              return 0;
}
int main()
{
     int n;
     cin>>n;
     int a[n];
      for(int i=0;i<n;i++)
      {
          cin>>a[i];
      }
     int t=ind(a,n);
     if(t==0)
     {
          cout<<"nothing to arrange";
          return 0;
     }
     int p=a[t-1];
     int max=INT_MAX;
     int ind=0;
     for(int i=t;i<n;i++)
     {
           if(a[i]<max)
           {
               if(a[i]>p)
               {
               max=a[i];
               ind=i;
               }
           }
     }
     swap(a[t-1],a[ind]);
       
          sort(a+t,a+n);
          for(int i=0;i<n;i++)
        {
          cout<<a[i]<<" ";
        }
}
