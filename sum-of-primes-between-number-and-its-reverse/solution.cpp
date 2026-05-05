        for(int i = min(n,reversed);i<=max(n,reversed);i++){
            if(isPrime(i)) result+=i;
        }

        return result;
    }

    bool isPrime(int n){
        if(n<=1) return false;

        int result=0;
        
        reverse(s.begin(),s.end());
        reversed = stoi(s);
    int sumOfPrimesInRange(int n) {
        int reversed = 0;
        string s = to_string(n);
class Solution {
public:
