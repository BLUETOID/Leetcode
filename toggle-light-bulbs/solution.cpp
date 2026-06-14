
        sort(bulbs.begin(),bulbs.end());
        vector<int>result;
        int j = 0;
        for(int i=0;i<bulbs.size();i++){
            if(result.empty()){
                result.push_back(bulbs[i]);
                j++;
            }
            else if(result.back()==bulbs[i]){
                result.pop_back();
                j--;
            }
            else{
                result.push_back(bulbs[i]);
                j++;
            }
        }
