class Solution {
public:
    bool isPalindrome(string s) {

         int i = 0;
        int j = s.size() - 1;

        while (i < j) {

            // Skip non-alphanumeric characters from left
            if (!isalnum(s[i])) {
                i++;
            }
            // Skip non-alphanumeric characters from right
            else if (!isalnum(s[j])) {
                j--;
            }
            else {
                // Compare characters ignoring uppercase/lowercase
                if (tolower(s[i]) != tolower(s[j])) {
                    return false;
                }

                i++;
                j--;
            }
        }

        return true;
  
      
    }
};