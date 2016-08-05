class Solution {
    public:
    int record[40] = {0};

    int Fibonacci(int n) {
        if(record[n]){
            return record[n];
        }else{
            if(n<=0){
                record[0] = 0;
                return 0;
            }
            else if(n<=2){
                record[n] = 1;
                return 1;
            }else{
                record[n] = Fibonacci(n-1)+Fibonacci(n-2);
                return  record[n];
            }
        }

    }
};