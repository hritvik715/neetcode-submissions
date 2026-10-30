class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;


        unordered_map<char , int> count;
        for(char ch : s){
            count[ch]++;
        }
    
        for(char ch :t){
            count[ch]--;
        }
        
        for(auto entry :count){
            if(entry.second !=0){ //not a single week character
                return false;
            }
        }
    return true;


        //  for (auto entry : count) {
        //     if (entry.second != 0) {
        //         return false;
        //     }
        // }

    // return true;

        // for(int i=0 ;i<s.size() ; i++){
        //     cout<<s[i];
        // }

        // cout<<endl;
        
        // for(int i=0 ;i<s.size() ; i++){
        //     cout<<t[i];
        // }

        

        // for(int i =0; i<count.size() ; i++){
        //     cout<<count[i]<<endl;
        // }

        // auto it = count.begin();

        // for (int i = 0; i < count.size(); i++) {
        //     cout << it->first << " : " << it->second << '\n';
        //     it++;
        // }

        // for(auto entry :count){
        //     cout<<entry.first <<" : "<<entry.second<<endl;
        // }
        

    
    }
};
