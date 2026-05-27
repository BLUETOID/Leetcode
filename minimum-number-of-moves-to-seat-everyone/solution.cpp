
class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int answer=0;
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        for(int i=0;i<seats.size();i++){
            answer+=abs(seats[i]-students[i]);
        }

        return answer;
    }
};