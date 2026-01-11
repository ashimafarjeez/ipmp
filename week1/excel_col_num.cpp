//Given a string columnTitle that represents the column title as appears in an Excel sheet, return its corresponding column number.

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int num = 0;
        for(int i=0; i<columnTitle.size(); i++){
            num = num*26 + (columnTitle[i]-'A'+1);
        }
        return num;
    }
};

//TC: O(n), SC: O(1)
