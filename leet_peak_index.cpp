class Solution {
public:

    /* int peakIndex(vector<int> arr){
        int s=0;
        int e = arr.size()-1;
        int mid = s +(e-s)/2 ;

        while(s<e){
            if(arr[mid]<arr[mid+1]){
                // right search
                s = mid+1;
            }
            else{
                e=mid;
            }
            mid = s +(e-s)/2 ;
        }
        return e;         // return s ya e : ek hi baat hai..
    } */
    int peakIndexInMountainArray(vector<int>& arr) {
        int s=0;
        int e = arr.size()-1;
        int mid = s +(e-s)/2 ;

        while(s<e){
            if(arr[mid]<arr[mid+1]){
                // right search
                s = mid+1;
            }
            else{
                e=mid;
            }
            mid = s +(e-s)/2 ;
        }
        return e;         // return s ya e : ek hi baat hai..
        // return peakIndex(arr);
    }
};