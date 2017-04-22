////找出一串数值中最大的数
//#include<stdio.h>
//int main()
//{
//	float num = 1;//while语句需要判定num的值，num初值不可为0，否则循环不执行，故赋值1
//	float max;
//
//	printf("Enter a number:\n");
//	scanf_s("%f", &max);//首先获取一个值赋值给max，使循环能正常进行比较
//	while (num != 0)//输入0终止循环
//	{
//		printf("Enter a number:\n");
//		scanf_s("%f", &num);
//		max = num >= max ? num : max;//将较大值赋值给max
//	}
//
//	printf("The largest number entered was %f", max);
//	//防止执行printf语句后直接关闭界面
//	getchar();
//	getchar();
//	return 0;
//}




////计算两个正整数的最大公约数
//#include<stdio.h>
//int main()
//{
//	int m, n, t;
//
//	printf("Calculate greatest common divisor of two integers\n");
//	printf("Enter two integers:");
//	scanf_s("%d,%d", &m, &n);
//
//	while (n != 0)
//	{
//		t = n;//储存n的值
//		n = m%n;
//		m = t;//读取储存的n的值
//	}
//
//	printf("GCD<greatest common divisor>: %d", m);
//
//	getchar();
//	getchar();
//	return 0;
//}



////sum=1/1! + 1/2! +1/3! +……1/n!=?
//#include<stdio.h>
//int main()
//{
//	int n, i;
//	int an = 1;
//	float sum = 0;
//
//	printf("sum=1/1! + 1/2! +1/3! +……1/n!=?\nEnter the value of n:");
//	scanf_s("%d", &n);
//
//	for (i = 1; i <= n; i++)
//	{
//		an = an * i;//计算阶乘的值
//		sum = sum + 1.0 / an;//要使用“1.0”，使用“1”输出的只含整数部分
//	}
//
//	printf("sum=1/1! + 1/2! +1/3! +……1/n!=%.2f", sum);
//
//	getchar();
//	getchar();
//	return 0;
//}



////水仙花数：153=1^3+5^3+3^3
//#include<stdio.h>
//int main()
//{
//	int i, a, b, c;
//	printf("Parcissus numbers are ");//该句只需打印一次，故在循环外打印
//
//	for (i = 100; i <= 999; i++)//100~999的三位数
//	{
//		a = i % 10;//个位
//		b = (i / 10) % 10;//十位
//		c = i / 100;//百位
//
//		if (a*a*a + b*b*b + c*c*c == i)
//			printf("%d ", i);//单句，可不加花括号，数字间以空格隔开
//	}
//	getchar();
//	return 0;
//}



//读取方式1
////输入一行字符，分别统计出其中英文字母、空格、数字和其他字符的个数
//#include<stdio.h>
//int main()
//{
//	int letter = 0;
//	int space = 0;
//	int digit = 0;
//	int other = 0;
//	char c;
//	printf("输入一段字符：\n");
//
//	//执行循环，获取单个字符，按回车结束循环
//	while ((c = getchar()) != '\n')//c=getchar要加括号！
//	{
//		if (c >= 'a'&&c <= 'z' || c >= 'A'&&c <= 'Z')//ASCII
//			letter++;
//		else if (c == ' ')
//			space++;
//		else if (c >= '0' && c <= '9')//数字要加单引号！表示为字符'0'~'9'
//			digit++;
//		else
//			other++;
//	}
//
//	printf("这行字符共有字母%d个，空格%d个，数字%d个，其他字符%d个\n", letter, space, digit, other);
//
//	system("pause");
//	//getchar();
//	//getchar();
//	return 0;
//}

//I am a student.My phone number is 18259871973.

//读取方式2
////输入一行字符，分别统计出其中英文字母、空格、数字和其他字符的个数
//#include<stdio.h>
//int main()
//{
//	int letter = 0;
//	int space = 0;
//	int digit = 0;
//	int other = 0;
//	int i = 0;
//	char c;
//	char s[100];
//	printf("输入一段字符：\n");
//	gets(s);
//
//	c = s[i];
//	while (c != '\0')//c=getchar要加括号！
//	{
//		if (c >= 'a'&&c <= 'z' || c >= 'A'&&c <= 'Z')//ASCII
//			letter++;
//		else if (c == ' ')
//			space++;
//		else if (c >= '0' && c <= '9')//数字要加单引号！表示为字符'0'~'9'
//			digit++;
//		else
//			other++;
//		i++;
//		c = s[i];
//	}
//
//	printf("这行字符共有字母%d个，空格%d个，数字%d个，其他字符%d个\n", letter, space, digit, other);
//
//	system("pause");
//
//	return 0;
//}


////甲队a,b,c 乙队x,y,z;  a说他不和x比，c说他不和x,z比;求比赛名单
//#include<stdio.h>
//int main()
//{
//	char a, b, c;
//	for (a = 'x'; a <= 'z'; a++)
//	{
//		if (a != 'x')
//			for (c = 'x'; c <= 'z'; c++)
//			{
//				if (c != 'x'&&c != 'z'&&c != a)
//					for (b = 'x'; b <= 'z'; b++)
//					{
//						if (b != a&&b != c)
//							printf("a-->%c\nb-->%c\nc-->%c", a, b, c);
//					}
//			}
//	}
//
//	getchar();
//	return 0;
//}


////猴子摘桃若干个桃，每天吃一半加一个，第n天早上只剩一个桃，求摘了几个桃
//#include<stdio.h>
//int main()
//{
//	int i, n;
//	int sum = 1;//第n天早上剩一个桃
//
//	printf("猴子摘桃若干个桃，每天吃一半加一个，第n天早上只剩一个，求摘了几个桃\n\
//输入n的值：");
//	scanf_s("%d", &n);
//
//	for (i = 1; i < n; i++)//第n天没吃桃故 'i < n'不能取等
//	{
//		sum = (sum + 1) * 2;//计算前一天剩几个桃子
//	}
//
//	printf("共摘了%d个桃", sum);
//
//	getchar();
//	getchar();
//	return 0;
//}


