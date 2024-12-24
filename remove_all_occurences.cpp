 #include <iostream>
using namespace std;

void remove_all_occurrence(int arr[],
						int target,
						int n)
{
int cnt = 0;
 
for(int i = 0; i < n; i++)
{
	if(arr[i] == target) 
	cnt++;
}
 
int new_arr[n - cnt];
int ind = 0;
for(int i = 0; i < n; i++)
{
	if(arr[i] != target)
	{
	new_arr[ind] = arr[i];
	ind++;
	}
}
 
int m = (sizeof(new_arr) / 
		sizeof(new_arr[0]));
for(int i = 0; i < m; i++)
{
	cout << new_arr[i] << " "; 
}
return;
}
 
int main() 
{
int arr[]={1, 4, 3, 6, 8,
			3, 9, 10, 3, 3, 7};
int target = 3;
int n = (sizeof(arr) / 
		sizeof(arr[0]));
remove_all_occurrence(arr, target, n);
return 0;
}
