class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(), skill.end());
        int l = 0, h = skill.size() - 1;
        int a = skill[l] + skill[h];
        long long sum = 0;
        while(l < h){
            if(skill[l] + skill[h] != a){
                return -1;
            }
            else{
                sum = sum + skill[l]*skill[h];
                l++;
                h--;
            }
        }
        return sum;
    }
};