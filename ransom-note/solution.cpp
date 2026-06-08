
        }

        for(auto x :ransomNote ){
            freq1[x]--;
            if(freq1[x] < 0) return false;
        }

        return true;

        
    }
};