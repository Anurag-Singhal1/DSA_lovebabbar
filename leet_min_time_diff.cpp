class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        // step 1 : converting all time to minutes
        vector<int> minutes;
        for(int i=0;i<timePoints.size();i++){
           string curr = timePoints[i];
           int hour = stoi(curr.substr(0,2));
           int minute = stoi(curr.substr(3,2));
           int totalMinutes = hour*60 + minute;
            minutes.push_back(totalMinutes);
        } 

        // step 2 : sort() THE MINUTES array..to reduce the total no of comparisons
        sort(minutes.begin(),minutes.end());

        // step 3 : find the difference of adjacent elements and then minimum
        int mini = INT_MAX;
        for(int i=1;i<minutes.size();i++){
            int diff = minutes[i]-minutes[i-1];
            mini = min(mini,diff);
        }

        // step 4: this is the main game...find the last circular difference..
        int n = minutes.size();
        int lastdiff = (minutes[0]+1440)- minutes[n-1]; // +1440, bcz to make it full circular ...
        mini = min(mini,lastdiff);

        return mini;
    }
};