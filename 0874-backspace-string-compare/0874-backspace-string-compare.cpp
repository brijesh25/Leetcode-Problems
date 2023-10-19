class Solution {
public:
    bool backspaceCompare(string s, string t) 
    {
        int n = s.length(), m = t.length(), count = 0;
        for(int i = n - 1; i >= 0; i--)
        {
            if(s[i] == '#')
                count++, s.erase(i, 1);
            else
            {
                if(count > 0)
                    s.erase(i, 1), count--;
            }
        }
        count = 0;
        for(int i = m - 1; i >= 0; i--)
        {
            if(t[i] == '#')
                count++, t.erase(i, 1);
            else
            {
                if(count > 0)
                    t.erase(i, 1), count--;
            }
        }
        cout<<s<<endl<<t;
        return s == t;
    }
};