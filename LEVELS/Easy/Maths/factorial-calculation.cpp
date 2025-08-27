class Solution
{
public:
  //       long long factorial(int n){
  //         long long fact=1;
  //         for(long long i=1;i<=n;i++){
  //             fact=fact*i;
  //         }
  //         return fact;
  //      }
  //     int trailingZeroes(int n) {
  //        long long fact=factorial(n);
  //        int cnt=0;
  //      while (fact > 0 && fact % 10 == 0) {
  //             cnt++;
  //             fact /= 10;
  //         }

  //        return cnt;

  //     }
  int trailingZeroes(int n)
  {
    int cnt = 0;
    while (n > 0)
    {
      n /= 5;
      cnt += n;
    }
    return cnt;
  }
};