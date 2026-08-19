class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map <int, int> mp;
        for(int i =0; i<nums.size(); i++) 
        { 
            mp[nums[i]]++;
        }  
        vector<int> v ; 
          for(int i=0; i < k ; i++)
          { 
            int highest=-1;
                int number=0;
            for(auto x : mp)
            { 
                
                if(x.second>highest)
                { 
                    highest=x.second;
                    number=x.first;
                } 
                
            } 
            v.push_back(number) ;
                mp[number]=-1;


          } 
          return v;
        
        
    }
};
