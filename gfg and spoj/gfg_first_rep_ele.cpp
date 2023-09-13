int firstRepeated(int arr[], int n) {
        // 1. simple by 2 for loops ......
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]==arr[j]){
                    return i+1;
                }
            }
        }
        return -1;
        
        
        // by hashing table: stl library.....
        unordered_map<int,int> hash;
        for(int i=0;i<n;i++){
            hash[arr[i]]++;
        }
        
        for(int i=0;i<n;i++){
            if(hash[arr[i]]>1){
                return i+1;
            }
        }
        return -1;
    }