////Sn=a+aa+aaa+……aa……a(n个a)=？
//#include<stdio.h>
//int main()
//{
//	int n, a, i;
//	int an = 0;
//	int Sn = 0;
//
//	printf("Sn=a+aa+aaa+……+aa……a(n个a)=？\n输入 n,a:\n");
//	scanf_s("%d,%d", &n, &a);
//
//	for (i = 1; i <= n; i++)
//	{
//		an = an + a;
//		Sn = Sn + an;
//		a = a * 10;
//	}
//
//	printf("Sn=a+aa+aaa+……+aa……a(n个a)=%d", Sn);
//
//	getchar();
//	getchar();
//	return 0;
//}




///*
//	从键盘上输入六个整数，存放到整型数组arr中，
//	再从键盘上输入一个整数，存放到整型变量n中。
//	要求：	编程查找整数n是否在数组arr中出现过。
//	若出现，则输出第一次出现的位置，否则，输出no found。
//*/
//
//#include<stdio.h>
//#define SIZE 6
//int main()
//{
//	int arr[SIZE];
//	int n,i;
//
//	printf("输入数组中的6个整数（用空格隔开）：\n");
//	for(i=0;i<SIZE;i++)
//		scanf_s("%d", &arr[i]);
//		
//	printf("输入1个整数：\n");
//	scanf_s("%d", &n);
//
//	for (i = 0; i < SIZE; i++)
//		{
//			if (n == arr[i])
//			{
//				printf("这个数是数组中的第%d个整数", i+1);
//				break;//得到位置，即可退出循环
//			}
//
//			if (i == 5)//无元素符合上个if的条件，即数组中不存在这个数
//				printf("数组中没有这个数");
//		}
//
//	getchar();
//	getchar();
//	return 0;
//}




///*
//	编程实现将原数组中的元素逆序存储：
//	例如原数组a[]={5,2,7,4}   ，则逆序后的数组a[]={4,7,2,5}.
//	要求：
//	（1）分别输出逆序前、后数组各元素的数值；
//	（2）逆序实现不要借助其他数组；
//*/
//#include<stdio.h>
//int main()
//#define SIZE 4
//{
//	int i;
//	int a[SIZE] = { 5,2,7,4 };//改动此处和 SIZE 的值，可实现任意整数元素逆序
//
//	printf("逆序前数组：\n");
//	for(i=0;i<SIZE;i++)
//		printf("%d ", a[i]);//单语句，可不加花括号
//
//	for (i = 0; i < SIZE / 2; i++)
//	{
//		//~-i等价于（i-1）  -~i等价于（i+1)
//
//		//以下两部分的三行代码等价，作用都为数值交换
//		//即：t=a;a=b;b=t;  <=>   a=a+b;b=a-b;a=a-b;
//		//第二种方法不需要中间值t的引入
//
//		//t = a[i];
//		//a[i] = a[~- SIZE - i];
//		//a[~- SIZE - i] = t;
//
//		a[i] = a[i] + a[~- SIZE - i];
//		a[~- SIZE - i] = a[i] - a[~- SIZE - i];
//		a[i] = a[i] - a[~- SIZE - i];
//
//	}
//
//	printf("\n逆序后数组：\n");
//	for (i = 0; i<SIZE; i++)
//		printf("%d ", a[i]);
//
//	getchar();
//	getchar();
//	return 0;
//}


////编写一个程序，将两个字符串连接起来。
////注意：不要用strcat函数。
//#include<stdio.h>
//int main()
//{
//	char a[20];
//	char b[20];
//	char c;
//	int n,t;
//	int i = 0, j = 0;
//
//	printf("Input the value of array a:");
//	while (((c = getchar()) != '\n'))
//	{
//		a[i] = c;	
//		i++;
//	}
//
//	printf("Input the value of array b:");
//	while (((c = getchar()) != '\n'))
//	{
//		b[j] = c;	
//		j++;
//	}
//
//	t = i + j;//新字符串元素个数
//
//	for (n = 0; n < j; n++, i++)
//		a[i] = b[n];
//
//	for(i=0;i<t;i++)//输出新长度的数组
//	printf("%c", a[i]);
//
//	getchar();
//	getchar();
//	return 0;
//}


////输出数组中的元素（重复的元素只输出一次）
//#include<stdio.h>
//#define NUM 20
//int main()
//{
//	int i,j;
//	int a[NUM];
//
//	printf("输入%d个整数：", NUM);
//	for(i=0;i<NUM;i++)
//	scanf_s("%d", &a[i]);
//
//	printf("其中不重复的元素为：");
//	printf("%d ", a[0]);//第一个元素直接输出
//	for (i = 1; i < NUM; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			if (a[j] == a[i])//若a[i]的值在之前的元素中出现，则跳出循环
//				break;
//			if(i==j+1)//遍历a[i]前的所有元素，不存在与其相等的元素
//				printf("%d ", a[i]);			
//		}
//	}
//	getchar();
//	getchar();
//	return 0;
//}

