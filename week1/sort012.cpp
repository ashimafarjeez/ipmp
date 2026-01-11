//Given an array arr[] containing only 0s, 1s, and 2s. Sort the array in ascending order.

class Solution {
  public:
    void sort012(vector<int>& arr) {
        int low=0, high=arr.size()-1, mid=0;
        while(mid<=high){
            if(arr[mid]==0){
                swap(arr[mid], arr[low]);
                low++;
                mid++;
            }else if(arr[mid]==1){
                mid++;
            }else{
                swap(arr[mid], arr[high]);
                high--;
            }
        }
    }
};

//TC: O(n), SC: O(1)
