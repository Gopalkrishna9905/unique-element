#include<iostream>
using namespace std;

 void Unique(int arr[],int size)
 {
 	int ans = 0;
 	for(int i=0;i<size;i++)
 	{
 		ans = ans^arr[i];
	 }
	 cout<<" uniqe element is : " <<ans << endl;
 }

int main()
{
	int arr[9] = {1,1,3,3,5,6,9,5,9};
	Unique(arr,9);
}