////将输入的十进制正整数转换成任意进制（2~16）的数
////（将结果存储在一维数组中，最后显示结果） 
//
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i, num, system, rem, tmp, digit;
//
//	printf("请输入一个十进制整数<-1结束输入>");
//	scanf_s("%d", &num);
//	while (num != -1)
//	{
//		printf("请输入要转换成的进制：");
//		scanf_s("%d", &system);
//
//		//计算这个数转换成所需进制后有几位数
//		tmp = num;
//		digit = 0;	//每次循环开始时对digit重新赋值0；若在循环外定义并赋值，
//					//则在循环内digit的值将随循环次数递增，最终得到的数据前会有很多个0
//		while (tmp != 0)
//		{
//			tmp /= system;
//			digit++;
//		}
//
//		//用变量定义数组元素的方法，并不明白具体是什么意思
//		int *a = (int *)calloc(digit, sizeof(int));
//
//		//存储方案1.计算出的结果为倒序，故此处直接将计算出的结果倒序记入数组
//		for (i = digit - 1; num != 0; i--)
//		{
//			rem = num % system;
//			num /= system;
//			a[i] = rem;
//		}
//
//		/*
//		//存储方案2.此处为顺次存储，元素需倒序
//		for (i = 0; num != 0; i++)
//		{
//		rem = num % system;
//		num /= system;
//		a[i] = rem;
//		}
//
//		//将数组元素倒序
//		for (i = 0; i < digit / 2; i++)
//		{
//		a[i] = a[i] + a[~- digit - i];
//		a[~- digit - i] = a[i] - a[~- digit - i];
//		a[i] = a[i] - a[~- digit - i];
//		}
//		*/
//
//		printf("转换结果为：\n");
//		for (i = 0; i < digit; i++)
//		{
//			printf("%d", a[i]);
//		}
//		printf("——————————————————————————————————————\n");
//		printf("请输入一个十进制整数<-1结束输入>");
//		scanf_s("%d", &num);
//	}
//	printf("——————————————————————————————————————\n");
//
//	getchar();
//	getchar();
//	return 0;
//}

///*
//编写程序，读入一个以符号"!"结束的长度小于20字节的英文句子，
//检查其是否为回文（即正读和反读都是一样的）。
//例如： 读入句子：MADA ADAM!它是回文，所以输出：YES
//读入句子：ABCDBA)!它不是回文，所以输出：NO
//*/
//
////实际上并未对输入内容进行限制，数字和字符都能满足程序规则，
////若有对输入内容严格定义只能为字母，可加入对输入内容类型的判定
//#include<stdio.h>
//#define SIZE 20
//int main()
//{
//	char a[SIZE];
//	char c;
//	int i;
//	int tmp = 0, num = 0;
//
//	printf("请输入一个以符号\"!\"结束的长度小于20字节的字母组合:\n");
//	//获取字母串
//	//for (i = 0; i < SIZE, (c = getchar()) != '!'; i++)
//	//{
//	//	a[i] = c;//储存字母串
//	//	num++;//记录字母个数
//	//}
//	//gets(a);
//	scanf_s("%s", a);
//	for (i = 0; i < num / 2; i++)
//	{
//		if (a[i] != a[~- num - i])//不符合规则，直接输出NO，结束循环
//		{
//			printf("NO");
//			break;
//		}
//		if (a[i] == a[~- num - i])//记录符合回文规则元素个数
//			tmp++;
//	}
//
//	if (tmp == num / 2)//所有元素都符合回文规则
//		printf("YES");
//
//	getchar();
//	getchar();
//	return 0;
//}

////以下为加入对输入类型进行判断部分后的程序代码：
//#include<stdio.h>
//#define SIZE 20
//int main()
//{
//	char a[SIZE];
//	char c;
//	int i;
//	int tmp = 0, num = 0;
//
//	printf("请输入一个以符号\"!\"结束的长度小于20字节的字母组合:\n");
//	//获取字母串
//	for (i = 0; i < SIZE, (c = getchar()) != '!'; i++)
//	{
//		a[i] = c;//储存字母串
//		num++;//记录字母个数
//	}
//
//	if (num >= 20)
//	{
//		printf("输入字符串过长\n"); 
//		system("pause");
//		exit(0);
//	}
//	for(i = 0; i < num; i++)
//	{
//		if (((a[i] >= 'a'&&a[i] <= 'z') || (a[i] >= 'A'&&a[i] <= 'Z')) != 1)
//		{
//			printf("输入内容不是字母或不全是字母\n");
//			break;
//		}
//		tmp++;
//	}
//	if(tmp==num)//若输入的所有元素都为字母，则进行是否为回文的判断
//	{
//		tmp = 0;//之前使用过变量tmp，后面还要用到这个变量，故此处将其重新赋值为0
//		for (i = 0; i < num / 2; i++)
//		{
//			if (a[i] != a[~- num - i])//不符合规则，直接输出NO，结束循环
//			{
//				printf("NO\n");
//				break;
//			}
//			if (a[i] == a[~- num - i])//记录符合回文规则元素个数
//				tmp++;
//		}	
//		if (tmp == num / 2)//所有元素都符合回文规则
//			printf("YES\n");
//	}
//	system("pause");
//	return 0;
//}



////假设共有3名学生，每名学生都有5门成绩（语文、数学、英语、化学、物理）。
////要求：
////（1）从键盘上输入每位学生的5门课程成绩；
////（2）输出每位同学的总成绩和平均分；
//
//#include<stdio.h>
//int main()
//{
//	float a[3][5];
//	int i,n;
//	float sum;
//	for (n = 0; n < 3; n++)
//	{
//		printf("请输入第%d位学生的课程成绩<语文、数学、英语、物理、化学>：\n", n + 1);
//		for (i = 0,sum=0; i < 5; i++)
//		{
//			scanf_s("%f", &a[n][i]);
//			sum += a[n][i];
//		}
//		printf("总分：%.2f\t平均分:%.2f\n", sum, sum / 5);
//	}
//
//	getchar();
//	getchar();
//	return 0;
//}

////6行杨辉三角
//#include<stdio.h>
//int main()
//{
//	int i, j;
//	int a[6][6];
//
//	for(i=0;i<6;i++)//数列首尾都是1
//	{
//		a[i][0] = a[i][i]=1;
//	}
//
//	for (i = 2; i < 6; i++)
//		for (j = 1; j < i; j++)
//			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
//		
//	for (i = 0; i < 6; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d\t", a[i][j]);
//		}
//
//		printf("\n");
//	}
//
//	getchar();
//	getchar();
//	return 0;
//}


