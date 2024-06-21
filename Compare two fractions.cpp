// https://www.geeksforgeeks.org/problems/compare-two-fractions4438/1

class Solution {
  public:
    string compareFrac(string str) {

        // Code here
        string str1="";
        int i=0;
        while(str[i]!=','){
            str1.push_back(str[i]);
            i++;
        }
        i+=2;
        string str2="";
        while(i<str.length()){
            str2.push_back(str[i]);
            i++;
        }
        
        i=0;
        int a,b,c,d;
        a=b=c=d=-1;
        string stra="";
        string strb="";
        string strc="";
        string strd="";
        while(str[i]!='/'){
            stra.push_back(str[i]);
            i++;
        }
        i++;
        while(str[i]!=','){
            strb.push_back(str[i]);
            i++;
        }
        i+=2;
        while(str[i]!='/'){
            strc.push_back(str[i]);
            i++;
        }
        i++;
        while(i<str.length()){
            strd.push_back(str[i]);
            i++;
        }
        
        a=stoi(stra);
        b=stoi(strb);
        c=stoi(strc);
        d=stoi(strd);
        
        if(a==0 && c==0){
            return "equal";
        }
        else if(a==c && b<d){
            return str1;
        }
        else if(a==c && b>d){
            return str2;
        }
        else if(a>c && b==d){
            return str1;
        }
        else if(a<c && b==d){
            return str2;
        }
        
        
         
    int crossProduct1 = a * d;
    int crossProduct2 = b * c;

    // Compare the cross products
    if (crossProduct1 == crossProduct2) {
        return "equal";
    } else if (crossProduct1 > crossProduct2) {
        return str1;
    } else {
        return str2;
    }
    }
};
