#include <iostream>
#include <vector>
#include <algorithm>  
using namespace std;
vector<int> maxmin(int *arr, int start, int end)
{

    vector<int> temp(2);
    vector<int> ans(2);
    int max1;
    int min1;
    if (start == end)
    {
        ans.push_back(arr[start]);
        ans.push_back(arr[end]);
    }
    else if (start == end - 1)
    {
        if (arr[start] > arr[end])
        {
            ans.push_back(arr[start]);
            ans.push_back(arr[end]);
        }
        else{
            ans.push_back(arr[end]);
            ans.push_back(arr[start]);
        }
    }
    
    // dividing 

    int mid = start + end / 2;

    maxmin(arr, start, mid);
    temp = ans;
    maxmin(arr, mid+1, end);

    // conquering

    if (temp[0] > ans[0])
    {
        replace(ans.begin(), ans.end(), ans[0], temp[0]);
        
    }
    else if (temp[0] < ans[0])
    {
        replace(ans.begin(), ans.end(), temp[0], ans[0]);
        
    }

    
    if (temp[1] < ans[1])
    {
        replace(ans.begin(), ans.end(), ans[1], temp[1]);
        
    }
    else if (temp[1] > ans[1])
    {
        replace(ans.begin(), ans.end(), temp[1], ans[1]);
        
    }
    


}

int main()
{
    int n;
    cout << "Enter size of array:" << endl;
    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

   vector<int> ans(maxmin(arr, 0, n - 1));

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i]<< " ";
    }
}