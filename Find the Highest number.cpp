// https://www.geeksforgeeks.org/problems/find-the-highest-number2259/1

int n=a.size();
        int highest=a[0];
        for(int i=1;i<n;i++){
            if(a[i]>highest) highest=a[i];
            else{
                break;
            }
        }
        return highest;  