///*
//	编写一个用来判断质数（素数）的函数，
//	在main函数中调用该函数对输入的数值进行判断，
//	并输出判断结果（当输入数值<=1时，停止输入和判断）。
//*/
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n=2;
//	while (1)
//	{
//		printf("Enter a number<exit with n<=1>:");
//		scanf_s("%d", &n);
//		if (n < 2)//n<=1，跳出循环
//			break;
//		if (prime(n))//n为素数时的返回值为1
//			printf("%d is a prime number.\n", n);
//		else
//			printf("%d is not a prime number.\n", n);
//	}
//		getchar();
//		getchar();
//		return 0;
//}
////判断x是否为素数，是返回1，不是返回0
//int prime(int x)
//{
//	int i, t = 1;
//	for (i = 2; i < sqrt(x); i++)
//		if (x % i == 0)
//			t = 0;
//	return(t);
//}




////使用上一题中所编写的判断质数的函数验证哥德巴赫的1 + 1猜想
////---- - 任何一个 >= 6的偶数都可以表示成两个素数之和。
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n=2,a,b;
//	while (1)
//	{
//		printf("Enter a even number<exit with n>=6>:");
//		scanf_s("%d", &n);
//
//		if ((n < 6) || ((n % 2) != 0))//判定是否符合条件，不符合直接跳出while循环
//		{
//			printf("The number is not a even number<exit with n>=6>");
//			break;
//		}
//
//		for (a = 2; a < n; a++)//1<a<n,1<b<n
//			for (b = 2; b < a; b++)//此处b<a，而不是a<n,否则将会输出2个顺序不同的相同等式
//				if (n == a + b)
//					if (prime(a) && prime(b))//判断a,b是否为素数
//						printf("%d=%d+%d\n", n, a, b);
//	}
//		getchar();
//		getchar();
//		return 0;
//}
////判断x是否为素数，是返回1，不是返回0
//int prime(int x)
//{
//	int i, t = 1;
//	for (i = 2; i <= sqrt(x); i++)
//		if (x % i == 0)
//			t = 0;
//	return(t);
//}

////编写一个求阶乘的函数，接着调用该函数实现组合的求解。
//#include<stdio.h>
//int main()
//{
//	int m, n, c;
//	printf("Enter the value of n and m:");
//	scanf_s("%d %d", &n, &m);
//
//	c = fac(n) / (fac(n - m)*fac(m));//Combinatorial Number
//	printf("result is %d\n", c);
//	system("pause");
//}
//
////calculate n!(a number's factorial )
//int fac(int x)
//{
//	int i, an = 1;
//	for (i = 2; i <= x; i++)
//		an *= i;
//	return(an);
//}

///*
//编写一个求矩阵中最大元素以及最小元素的函数selectmaxandmin()，
//在main函数中调用该函数。
//【最大值和最小值的输出操作，可以放在selectmaxandmin()函数中】
//*/
//#include<stdio.h>
//int main()
//{
//	void selectmaxandmin(int a[4][4]);
//	int i, j;
//	int a[4][4] = { {1,5,3,6},{2,4,5,7},{3,9,8,0},{4,1,9,5} };
//	printf("矩阵：\n");
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//			printf("%d ", a[i][j]);
//		printf("\n");
//	}
//	selectmaxandmin(a);
//	system("pause");
//}
//
//void selectmaxandmin(int a[4][4])
//{
//	int i, j,max,min;
//	max = min = a[0][0];
//	for (i = 0; i < 4; i++)
//		for (j = 0; j < 4; j++)
//		{
//			//max(a,b)=1/2(a+b+|a-b|)
//			//min(a,b)=1/2(a+b-|a-b|)
//			max = (max + a[i][j] + abs(max - a[i][j]))/2;
//			min = (min + a[i][j] - abs(min - a[i][j]))/2;
//		}
//	printf("max=%d\tmin=%d\n", max, min);
//}


////a->e,b->f,c->g……w->a,x->b,y->c,z->d;
////a-v,+4
////w-z,-22
////编写一个编码原文的函数，对于给定的内容，按照规律对其进行编码
//#include<stdio.h>
//int main()
//{		
//	encode();
//	system("pause");
//}
//
//void encode(void)
//{
//	printf("输入待编码内容：\n");	
//	char a[40];
//	gets(a);
//	int i=0;
//	while (a[i] != '\0')
//	{
//		if (((a[i] >= 'A'&&a[i] <= 'V') || (a[i] >= 'a'&&a[i] <= 'v')))
//			a[i] += 4;
//		if (((a[i] >= 'W'&&a[i] <= 'Z') || (a[i] >= 'w'&&a[i] <= 'z')))
//			a[i] -= 22;
//		i++;
//	}
//	puts(a);
//}



////a->e,b->f,c->g……w->a,x->b,y->c,z->d;
////a-v,+4
////w-z,-22
////编写一个编码原文的函数，对于给定的内容，按照规律对其进行编码
//#include<stdio.h>
//#define N 40
//char a[N];
//
//int main()
//{
//	//char c;
//	printf("输入待编码内容：\n");
//	gets(a);
//	encode(a);
//	system("pause");
//}
//
//int encode(char a[])
//{
//	int i = 0;
//	while (a[i] != '\0')
//	{
//		if (((a[i] >= 'A'&&a <= 'V') || (a[i] >= 'a'&&a <= 'v')))
//			a[i] += 4;
//		if (((a[i] >= 'W'&&a <= 'Z') || (a[i] >= 'w'&&a <= 'z')))
//			a[i] -= 22;
//		i++;
//	}
//		puts(a);
//}



