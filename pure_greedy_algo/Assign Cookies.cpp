class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {

        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int g_s=g.size();
        int s_s=s.size();
        int i=g_s-1;
        int j=s_s-1;
        int count=0;


        while(i>=0&&j>=0)
        {
          if(s[j]>=g[i])
          {
                count++;
                j--;
                i--; 
          }

          else
          {
            i--;
          }

        }

        return count;


        
    }
};
