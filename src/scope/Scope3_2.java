package scope;

public class Scope3_2 {

    public static void main(String[] args) {
        int m = 10;
        if (m > 0) {
            int temp = m * 2;
            System.out.println("temp = " + temp);
        }  // 군더더기 없는 코드 -> temp 변수의 스코프 if문 내로 지정
        System.out.println("m = " + m);
    }
}
