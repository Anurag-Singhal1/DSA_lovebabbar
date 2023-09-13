// 2 pointer approach: here we first take full window size and then reduce it.
class Solution {
public:
    vector<int> twoPtrMethod(vector<int>& arr, int k, int x) {
        int l =0;
        int h = arr.size()-1;
        while(h-l>=k){
            if(x-arr[l]>arr[h]-x){
                l++;
            }
            else{
                h--;
            }
        }
        // vector<int> ans;
        // for(int i=l;i<=h;i++){
        //     ans.push_back(arr[i]);
        // }
        // return ans;

        return vector<int> (arr.begin()+l, arr.begin()+h+1);
    }
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        return twoPtrMethod(arr,k,x);
    }
};

//  by finding lower bound and binary search....
class Solution {
public:
    int lowerBound(vector<int>& arr, int x) { // lower bound: to find the closest element to x.
        int st = 0;
        int end = arr.size()-1;
        int ans = end;
        while(st<=end){
            int mid = st + (end-st)/2 ;
            if(arr[mid]>=x){
                ans = mid;
                end = mid-1;
            }
            else if(x > arr[mid]){
                st = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return ans;
    }
    vector<int> bsMethod(vector<int>& arr, int k, int x) {
        int h = lowerBound(arr,x);
        int l = h-1;
        while(k--){
            if(l<0){
                h++;
            }
            else if(h>=arr.size()){
                l--;
            }
            else if(x-arr[l]>arr[h]-x){
                h++;
            }
            else{
                l--;
            }
        }
        return vector<int> (arr.begin()+l+1, arr.begin()+h);

    }
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
    return bsMethod(arr,k,x);
    }
};