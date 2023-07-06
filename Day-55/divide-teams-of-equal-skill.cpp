//2491. Divide Players Into Teams of Equal Skill
class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        long long ans=0;
        sort(skill.begin(),skill.end());
        vector<long long>v;
        int start=0;
        int end=skill.size()-1;
        while(start<=end){
            v.push_back(skill[start]+skill[end]);
            ans+=skill[start++]*skill[end--];
        }

        for(int i=1;i<v.size();i++){
            if(v[i-1]!=v[i]){
                return -1;
            }
        }
        return ans;
    }
};