public class solution{
  public int findMissing( int [] nums ){
    int n=nums.length;
    int sum=n*(n+1)/2;
    int actualsum=0;
    for(int num:nums){
      actualsum+=num;
    }
    return sum-actualsum;
  }
