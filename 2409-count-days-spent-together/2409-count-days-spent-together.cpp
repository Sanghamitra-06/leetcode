class Solution {
public:
    int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int calculateDayOfYear(const string& date) {
        int month = stoi(date.substr(0, 2));
        int day = stoi(date.substr(3, 2));
        int dayOfYear = day;
        for (int i = 0; i < month - 1; ++i) {
            dayOfYear += daysPerMonth[i];
        }
        return dayOfYear;
    }
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int startA = calculateDayOfYear(arriveAlice);
        int endA = calculateDayOfYear(leaveAlice);
        int startB = calculateDayOfYear(arriveBob);
        int endB = calculateDayOfYear(leaveBob);
        int latestStart=max(startA,startB);
        int earliestEnd=min(endA,endB);
        return max(0,earliestEnd-latestStart+1);
        
    }
};