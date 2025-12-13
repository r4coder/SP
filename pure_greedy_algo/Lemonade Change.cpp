class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {

        int f=0,t=0;


        for(int i=0;i<bills.size();i++)
        {

                     if(f<0)
                    {
                       return false;
                    }

              if(bills[i]==5)
              {
                     f++;
              }

              else if(bills[i]==10)
              {
                        f--;
                        t++;
              }

              else if(bills[i]==20)
              {
                       if(t==0)
                       {
                            f-=3;
                       }

                       else
                       {
                        t--;
                        f--;
                       }
              }
        }

         if(f<0)
        {
            return false;
        }

        

      return true;
        
    }
};
