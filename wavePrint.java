
public class wavePrint {
	public static void wavePrintFun(int input[][]){
		
		// Write your code here
        boolean flag = false;
        for(int j=0;j<input[0].length;j++){
            flag = !flag;
            if(flag){
                for(int i=0;i<input.length;i++){
                    //  System.out.print(i +" "+  j+" "+"XX");
                    System.out.print(input[i][j]);
                }
                System.out.println();
                
            }
            else{
                 for(int i=input.length-1;i>=0;i--){
                  // System.out.print(i +" "+  j+" "+"XX");
                   System.out.print(input[i][j]);
                }
                System.out.println();
                
            }
            
            
            
        }
        

	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int arr[][] = {
				{1,2,3},
				{4,5,6},
				{7,8,9},
				{10,11,12}
		};
		wavePrintFun(arr);
	}

}