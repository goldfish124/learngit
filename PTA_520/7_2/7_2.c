#include <stdio.h>
/*7-2 真的恭喜你
题目如下
当别人告诉你自己考了 x 分的时候，你要回答说：“恭喜你考了 x 分！”比如小明告诉你他考了90分，你就用汉语拼音打出来 gong xi ni kao le 90 fen!。
但是如果小明没考好，比如只考了 20 分，你也“恭喜”人家就不对了。这时候你应该安慰他说：“考了 20 分别泄气！”用汉语拼音写出来就是** kao le 20 fen bie xie qi!**。
输入格式
输入在一行里给出一位小朋友的分数。这个分数是一个 0 到 100 之间的整数。
输出格式
在一行中输出你对这位小朋友说的话。如果人家考到不低于 90 分，就说 gong xi ni kao le X fen!；如果不到 90 分，就说 kao le X fen bie xie qi!。其中 X 是小朋友输入的分数。

输入样例1
95
输出样例1
gong xi ni kao le 95 fen!

输入样例2
89
输出样例2
kao le 89 fen bie xie qi!*/
int main(void)
{
	int grade;
	//实现
	scanf("%d", &grade);
	if (grade >= 90) {
		printf("gong xi ni kao le %d fen!",grade);
	}
	else {
		printf("kao le %d fen bie xie qi!", grade);
	}
	//输入小于0的数字重新输入实现
	//answer(&grade);
	return 0;
}
/*void answer(int *g) {
	scanf("%d",g);
	if (*g > 0) {
		if (*g >= 90) {
			printf("gong xi ni kao le %d fen!", *g);
		}
		else {
			printf("kao le %d fen bie xie qi!", *g);
		}
	}
	else {
		answer(g);
	}
}*/
