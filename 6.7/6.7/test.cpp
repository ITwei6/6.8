#include <iostream>
using namespace std;
#include <string>
//
//int main()
//{
//	string url = "ftp://www.baidu.com/?tn=65081411_1_oem_dg";
//
//	//Э��  ����  ��Դ��
//
//	size_t pos1 = url.find("://");
//	string protocol;
//	if (pos1 != string::npos)
//	{
//		protocol = url.substr(0, pos1);
//		//��λ��0����ط���ȡpos1���ȵ��ַ�������protocol
//	}
//	cout << protocol << endl;
//	size_t pos2 = url.find('/', pos1 + 3);
//	string domain;//����
//	string uri;//��Դ��
//	if (pos2 != string::npos)
//	{
//		domain = url.substr(pos1 + 3, pos2 - (pos1 + 3));
//		uri = url.substr(pos2+1);
//	}
//	cout << domain << endl;
//	cout << uri << endl;
//}
//int main()
//{
//	string s1("hello xiaotao");
//	cout << s1.find('x') << endl;
//	//����λ�ã���Ĭ�ϴӵ�һ��λ�ÿ�ʼ��������
//
//	cout << s1.find('o', 5);
//	//�ӵ�5��λ���������ַ�'o'�ҵ��󷵻ظ��ַ���λ��
//}
//int main()
//{
//	string  s1("hello xiaotao");
//	string s2, s3;
//	s2 = s1.substr(6);
//	//����λ�ã���Ĭ�ϴӸ�λ������һֱ��ȡ�ַ�,ֱ����ȡ���
//	cout << s2 << endl;
//	s3 = s1.substr(6, 7);
//	//�ӵ�6��λ�ý�ȡ7���ַ�
//	cout << s3 << endl;
//
//}
////int main()
//{
//	std::string str("Please, replace the vowels in this sentence by asterisks.");
//	std::size_t found = str.find_first_of("abc");
//	while (found != string::npos)
//	{
//		str[found] = '*';
//		found = str.find_first_of("abc", found + 1);
//	}
//	cout << str << endl;
//}

int main()
{
	//������ת�����ַ�����
	string stri = to_string(1234);
	//��������ת�����ַ�����
	string strd = to_string(6.11);
//
//	cout << stri <<"-" << strd << endl;
//	char str1[] = "abcd";
//	char str2[2];
//	str2[0] = 98;
//	
//	cout << str2[0] << endl;
//
//	char str3[] = "С��";
//	cout << sizeof(str3) << endl;
//	cout << str3 << endl;
//	str3[1]++;
//	cout << sizeof(str3) << endl;
//	cout << str3 << endl;
//	cout << str3[2] << endl;
//}
int main()
{
	string s1("hello xiaotao");
	cout << s1.rfind(' ') << endl;
}