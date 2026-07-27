class Solution {
public:
    bool detectCapitalUse(string word) {
        bool allUpper = true;
        bool allLower = true;
        bool oneUpper = true;

        for (int i = 0; i < word.length(); i++) {
            int w = word[i];

            // Check all uppercase
            if (w < 65 || w > 90)
                allUpper = false;

            // Check all lowercase
            if (w < 97 || w > 122)
                allLower = false;

            // Check first uppercase, rest lowercase
            if (i == 0) {
                if (w < 65 || w > 90)
                    oneUpper = false;
            } else {
                if (w < 97 || w > 122)
                    oneUpper = false;
            }
        }

        return allUpper || allLower || oneUpper;
    }
};