public class Solution{  

    public static int findUnique(int[] arr){
		//Your code goes here
        for(int i=0;i<arr.length;i++){
            boolean flag = true;
            for(int j=0;j<arr.length;j++){
                if(i==j){
                    continue;
                }
                if(arr[i]==arr[j]){
                    flag = false;
                    break;
                }
            }
            if(flag){
                return arr[i];
            }
        }
        return -1;
    }
}