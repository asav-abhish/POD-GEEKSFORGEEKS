// https://www.geeksforgeeks.org/problems/magical-box5306/1

class Solution {
  public:
    double maxVolume(double perimeter, double area) {
        // code here
        double per= perimeter, a=area;
        double len= (per/2-sqrt(per*per/4-6*a))/6;
        return len*len*(per/4-2*len);
    }
};