////定义并调用一个将一个三行四列的矩阵转置的函数
//#include<stdio.h>
//#define row 3
//#define col 4
//int main()
//{
//	void transpose(int a[col][col]);
//	int a[col][col];
//	int i, j;
//
//	printf("输入原始矩阵各元素的值：\n");
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("a[%d][%d]", i, j);
//			scanf_s("%d", &a[i][j]);
//		}
//	}
//	transpose(a);
//	printf("转置矩阵：\n");
//	for (i = 0; i < col; i++)
//	{
//		for (j = 0; j < row; j++)
//		{
//			printf("%d\t", a[i][j]);
//		}
//		printf("\n");
//	}
//	system("pause");
//}
////将一个三行四列的矩阵转置
//void transpose(int a[col][col])
//{
//	int i, j;
//
//	printf("原始矩阵：\n");
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d\t", a[i][j]);
//		}
//		printf("\n");
//	}
//
//	//元素数值交换
//	for (i = 0; i < col; i++)
//		for (j = i+1; j < col; j++)
//		{
//			//a = a + b; b = a - b; a = a - b;
//			a[i][j] = a[i][j] + a[j][i];
//			a[j][i] = a[i][j] - a[j][i];
//			a[i][j] = a[i][j] - a[j][i];
//		}
//
//
//}



////运用递归倒序输出 输入的字符串
//#include<stdio.h>
//void main()
//{
//	void reserve(int n);
//
//	printf("Enter a string:\n");
//	reserve(0);
//
//	system("pause");
//}
//
////将输入的字符串倒序输出，整数‘n’的值不影响倒序
//void reserve(int n)
//{
//	char c;
//		
//	if ((c = getchar()) != '\n')
//		reserve(n - 1);
//	
//	if (c == '\n')
//		printf("After be reversed:");
//
//	putchar(c);
//}


///*
// 输入3个整数，按由小到大的顺序输出
// 输入3个字符串，按由小到大的顺序输出
// 要求：使用指针方法实现
//*/
//#include<stdio.h>
//#include<string.h>
//void main()
//{
//	int n1, n2, n3;
//	char s1[50], s2[50], s3[50];
////	char s1[50]="I study very hard.", s2[50]="C language is very interesting.", s3[50]="He is professfor.";
//	void swap_int(int *a, int *b);
//	void swap_string(char*a, char*b);
//	printf("\nInput three char s1,s2,s3:\n");
//	gets(s1);
//	gets(s2);
//	gets(s3);
//	if (strcmp(s1, s2) == 1)swap_string(s1, s2);
//	if (strcmp(s1, s3) == 1)swap_string(s1, s3);
//	if (strcmp(s2, s3) == 1)swap_string(s2, s3);
//
//
//	printf("\nNow the order is:\n");
//	puts(s1);
//	puts(s2);
//	puts(s3);
//
//	printf("\nInput three integer n1,n2,n3:");
//	scanf_s("%d %d %d", &n1, &n2, &n3);
//	if (n1 > n2)swap_int(&n1, &n2);
//	if (n1 > n3) swap_int(&n1, &n3);	
//	if (n2 > n3)swap_int(&n2, &n3);
//	printf("\nNow the order is: %d %d %d\n", n1, n2, n3);
//	
//
//	system("pause");
//}
//void swap_int(int *a,int *b)
//{
//	*a = *a + *b; 
//	*b = *a - *b; 
//	*a = *a - *b;
//}
//void swap_string(char*a, char*b)
//{
//	char c[50];
//	strcpy_s(c, strlen(a) + 1, a);
//	strcpy_s(a, strlen(b) + 1, b);
//	strcpy_s(b, strlen(c) + 1, c);	
//}


///*
// 有13个人围成一圈，顺序排号。
// 从第1个人开始报数(从1到3报数)，
// 凡报到3的人退出圈子，问最后留下的是原来第几号的那位。
// 要求：使用指针方法实现
//*/
//#include<stdio.h>
//#define N 13
//void main()
//{
//	int k = 0, m = 0, i, a[50];
//
//	for (i = 0; i < N; i++)
//		*(a+i) = -~i;//numbering：a[0]=1,a[1]=2……
//
//	i = 0;
//	while (m < ~- N)
//	{
//		if (*(a + i) != 0)k++;
//
//		if (k == 3)
//		{
//			k = 0;
//			*(a + i) = 0;
//			m++;
//		}
//
//		i++;
//		if (i == N)i = 0;
//	}
//
//	i = 0;
//	while (*(a + i) == 0)i++;
//	printf("The last one is NO.%d", *(a + i));
//
//	system("pause");
//}





////编写一个函数实现将字符串str1和字符串str2合并，
////合并后的字符串中的字符按其ASCII码值从小到大进行排序，
////相同的字符在新字符串中只出现一次
//
//#include<stdio.h>
//#include<string.h>
//void main()
//{
//	int i,j,k;
//	//char s1[200] = "sjghsg35  sdf28DFHDHDFXH97   5r89erw89j" ; 
//	//char s2[200] = "sdgjhstihsdfg iHDDGHDFXHnjogr otwjhg";
//	char s1[50], s2[50];
//	char t;
//
//	printf("Input s1:");
//	gets(s1);
//	printf("\nInput s2:");
//	gets(s2);
//
//	//合并字符数组
//	strcat_s(s1, strlen(s1)+strlen(s2) + 1, s2);
//
//	//删除重复元素
//	i = 0;
//	while (s1[i] != '\0')
//	{
//		j = i+1;
//		while (s1[j] != '\0')
//		{
//			while (s1[j] == s1[i])//当相等时,元素被覆盖,后面的元素都向前进一位
//			{	
//				for (k = j; s1[k] != '\0'; k++)
//				{
//					s1[k] = s1[k + 1];
//				}
//			}	
//		j++;
//		}
//	i++;
//	}
//
//	//排序
//	i = 0;
//	while(s1[i]!='\0')
//	{	
//		j = i + 1;
//		while(s1[j]!='\0')
//		{
//			if (s1[j] < s1[i])
//			{
//				t = s1[i];
//				s1[i] = s1[j];
//				s1[j] = t;
//			}
//			j++;
//		}
//		i++;
//	}
//			
//	printf("\nThe new string:");
//	puts(s1);
//	system("pause");
//}

