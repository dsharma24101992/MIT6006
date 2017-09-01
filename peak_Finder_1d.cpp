#include<iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int low,mid, high;
    low = 0;
    high = n-1;
    while(1 )
    {
        mid = low +  (high-low)/2;
        if((mid == 0 || arr[mid] >= arr[mid-1])  && (mid == n-1 || arr[mid] >= arr[mid+1]))
        {
            break;
        }
        else if((mid - 1) >= 0 && arr[mid] < arr[mid-1])
        {
            high  = mid-1;
        }

        else if((mid + 1) < n && arr[mid] < arr[mid+1])
        {
            low = mid+1;
        }
    }
    cout << arr[mid];
}
