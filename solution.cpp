#include <iostream>
using namespace std;

int binarysearch(int arr[] , int n , int target){
    int s = 0; 
    int e = n-1;

while(s<=e){
  int mid  = s+(e-s)/2;

  if(arr[mid] == target){
    return mid;
  }
  else if(arr[mid] < target ){  
    s= mid+1;
  }
  else{
    e = mid-1;
  }
}
  return -1;
}

  

int main (){
  int arr[] = {1,3,5,7,9,11};
  int n = 6;
  int target = 7;

int ans  = binarysearch(arr , n , target);

if(result!=-1){
  cout << "element found at index" << endl;
}
else{
cout <<"element not found" << endl;
}

return 0;
