public static boolean isEvil(int num){
  if(num<=0) return false;
  int countOnes=0;
  while(num>0){
    if(num%2==1){
      countOnes++;
    }
    num=num/2;
  }
return countOnes%2==0;
}
