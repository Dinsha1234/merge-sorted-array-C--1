ra#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

void write_vector(vector<int>& arr1, vector<int>& arr2, vector<int>& arr3)
{
   merge(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), arr3.begin()); 
   sort(arr1.begin(), arr1.end()); 
   for (int i = 0; i < arr3.size(); i++) 
        cout << arr3[i] << " "; 
}



int main()
{
  int input1,n,m,input2;
  vector<int> arr1;
  vector<int> arr2;
  cin>>n;
  cin>>m;
  vector<int> arr3(n+m);
  for (int i = 0; i < n; i++) {
    cin >> input1;
    arr1.push_back(input1);
  }
  for(int i=0;i<m;i++){
    cin>>input2;
    arr2.push_back(input2);
  }


write_vector(arr1,arr2, arr3);

  return 0;
}