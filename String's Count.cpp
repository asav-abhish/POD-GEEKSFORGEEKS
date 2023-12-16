// https://www.geeksforgeeks.org/problems/count-of-strings-that-can-be-formed-using-a-b-and-c-under-given-constraints1135/1

long long int countStr(long long int n){
    //complete the function here
    long long res = 2 * n + (3 * (n - 1) * n) / 2 + (n * (n - 1) * (n - 2)) / 2 + 1;
    return res;
}
