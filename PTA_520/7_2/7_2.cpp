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
#include <iostream>
using namespace std;

int main(void)
{
	int grade;
	cin >> grade;
	if (grade >= 90) {
		cout << "gong xi ni kao le " <<grade<< " fen!";
	}
	else {
		cout << "kao le " <<grade<< " fen bie xie qi!";
	}
	return 0;
}