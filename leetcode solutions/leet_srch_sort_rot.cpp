class Solution {
public:
    int binarySearch(vector<int> nums, int target, int start, int end){
       
        int mid = start + (end-start)/2;

        while(start<=end){
            if(nums[mid]==target){
                return mid;
            }
            else if(target<nums[mid]){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
            mid=(start+end)/2;
        }
        return -1;
    }
    int findPivot(vector<int> arr){
        int s =0;
        int e = arr.size()-1;
        int mid = s + (e-s)/2 ;

        while(s<e){
            if(mid+1<arr.size() && arr[mid]>arr[mid+1]){      // jisse ki code fate na...corner case
                return mid;
            }
            if(mid-1>=0 && arr[mid-1]>arr[mid]){     // corner case ki wajah se humne ye && conditn lagayi hai
                return mid-1;
            }
            if(arr[s]>=arr[mid]){
                e = mid-1;
            }
            else{
                s = mid;
            }
            mid = s + (e-s)/2 ;
        }
        return s;
    }
    int search(vector<int>& nums, int target) {
        int pivotindex  = findPivot(nums);

        if( target>=nums[0] && target<=nums[pivotindex]){
            int ans = binarySearch(nums,target,0,pivotindex);
            return ans;
        }
        if(pivotindex+1<nums.size() && target>=nums[pivotindex+1] && target<=nums[nums.size()-1]){
            int ans = binarySearch(nums,target, pivotindex+1, nums.size()-1);
            return ans;
        }
        return -1;
    }
};