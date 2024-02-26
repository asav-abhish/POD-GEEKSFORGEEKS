//  https://www.geeksforgeeks.org/problems/power-set4302/1

void help(string& s,int i,string temp,vector<string>& ans)
	    {
	        //base case
	        if(i>=s.length())
	        {
	            if(temp.length())
	            ans.push_back(temp);
	            
	            return ;
	        }
	        
	        //recursive calls
	        //and small calculation
	        help(s,i+1,temp,ans);
	        help(s,i+1,temp+s[i],ans);
	    }
