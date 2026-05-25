
            }
            if(j<m){
                mergedArray.push_back(nums2[j]);
                j++;
            }
        }
        sort(mergedArray.begin(),mergedArray.end());

        if((n+m) %2 != 0){
            return mergedArray[(n+m)/2];
        }
        else{
            return (mergedArray[(n+m)/2]+mergedArray[(n+m)/2-1])/2.0;
        }
    }
};