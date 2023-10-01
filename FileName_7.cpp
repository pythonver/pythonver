#include <iostream>//包含cin和cout的头文件
using namespace std;//名称空间
int main ()//主函数
{
	int number;//用户输入的数字
	int result =0;//回文数结果
	int new_number = 0;//储存余数的变量
	
	cin >> number;
	int number_2 = number;//防止计算改变了number的值
	if (number < 0)
	{
		cout << "N0";//小于0直接判错
	}
	else//条件合适开始反转
	{
		do
		{
			new_number = number % 10;
			result = result * 10 + new_number;//通过取余次数递增余数
			number /= 10;
		} while (number != 0);//在number除到0时终止
		//cout << result;
	};
	//判断结果
	if (result == number_2)
		cout << "This is a palindrome number\n" << "这是一个回文数"<< endl;
	else
		cout << "This isn't a palindrome number\n" << "这不是回文数"<<endl;
return 0;
};
