/*
7-1 考试周
题目如下：
考试周快到了，浙江大学的电子屏又调皮了…… 本题请你帮小编写一个自动倒计时的程序，对给定的日期（例如“腊八”就对应 8）和倒计时天数（例如电子屏上的“四天之后”就对应 4），自动调整公式里的分母（例如 8/2=4 里面的那个 2）。
输入格式
输入在一行中给出两个正整数：A 是给定的日期，不超过 30；B 是倒计时天数，不超过 10。
输出格式
在一行中输出公式 A/X=B，其中 X 是满足等式的数字，输出时保留小数点后 1 位即可。

输入样例
8 3
输出样例
8/2.7=3
*/
import java.text.DecimalFormat;
import java.util.Scanner;

public class P7_1 {

    public static void main(String[] args) {
        int day;
        int showday;
        double x;
        DecimalFormat df = new DecimalFormat("0.0");
        Scanner in = new Scanner(System.in);
        day = in.nextInt();
        showday = in.nextInt();
        x = day * 1.0 / showday;
        System.out.println(day+"/" + df.format(x) + "=" + showday);
    }
}
