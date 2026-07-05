class Solution {
public:

    string encode(vector<string>& strs) {
        string res = "";
        for(int i = 0; i < strs.size(); i++){
            res+=to_string(strs[i].size());
            res+='#';
            res+=strs[i];
        }
        return res;
    }

    vector<string> decode(string s) {
    // read number until '#'
    // convert to int
    // read len characters
    // store string
        vector<string> answer;
        int i = 0;
        while(i < s.size()){
            string st = "";
            string res = "";
            while(s[i] != '#'){
                st+=s[i];
                i++;
            }
            i++;
            int num = stoi(st);
            while(num){
                res+=s[i];
                i++;
                num--;
            }
            answer.push_back(res);
        }

        return answer;
    }
};
