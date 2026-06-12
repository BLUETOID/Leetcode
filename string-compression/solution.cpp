
            while(i<n && chars[i]==current){
                i++;
                count++;
            }

            chars[index++] = current;

            if(count > 1){
                string cnt = to_string(count);
                for(char c: cnt){
                    chars[index++] = c;
                }
            }
        }
    return index;
    }
};