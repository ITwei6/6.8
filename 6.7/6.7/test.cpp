#include <iostream>
using namespace std;
#include <string>
//
//int main()
//{
//	string url = "ftp://www.baidu.com/?tn=65081411_1_oem_dg";
//
//	//协议  域名  资源名
//
//	size_t pos1 = url.find("://");
//	string protocol;
//	if (pos1 != string::npos)
//	{
//		protocol = url.substr(0, pos1);
//		//从位置0这个地方截取pos1长度的字符串赋给protocol
//	}
//	cout << protocol << endl;
//	size_t pos2 = url.find('/', pos1 + 3);
//	string domain;//域名
//	string uri;//资源名
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
//	//不给位置，则默认从第一个位置开始往后面找
//
//	cout << s1.find('o', 5);
//	//从第5个位置往后找字符'o'找到后返回该字符的位置
//}
//int main()
//{
//	string  s1("hello xiaotao");
//	string s2, s3;
//	s2 = s1.substr(6);
//	//不给位置，则默认从该位置往后一直截取字符,直到截取完毕
//	cout << s2 << endl;
//	s3 = s1.substr(6, 7);
//	//从第6个位置截取7个字符
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
	//将整形转化成字符类型
	string stri = to_string(1234);
	//将浮点型转化成字符类型
	string strd = to_string(6.11);
//
//	cout << stri <<"-" << strd << endl;
//	char str1[] = "abcd";
//	char str2[2];
//	str2[0] = 98;
//	
//	cout << str2[0] << endl;
//
//	char str3[] = "小陶";
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