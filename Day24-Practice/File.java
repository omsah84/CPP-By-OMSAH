public class File {
    public static void main(String[] args) {
        String st = "aabbbccccd";
        String newst ="";

        for(int i = 0;i<st.length()-1;i++){
            char c = st.charAt(i);
            if(c !=st.charAt(i+1)){
                newst  =   newst + c;
            }
        }
        newst  =   newst + st.charAt(st.length()-1);
        System.out.println(newst);

        
    }
}
