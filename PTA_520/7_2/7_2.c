#include <stdio.h>
/*7-2 ��Ĺ�ϲ��
��Ŀ����
�����˸������Լ����� x �ֵ�ʱ����Ҫ�ش�˵������ϲ�㿼�� x �֣�������С��������������90�֣�����ú���ƴ������� gong xi ni kao le 90 fen!��
�������С��û���ã�����ֻ���� 20 �֣���Ҳ����ϲ���˼ҾͲ����ˡ���ʱ����Ӧ�ð�ο��˵�������� 20 �ֱ�й�������ú���ƴ��д��������** kao le 20 fen bie xie qi!**��
�����ʽ
������һ�������һλС���ѵķ��������������һ�� 0 �� 100 ֮���������
�����ʽ
��һ������������λС����˵�Ļ�������˼ҿ��������� 90 �֣���˵ gong xi ni kao le X fen!��������� 90 �֣���˵ kao le X fen bie xie qi!������ X ��С��������ķ�����

��������1
95
�������1
gong xi ni kao le 95 fen!

��������2
89
�������2
kao le 89 fen bie xie qi!*/
int main(void)
{
	int grade;
	//ʵ��
	scanf("%d", &grade);
	if (grade >= 90) {
		printf("gong xi ni kao le %d fen!",grade);
	}
	else {
		printf("kao le %d fen bie xie qi!", grade);
	}
	//����С��0��������������ʵ��
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
