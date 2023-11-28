import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;


class Name {

    public static int LargeSmall(int arr[]){
        if(arr.length == 0 || arr.length <=3){
            return 0;
        }

        ArrayList<Integer> oddArr = new ArrayList<>();
        ArrayList<Integer> evenArr = new ArrayList<>();
   

        for(int i =0;i<arr.length;i++){
            if(i%2 == 0){
                evenArr.add(arr[i]);
            }
            else{
                oddArr.add(arr[i]);

            }
        }


        int secondLargestEvenValue = evenArr.get(evenArr.size()-2);
        int secondSmallestOddValue = oddArr.get(1);

        return secondLargestEvenValue + secondSmallestOddValue;

    }

    public static void main(String[] args) {
        int arr[] = {1,8,0,2,3,5,6};
        System.out.println(LargeSmall(arr));
       
    }
}