///*
//	已知一个长度为10的一维数组arr，
//	编写函数，求出第m个数到第n个数的和。
//	要求：使用指针方法实现
//*/
//#include<stdio.h>
//void main()
//{
//	int  i, sum = 0, m = 1, n = 4, arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	
//	printf("arr:");
//	for (i = 0; i < 10; i++)
//		printf("%d ",*(arr + i));
//
//	printf("\n求第m个数到第n个数的和");
//	printf("\n输入 m n: ");
//	scanf_s("%d %d", &m, &n);
//	for (; m < -~n; m++)
//		sum += *(arr + ~- m);
//
//	printf("第m个数到第n个数的和为：%d\n", sum);
//	system("pause");
//}


///*
// Arr是一个包含n个整数的一维数组。
// 现将数组中的每个元素向后移m个位置，
// 使最后m个数变成最前面的m个数。
// 写一函数实现以上功能，
// 在主函数中输入n个整数和输出调整后的的n个数。
// 要求：指针作为函数参数
//*/
//#include<stdio.h>
//#define n 10
////#define m 2
//void main()
//{
//	int i,m;
//	//int a[20] = { 0,1,2,3,4,5,6,7,8,9 };
//	int Arr[20];
//	int *p = Arr;
//	void special_move(int *a);
//
//	printf("输入%d个整数到一维数组Arr:\n", n);
//	for (i = 0; i < n; i++)
//	{
//		printf("Arr[%d]=", i);
//		scanf_s("%d", &Arr[i]);
//	}
//
//	printf("现将数组中的每个元素向后移m个位置，\
//使最后m个数变成最前面的m个数。\n输入m:");
//	scanf_s("%d", &m);
//
//	special_move(p,m);
//
//	printf("移动后的数组Arr：\n");
//	for (i = 0; i < n; i++)
//		printf("%d ", *(Arr + i));
//
//	system("pause");
//}
//
//void special_move(int *a,int m)
//{
//	int i,k;
//	i= n;
//
//	//数组元素集体向后移动n个位置
//	for (k = 0; k < n; k++)
//	{
//		a[i - 1+m] = a[i-1];
//			i--;
//	}
//	
//	//对前面m个元素重新赋值
//	for (k = 1; k <= m; k++)
//	{
//		 a[k - 1]=a[n-1 + k];
//	}
//}




///*
//编写一个函数insert(s1, s2, ch)，
//实现在字符串s1中的指定字符ch位置处插入字符串s2。
//*/
//#include<stdio.h>
//#include<string.h>
//void main()
//{
//	char s1[50] = "I like cake", s2[8]="PSW", ch='k';
//	void insert(char *s1, char *s2, char ch);
//	printf("string1: %s\n\nstring2: %s\
//\n\ninsert position char: %c\n\n", s1, s2,ch);
//	insert(s1,s2,ch);
//	printf("After inserted string1:%s\n",s1);
//	system("pause");
//
//}
//
//void insert(char *s1,char *s2,char ch)
//{
//	int i,j=0,k=0;
//
//	for(i=0;s1[i]!='\0';i++)
//	{
//		if(s1[i]==ch)
//		{
//			j = i;
//			while (s1[j] != '\0')
//				j++;//循环后得到s1[j]为第一个为\0的字符，即字符串末尾后一位
//
//			for (k = 0; k < strlen(s1)-i-1; k++)//控制循环次数，即后移元素个数
//			{
//				s1[j - 1 + strlen(s2)] = s1[j - 1];
//				j--;//从后往前倒序移位
//			}
//
//			//写入字符串s2
//			for (k = 0; k < strlen(s2); k++)
//			{
//				s1[i+1] = s2[k];
//				i++;
//			}						
//		}		
//	}	
//}


////声明一个描述日期（年、月、日）的结构体类型。
////编写一个函数用于计算某个日期是相应年份的第几天。
//#include<stdio.h>
//struct date
//{
//	int year, month, day;
//};
//void calculate_days(struct date date);
//
//void main()
//{
//	struct date date;
//	printf("Enter:year month day\n");
//	scanf_s("%d %d %d", &date.year, &date.month, &date.day);
//	calculate_days(date);
//	system("pause");
//}
//
//void calculate_days(struct date date)
//{
//	int month_days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	int i,sum;
//	sum = date.day;
//	for (i = 0; i < date.month - 1; i++)
//		sum += month_days[i];
//
//	if ((date.year % 4 == 0 && date.year % 100 != 0 || date.year % 400 == 0) && date.month >= 3)
//		sum += 1;
//	printf("%d.%d is %dth day in%d.\n", date.month,date.day,sum,date.year);
//}




///*
//	定义两个结构体STUDENT和BIRTHDAY。
//	其中结构体STUDENT包含成员有：姓名(char name[20]),
//	学号(int number),出生日期(BIRTHDAY birth);
//	结构体BIRTHDAY包含的成员有：年份(int year),
//	月份(int month)和日期(int day).
//	定义两个函数分别用于输入和输出N个STUDENT结构体变量的信息
//*/
//#include<stdio.h>
//#define N 3
//int i;
//struct BIRTHDAY
//{
//	int year, month, day;
//};
//struct STUDENT
//{
//	char name[20];
//	int number;
//	struct BIRTHDAY birth;
//};
//
//void Input(struct STUDENT student[N]);
//void Output(struct STUDENT student[N]);
//void main()
//{	
//	struct STUDENT student[N];
//	Input(student);
//	Output(student);
//	system("pause");
//}
//void Input(struct STUDENT student[N])
//{
//	for (i = 0; i < N; i++)
//	{
//		printf("Enter student%d's id:", -~i);
//		scanf("%d", &student[i].number); 
//		getchar();// 或 rewind(stdin);
//					
//		
//		printf("Enter student%d's name:", -~i);
//		gets(student[i].name);
//		printf("Enter student%d's birthday year month day:", -~i);
//		scanf("%d %d %d", &student[i].birth.year, &student[i].birth.month, &student[i].birth.day);
//		printf("\n");
//	}
//	printf("Input done!\n\n");
//}
//void Output(struct STUDENT student[N])
//{	
//	for (i = 0; i < N; i++)
//		printf("student%d:%s ID:%d birthday:%d %d %d\n\n", -~i, student[i].name, student[i].number, student[i].birth.year, student[i].birth.month, student[i].birth.day);
//
//	printf("Output done!\n");
//
//}



