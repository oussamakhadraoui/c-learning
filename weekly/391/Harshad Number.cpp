class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum=0;
        int clone=x;
        while(clone){
            sum+=clone%10;
            clone/=10;
            
        }
        return x%sum==0?sum:-1;
        
    }
};