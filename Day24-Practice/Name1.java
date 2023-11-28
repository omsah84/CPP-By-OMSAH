public class Name1 {
    public static void main(String[] args) { // IAmGoodBoy
        String st = "IAmGoodBoy";
        String newStr = "";
        int l = st.length() - 1;
        for (int i = 0; i < st.length(); i++) {
            char c = st.charAt(i);
            if ((c >= 'A') && (c <= 'Z')) {
                newStr = newStr + ((char) ((int) c + 32));

                if (l > i) {
                    char ca = st.charAt(i + 1);
                    if ((ca >= 'A') && (ca <= 'Z')) {
                        System.out.print(newStr + "\n");
                        newStr = "";
                    }
                } else {
                    System.out.println(newStr);
                }

            }
            
            else {
                newStr = newStr + ((char) ((int) c - 32));

                if (l > i) {
                    char ca = st.charAt(i + 1);
                    if ((ca >= 'A') && (ca <= 'Z')) {
                        System.out.print(newStr + "\n");
                        newStr = "";
                    }
                } else {
                    System.out.println(newStr);
                }

            }

        }

    }
}
