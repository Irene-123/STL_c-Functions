
class Solution {
public:
  string destCity(vector<vector<string>>& paths) {
        unordered_map<string,int> degreeMap;       //create an unordered map  
        for(auto& e: paths){         //iterator e for paths' vector
            degreeMap[e[0]] += 1;   //for every city position increase the counter
            degreeMap[e[1]] += 0;   //dont increase the counter for destination city 
        }
        
        for (auto& [k, v]: degreeMap)       
            if (v == 0)    //if you find a city whose index is 0 you have got the destination city !
                return k;   //return it
        return ""; 
    }
};
