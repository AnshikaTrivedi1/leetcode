class Solution {
public:
    string numberToWords(int num) {
        if (num == 0) return "Zero";
        
        vector<string> ones = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
        vector<string> tens = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
        vector<string> thousands = {"", "Thousand", "Million", "Billion"};
        
        string result = "";
        int group = 0;
        
        while (num > 0) {
            if (num % 1000 != 0) {
                string groupStr = convertHundreds(num % 1000, ones, tens);
                if (group > 0) {
                    groupStr += " " + thousands[group];
                }
                result = groupStr + (result.empty() ? "" : " " + result);
            }
            num /= 1000;
            group++;
        }
        
        return result;
    }
    
private:
    string convertHundreds(int num, vector<string>& ones, vector<string>& tens) {
        string result = "";
        
        if (num >= 100) {
            result += ones[num / 100] + " Hundred";
            num %= 100;
            if (num > 0) result += " ";
        }
        
        if (num >= 20) {
            result += tens[num / 10];
            if (num % 10 > 0) {
                result += " " + ones[num % 10];
            }
        } else if (num > 0) {
            result += ones[num];
        }
        
        return result;
    }
};