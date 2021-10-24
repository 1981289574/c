#include<iostream>
#include<string>
using namespace std;
int  main()
{
	int i;
	int j;
	string str="00000";
	for(i=0;i<32;i++)
	{
		 cout << str << endl;
        str[4] += 1;
        for (j = 4; j >= 0; --j)   //模拟二进制加法
        {
            if (str[j] == '2')
            {
                str[j - 1] += 1;
                str[j] = '0';
            }
        }
    }
    return 0;
}