////编程模拟时钟更新
//#include<stdio.h>
//struct TIME
//{
//	int hour, minute, second;
//};
//void sleep(long wait);
//void main()
//{
//	struct TIME time;
//	printf("Enter the time: hour:minute:second\n");
//	scanf("%d:%d:%d", &time.hour, &time.minute, &time.second);
//	
//	while (1)	
//	{
//		//每个数字要占两位，否则会出现最后一位数组没被覆盖的情况，
//		//造成59秒->09秒->19秒->29秒的显示错误
//		printf("%2d:%2d:%2d\r", time.hour, time.minute, time.second);	
//			time.second++;
//		if(time.second==60)
//		{ 
//			time.second = 0;
//			time.minute++;
//			if (time.minute == 60)
//			{
//				time.minute = 0;
//				time.hour++;
//				if (time.hour == 24)
//					time.hour = 0;
//			}		
//		}		
//	sleep(1 * 1000);
//	/*若要使用循环，可使用以下方式
//	for (int i = 0; i < 100000; i++)
//			printf("\b");*/
//	}
//	system("pause");
//}
//void sleep(long wait)//windows.h库中包含这个函数Sleep();
//{
//	long goal;
//	goal = wait + clock();
//	while (goal > clock());
//}



////分别定义公制METRIC（成员包括：米、厘米）和英制BRITISH（成员包括：英尺、英寸）两个结构体。
////为每一个结构定义两个变量，计算每一个结构体的两个变量所表示的长度之和（单位：厘米）
//#include<stdio.h>
//struct METRIC
//{
//	float m, cm;//meter，centimeter
//};
//struct BRITISH
//{
//	float ft, in;//foot,inch
//};
//void main()
//{
//	int i;
//	float sum1 = 0, sum2 = 0;
//	struct METRIC M[2];
//	struct BRITISH B[2];
//	for(i=0;i<2;i++)
//	{
//		printf("Enter the length of m%d(meter，centimeter):", -~i);
//		scanf("%f %f", &M[i].m, &M[i].cm);	
//	}
//	for (i = 0; i < 2; i++)
//	{
//		printf("Enter the length of b%d(foot，inch):", -~i);
//		scanf("%f %f", &B[i].ft, &B[i].in);
//	}
//	for (i = 0; i < 2; i++)
//	{
//		sum1 += (M[i].m * 100 + M[i].cm);	
//		sum2 += (B[i].ft * 12 * 2.5400 + B[i].in*2.5400);
//	}
//	printf("Sum of m1 and m2 is:%.2fcentimeter\n", sum1);
//	printf("Sum of b1 and b2 is:%.2fcentimeter\n", sum2);
//	system("pause");
//}


////有N个学生，每个学生包括学号(num),姓名(name[20]),性别(sex),年龄(age),
////三门课的成绩(score[3]).要求从键盘输入这n个学生的数据，然后调用一个函数，
////用来计算每个学生的总分和平均分,然后打印所有数据。
//#include<stdio.h>
//struct DATA
//{
//	int age, num;
//	float score[3];
//	char name[20], sex,sum;
//};
//void Input(struct DATA a[],int N);
//void Calculate_Output(struct DATA a[], int N);
//
//void main()
//{	
//	int N;
//	printf("Enter the number of students：");
//	scanf("%d", &N);
//	struct DATA *student = (struct DATA*)calloc(N, sizeof(struct DATA));
//	Input(student,N);
//	Calculate_Output(student, N);
//	system("pause");
//}
//
//void Input(struct DATA a[], int N)
//{
//	int i=0;
//	for(i=0;i<N;i++)
//	{
//		printf("\nEnter student%d's ID:",-~i);
//		scanf("%d", &a[i].num);
//		getchar();
//		printf("Enter student%d's name:",-~i);
//		gets(a[i].name);
//		printf("Enter student%d's sex(W or M):",-~i);
//		a[i].sex = getchar();
//		printf("Enter student%d's age:",-~i);
//		scanf("%d", &a[i].age);
//		printf("Enter student%d's score(score1 score 2 score 3):",-~i);
//		scanf("%f %f %f", &a[i].score[0], &a[i].score[1], &a[i].score[2]);
//	}
//}
//
//void Calculate_Output(struct DATA a[], int N)
//{
//	int i;
//	float *sum = (float *)calloc(N, sizeof(float));
//	for (i = 0; i < N; i++)
//	{
//		sum[i] = a[i].score[0] + a[i].score[1] + a[i].score[2];
//		printf("\nstudent%d:%s ID:%d sex:%c age:%d \nscore:%.2f %.2f %.2f\n", -~i, a[i].name, a[i].num, a[i].sex, a[i].age, a[i].score[0], a[i].score[1], a[i].score[2]);
//		printf("sum:%.2f average: %.2f\n", sum[i], sum[i] / 3);
//	}
//}






