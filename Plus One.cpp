class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        reverse(digits.begin(),digits.end());
        int c = 1;
        int index = 0;
        while(c)
        {
            
            if(index<digits.size())
            {
                if(digits[index]==9)
                {
                    digits[index]=0;
                    c=1;
                }
                else
                {   
                    digits[index] += 1;
                    c=0;
                }
            }
            else
            {
                digits.push_back(1);
                c=0;
            }
            index+=1;
        }
        
        reverse(digits.begin(),digits.end());
        return digits;
        
    }
};
