class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        int type = 0;
        int type_array[26] = {1, 2, 2, 1, 0, 1, 1, 1, 0, 1, 1, 1, 2,
                              2, 0, 0, 0, 0, 1, 0, 0, 2, 0, 2, 0, 2};
        vector<string> answer;
        for (int i = 0; i < words.size(); ++i) {
            type = type_array[tolower(words[i][0]) - 'a'];
            for (int j = 1; j < words[i].length(); j++) {
                if (type != type_array[tolower(words[i][j]) - 'a']) {
                    type = -1;
                    break;
                }
            }
            if (type != -1)
                answer.push_back(words[i]);
        }
        return answer;
    }
};