////声明一个student结构体，成员有：姓名(char name[20]), 学号(int number)，
////总成绩(float totalscore)。
////在main函数中定义一个长度为n的结构体数组arr[]，
////调用函数sortinfo(struct student *arr, int n)对n位学生的信息进行排序。
////已知：函数sortinfo(……)是按照总成绩从高到低的顺序进行排序的。
////如果两位学生的总成绩相等，则按照学号从小到大排序。
//#include<stdio.h>
//#define N 4
//int i,j;
//struct student
//{
//	char name[20];
//	int number;
//	float totalscore;
//};
//void output(const struct student *arr, int n);
//void sortinfo(struct student *arr, int n);
//void main()
//{
//	
//	struct student arr[N+1] = { {"张三",1076,400} ,{"李四",1061,400},{"王五",1040,405},"赵六",1058,395 };
//	printf("排序前：\n");
//	output(arr, N);
//
//	sortinfo(arr, N);
//
//	printf("排序后：\n");
//	output(arr, N);
//
//	system("pause");
//}
//void sortinfo(struct student *arr, int n)
//{
//	//arr[n+1]创建了arr[0]~arr[n]的结构体数组，arr[n]用于数据传递
//	//这个函数得到的实参为n，故循环检索时为arr[0]~arr[n-1]
//	for (i = 0; i<n; i++)
//		for (j = i + 1; j < n; j++)	
//			//比较分数，分数相等比较学号
//			if ((arr[i].totalscore < arr[j].totalscore)||((arr[i].totalscore == arr[j].totalscore)&& (arr[i].number > arr[j].number)))
//			{
//				//将arr[n]作为中间量进行数据交换
//				arr[n] = arr[i];
//				arr[i] = arr[j];
//				arr[j] = arr[n];
//			}		
//}
//void output(const struct student *arr, int n)
//{
//	for (i = 0; i<n; i++)
//		printf("姓名：%s 学号：%d 总分：%.2f\n", arr[i].name, arr[i].number, arr[i].totalscore);	
//}




////实验考试 3题
////1.
//#include<stdio.h>
//#include<stdlib.h>
//void main(void)
//{
//	int A, B, C, k = 0;
//	for (A = 1; A <= 5; A++)
//		for (B = 1; B <= 5; B++)
//			if (A != B)
//				for (C = 1; C <= 5; C++)
//					if (C != A&&C != B)
//						k++;
//
//	printf("共有%d种借法", k);
//	system("pause");
//}

////2.
//#include<stdio.h>
//#include<stdlib.h>
//void Findmax(int num[], int n, int *pMaxNum, int *MaxPos);
//
//void main(void)
//{
//	int i, n, a[10], max, pos;
//
//	printf("输入数据个数n(n<=10)：");
//	scanf("%d", &n);
//
//	for (i = 0; i<n; i++)
//	{
//		printf("a[%d]=", i);
//		scanf("%d", &a[i]);
//	}
//	Findmax(a, n, &max, &pos);
//	printf("MaxNum:%d\tMaxPos:%d\n", max, pos);
//	system("pause");
//}
//void Findmax(int num[], int n, int *pMaxNum, int *MaxPos)
//{
//	int i = 0;
//	*pMaxNum = num[0];
//	*MaxPos = i;
//
//	for (i = 1; i<n; i++)
//		if (num[i]>*pMaxNum)
//		{
//			*pMaxNum = num[i];
//			*MaxPos = i;
//		}
//}

////3.
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#define N 3
//int i, j;
//void Average(struct student s[], int n);
//void Sort(struct student s[], int n);
//void Save(struct student s[], int n);
//void FindStu(char *pn, int n);
//
//struct student
//{
//	char name[20];
//	int num;
//	float score[3];
//	float ave;
//};
//void main(void)
//{
//	int i;
//	char name[20];
//	struct student stu[N + 1] = { { "张三",12311,65,77,69 },{ "李四",12305,45,78,66 },{ "王五",12302,89,92,59 } };//多创建一个结构体用作交换
//	Average(stu, N);
//
//	for (i = 0; i<N; i++)
//		printf("%s %.2f\n", stu[i].name, stu[i].ave);
//
//	Sort(stu, N);
//	puts("\n排序后：\n");
//	for (i = 0; i<N; i++)
//		printf("%s %.2f\n", stu[i].name, stu[i].ave);
//	Save(stu, N);
//	printf("要查找的学生名字：");
//	gets(name);
//	FindStu(name, N);
//	system("pause");
//}
//void Average(struct student s[], int n)
//{
//
//	for (i = 0; i<n; i++)
//		s[i].ave = (s[i].score[0] + s[i].score[1] + s[i].score[2]) / 3;
//}
//void Sort(struct student s[], int n)
//{
//	for (i = 0; i<n; i++)
//		for (j = i + 1; j<n; j++)
//			if (s[i].ave<s[j].ave)
//			{
//				s[n] = s[i];
//				s[i] = s[j];
//				s[j] = s[n];
//			}
//}
//void Save(struct student s[], int n)
//{
//	FILE *fp;
//	if ((fp = fopen("C:\\Users\\FJSF\\Desktop\\info.dat", "w+")) == NULL)
//	{
//		printf("file open error!");
//		exit(1);
//	}
//
//	for (i = 0; i<n; i++)
//		fwrite(&s[i], sizeof(struct student), 1, fp);
//
//	fclose(fp);
//	puts("\n成功储存！");
//}
//void FindStu(char *pn, int n)
//{
//	struct student stu[N];
//
//	FILE *fp;
//	if ((fp = fopen("C:\\Users\\FJSF\\Desktop\\info.dat", "r")) == NULL)
//	{
//		printf("file open error!");
//		exit(1);
//	}
//
//	for (i = 0; i<n; i++)
//		fread(&stu[i], sizeof(struct student), 1, fp);
//
//	fclose(fp);
//
//	for (i = 0; i<n; i++)
//	{
//		if ((strcmp(pn, stu[i].name)) == 0)
//		{
//			printf("姓名：%s 学号：%d 各科成绩：%.2f %.2f %.2f 平均成绩： %.2f\n", stu[i].name, stu[i].num, stu[i].score[0], stu[i].score[1], stu[i].score[2], stu[i].ave);
//			break;
//		}
//		if (i == n - 1)puts("文件中没有这个学生的数据");
//	}
//}