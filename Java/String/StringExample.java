import java.util.Date;

public class StringExample {
    public static void main(String[] args) {
        String name = "Sadman";
        String a = new String("Hello World!");
        char[] helloArray = { 'H', 'E', 'L', 'L', 'O' };
        System.out.println(helloArray);
        byte[] b = new byte[] { 97, 98, 99 };
        System.out.println("b: " + new String(b));
        Date date = new Date();


        System.out.println(name.length());
        String t = "Please locate where 'locate' occurs!";
        System.out.println(t.indexOf("locate"));
        System.out.println(t.charAt(4));
        System.out.println(t.compareTo(name));
    }

}
