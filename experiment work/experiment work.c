////�ҳ�һ����ֵ��������
//#include<stdio.h>
//int main()
//{
//	float num = 1;//while�����Ҫ�ж�num��ֵ��num��ֵ����Ϊ0������ѭ����ִ�У��ʸ�ֵ1
//	float max;
//
//	printf("Enter a number:\n");
//	scanf_s("%f", &max);//���Ȼ�ȡһ��ֵ��ֵ��max��ʹѭ�����������бȽ�
//	while (num != 0)//����0��ֹѭ��
//	{
//		printf("Enter a number:\n");
//		scanf_s("%f", &num);
//		max = num >= max ? num : max;//���ϴ�ֵ��ֵ��max
//	}
//
//	printf("The largest number entered was %f", max);
//	//��ִֹ��printf����ֱ�ӹرս���
//	getchar();
//	getchar();
//	return 0;
//}




////�������������������Լ��
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
//		t = n;//����n��ֵ
//		n = m%n;
//		m = t;//��ȡ�����n��ֵ
//	}
//
//	printf("GCD<greatest common divisor>: %d", m);
//
//	getchar();
//	getchar();
//	return 0;
//}



////sum=1/1! + 1/2! +1/3! +����1/n!=?
//#include<stdio.h>
//int main()
//{
//	int n, i;
//	int an = 1;
//	float sum = 0;
//
//	printf("sum=1/1! + 1/2! +1/3! +����1/n!=?\nEnter the value of n:");
//	scanf_s("%d", &n);
//
//	for (i = 1; i <= n; i++)
//	{
//		an = an * i;//����׳˵�ֵ
//		sum = sum + 1.0 / an;//Ҫʹ�á�1.0����ʹ�á�1�������ֻ����������
//	}
//
//	printf("sum=1/1! + 1/2! +1/3! +����1/n!=%.2f", sum);
//
//	getchar();
//	getchar();
//	return 0;
//}



////ˮ�ɻ�����153=1^3+5^3+3^3
//#include<stdio.h>
//int main()
//{
//	int i, a, b, c;
//	printf("Parcissus numbers are ");//�þ�ֻ���ӡһ�Σ�����ѭ�����ӡ
//
//	for (i = 100; i <= 999; i++)//100~999����λ��
//	{
//		a = i % 10;//��λ
//		b = (i / 10) % 10;//ʮλ
//		c = i / 100;//��λ
//
//		if (a*a*a + b*b*b + c*c*c == i)
//			printf("%d ", i);//���䣬�ɲ��ӻ����ţ����ּ��Կո����
//	}
//	getchar();
//	return 0;
//}



//��ȡ��ʽ1
////����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ���
//#include<stdio.h>
//int main()
//{
//	int letter = 0;
//	int space = 0;
//	int digit = 0;
//	int other = 0;
//	char c;
//	printf("����һ���ַ���\n");
//
//	//ִ��ѭ������ȡ�����ַ������س�����ѭ��
//	while ((c = getchar()) != '\n')//c=getcharҪ�����ţ�
//	{
//		if (c >= 'a'&&c <= 'z' || c >= 'A'&&c <= 'Z')//ASCII
//			letter++;
//		else if (c == ' ')
//			space++;
//		else if (c >= '0' && c <= '9')//����Ҫ�ӵ����ţ���ʾΪ�ַ�'0'~'9'
//			digit++;
//		else
//			other++;
//	}
//
//	printf("�����ַ�������ĸ%d�����ո�%d��������%d���������ַ�%d��\n", letter, space, digit, other);
//
//	system("pause");
//	//getchar();
//	//getchar();
//	return 0;
//}

//I am a student.My phone number is 18259871973.

//��ȡ��ʽ2
////����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ���
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
//	printf("����һ���ַ���\n");
//	gets(s);
//
//	c = s[i];
//	while (c != '\0')//c=getcharҪ�����ţ�
//	{
//		if (c >= 'a'&&c <= 'z' || c >= 'A'&&c <= 'Z')//ASCII
//			letter++;
//		else if (c == ' ')
//			space++;
//		else if (c >= '0' && c <= '9')//����Ҫ�ӵ����ţ���ʾΪ�ַ�'0'~'9'
//			digit++;
//		else
//			other++;
//		i++;
//		c = s[i];
//	}
//
//	printf("�����ַ�������ĸ%d�����ո�%d��������%d���������ַ�%d��\n", letter, space, digit, other);
//
//	system("pause");
//
//	return 0;
//}


////�׶�a,b,c �Ҷ�x,y,z;  a˵������x�ȣ�c˵������x,z��;���������
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


////����ժ�����ɸ��ң�ÿ���һ���һ������n������ֻʣһ���ң���ժ�˼�����
//#include<stdio.h>
//int main()
//{
//	int i, n;
//	int sum = 1;//��n������ʣһ����
//
//	printf("����ժ�����ɸ��ң�ÿ���һ���һ������n������ֻʣһ������ժ�˼�����\n\
//����n��ֵ��");
//	scanf_s("%d", &n);
//
//	for (i = 1; i < n; i++)//��n��û���ҹ� 'i < n'����ȡ��
//	{
//		sum = (sum + 1) * 2;//����ǰһ��ʣ��������
//	}
//
//	printf("��ժ��%d����", sum);
//
//	getchar();
//	getchar();
//	return 0;
//}


////Sn=a+aa+aaa+����aa����a(n��a)=��
//#include<stdio.h>
//int main()
//{
//	int n, a, i;
//	int an = 0;
//	int Sn = 0;
//
//	printf("Sn=a+aa+aaa+����+aa����a(n��a)=��\n���� n,a:\n");
//	scanf_s("%d,%d", &n, &a);
//
//	for (i = 1; i <= n; i++)
//	{
//		an = an + a;
//		Sn = Sn + an;
//		a = a * 10;
//	}
//
//	printf("Sn=a+aa+aaa+����+aa����a(n��a)=%d", Sn);
//
//	getchar();
//	getchar();
//	return 0;
//}




///*
//	�Ӽ���������������������ŵ���������arr�У�
//	�ٴӼ���������һ����������ŵ����ͱ���n�С�
//	Ҫ��	��̲�������n�Ƿ�������arr�г��ֹ���
//	�����֣��������һ�γ��ֵ�λ�ã��������no found��
//*/
//
//#include<stdio.h>
//#define SIZE 6
//int main()
//{
//	int arr[SIZE];
//	int n,i;
//
//	printf("���������е�6���������ÿո��������\n");
//	for(i=0;i<SIZE;i++)
//		scanf_s("%d", &arr[i]);
//		
//	printf("����1��������\n");
//	scanf_s("%d", &n);
//
//	for (i = 0; i < SIZE; i++)
//		{
//			if (n == arr[i])
//			{
//				printf("������������еĵ�%d������", i+1);
//				break;//�õ�λ�ã������˳�ѭ��
//			}
//
//			if (i == 5)//��Ԫ�ط����ϸ�if���������������в����������
//				printf("������û�������");
//		}
//
//	getchar();
//	getchar();
//	return 0;
//}




///*
//	���ʵ�ֽ�ԭ�����е�Ԫ������洢��
//	����ԭ����a[]={5,2,7,4}   ��������������a[]={4,7,2,5}.
//	Ҫ��
//	��1���ֱ��������ǰ���������Ԫ�ص���ֵ��
//	��2������ʵ�ֲ�Ҫ�����������飻
//*/
//#include<stdio.h>
//int main()
//#define SIZE 4
//{
//	int i;
//	int a[SIZE] = { 5,2,7,4 };//�Ķ��˴��� SIZE ��ֵ����ʵ����������Ԫ������
//
//	printf("����ǰ���飺\n");
//	for(i=0;i<SIZE;i++)
//		printf("%d ", a[i]);//����䣬�ɲ��ӻ�����
//
//	for (i = 0; i < SIZE / 2; i++)
//	{
//		//~-i�ȼ��ڣ�i-1��  -~i�ȼ��ڣ�i+1)
//
//		//���������ֵ����д���ȼۣ����ö�Ϊ��ֵ����
//		//����t=a;a=b;b=t;  <=>   a=a+b;b=a-b;a=a-b;
//		//�ڶ��ַ�������Ҫ�м�ֵt������
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
//	printf("\n��������飺\n");
//	for (i = 0; i<SIZE; i++)
//		printf("%d ", a[i]);
//
//	getchar();
//	getchar();
//	return 0;
//}


////��дһ�����򣬽������ַ�������������
////ע�⣺��Ҫ��strcat������
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
//	t = i + j;//���ַ���Ԫ�ظ���
//
//	for (n = 0; n < j; n++, i++)
//		a[i] = b[n];
//
//	for(i=0;i<t;i++)//����³��ȵ�����
//	printf("%c", a[i]);
//
//	getchar();
//	getchar();
//	return 0;
//}


////��������е�Ԫ�أ��ظ���Ԫ��ֻ���һ�Σ�
//#include<stdio.h>
//#define NUM 20
//int main()
//{
//	int i,j;
//	int a[NUM];
//
//	printf("����%d��������", NUM);
//	for(i=0;i<NUM;i++)
//	scanf_s("%d", &a[i]);
//
//	printf("���в��ظ���Ԫ��Ϊ��");
//	printf("%d ", a[0]);//��һ��Ԫ��ֱ�����
//	for (i = 1; i < NUM; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			if (a[j] == a[i])//��a[i]��ֵ��֮ǰ��Ԫ���г��֣�������ѭ��
//				break;
//			if(i==j+1)//����a[i]ǰ������Ԫ�أ�������������ȵ�Ԫ��
//				printf("%d ", a[i]);			
//		}
//	}
//	getchar();
//	getchar();
//	return 0;
//}

////�������ʮ����������ת����������ƣ�2~16������
////��������洢��һά�����У������ʾ����� 
//
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i, num, system, rem, tmp, digit;
//
//	printf("������һ��ʮ��������<-1��������>");
//	scanf_s("%d", &num);
//	while (num != -1)
//	{
//		printf("������Ҫת���ɵĽ��ƣ�");
//		scanf_s("%d", &system);
//
//		//���������ת����������ƺ��м�λ��
//		tmp = num;
//		digit = 0;	//ÿ��ѭ����ʼʱ��digit���¸�ֵ0������ѭ���ⶨ�岢��ֵ��
//					//����ѭ����digit��ֵ����ѭ���������������յõ�������ǰ���кܶ��0
//		while (tmp != 0)
//		{
//			tmp /= system;
//			digit++;
//		}
//
//		//�ñ�����������Ԫ�صķ������������׾�����ʲô��˼
//		int *a = (int *)calloc(digit, sizeof(int));
//
//		//�洢����1.������Ľ��Ϊ���򣬹ʴ˴�ֱ�ӽ�������Ľ�������������
//		for (i = digit - 1; num != 0; i--)
//		{
//			rem = num % system;
//			num /= system;
//			a[i] = rem;
//		}
//
//		/*
//		//�洢����2.�˴�Ϊ˳�δ洢��Ԫ���赹��
//		for (i = 0; num != 0; i++)
//		{
//		rem = num % system;
//		num /= system;
//		a[i] = rem;
//		}
//
//		//������Ԫ�ص���
//		for (i = 0; i < digit / 2; i++)
//		{
//		a[i] = a[i] + a[~- digit - i];
//		a[~- digit - i] = a[i] - a[~- digit - i];
//		a[i] = a[i] - a[~- digit - i];
//		}
//		*/
//
//		printf("ת�����Ϊ��\n");
//		for (i = 0; i < digit; i++)
//		{
//			printf("%d", a[i]);
//		}
//		printf("����������������������������������������������������������������������������\n");
//		printf("������һ��ʮ��������<-1��������>");
//		scanf_s("%d", &num);
//	}
//	printf("����������������������������������������������������������������������������\n");
//
//	getchar();
//	getchar();
//	return 0;
//}

///*
//��д���򣬶���һ���Է���"!"�����ĳ���С��20�ֽڵ�Ӣ�ľ��ӣ�
//������Ƿ�Ϊ���ģ��������ͷ�������һ���ģ���
//���磺 ������ӣ�MADA ADAM!���ǻ��ģ����������YES
//������ӣ�ABCDBA)!�����ǻ��ģ����������NO
//*/
//
////ʵ���ϲ�δ���������ݽ������ƣ����ֺ��ַ���������������
////���ж����������ϸ���ֻ��Ϊ��ĸ���ɼ���������������͵��ж�
//#include<stdio.h>
//#define SIZE 20
//int main()
//{
//	char a[SIZE];
//	char c;
//	int i;
//	int tmp = 0, num = 0;
//
//	printf("������һ���Է���\"!\"�����ĳ���С��20�ֽڵ���ĸ���:\n");
//	//��ȡ��ĸ��
//	//for (i = 0; i < SIZE, (c = getchar()) != '!'; i++)
//	//{
//	//	a[i] = c;//������ĸ��
//	//	num++;//��¼��ĸ����
//	//}
//	//gets(a);
//	scanf_s("%s", a);
//	for (i = 0; i < num / 2; i++)
//	{
//		if (a[i] != a[~- num - i])//�����Ϲ���ֱ�����NO������ѭ��
//		{
//			printf("NO");
//			break;
//		}
//		if (a[i] == a[~- num - i])//��¼���ϻ��Ĺ���Ԫ�ظ���
//			tmp++;
//	}
//
//	if (tmp == num / 2)//����Ԫ�ض����ϻ��Ĺ���
//		printf("YES");
//
//	getchar();
//	getchar();
//	return 0;
//}

////����Ϊ������������ͽ����жϲ��ֺ�ĳ�����룺
//#include<stdio.h>
//#define SIZE 20
//int main()
//{
//	char a[SIZE];
//	char c;
//	int i;
//	int tmp = 0, num = 0;
//
//	printf("������һ���Է���\"!\"�����ĳ���С��20�ֽڵ���ĸ���:\n");
//	//��ȡ��ĸ��
//	for (i = 0; i < SIZE, (c = getchar()) != '!'; i++)
//	{
//		a[i] = c;//������ĸ��
//		num++;//��¼��ĸ����
//	}
//
//	if (num >= 20)
//	{
//		printf("�����ַ�������\n"); 
//		system("pause");
//		exit(0);
//	}
//	for(i = 0; i < num; i++)
//	{
//		if (((a[i] >= 'a'&&a[i] <= 'z') || (a[i] >= 'A'&&a[i] <= 'Z')) != 1)
//		{
//			printf("�������ݲ�����ĸ��ȫ����ĸ\n");
//			break;
//		}
//		tmp++;
//	}
//	if(tmp==num)//�����������Ԫ�ض�Ϊ��ĸ��������Ƿ�Ϊ���ĵ��ж�
//	{
//		tmp = 0;//֮ǰʹ�ù�����tmp�����滹Ҫ�õ�����������ʴ˴��������¸�ֵΪ0
//		for (i = 0; i < num / 2; i++)
//		{
//			if (a[i] != a[~- num - i])//�����Ϲ���ֱ�����NO������ѭ��
//			{
//				printf("NO\n");
//				break;
//			}
//			if (a[i] == a[~- num - i])//��¼���ϻ��Ĺ���Ԫ�ظ���
//				tmp++;
//		}	
//		if (tmp == num / 2)//����Ԫ�ض����ϻ��Ĺ���
//			printf("YES\n");
//	}
//	system("pause");
//	return 0;
//}



////���蹲��3��ѧ����ÿ��ѧ������5�ųɼ������ġ���ѧ��Ӣ���ѧ��������
////Ҫ��
////��1���Ӽ���������ÿλѧ����5�ſγ̳ɼ���
////��2�����ÿλͬѧ���ܳɼ���ƽ���֣�
//
//#include<stdio.h>
//int main()
//{
//	float a[3][5];
//	int i,n;
//	float sum;
//	for (n = 0; n < 3; n++)
//	{
//		printf("�������%dλѧ���Ŀγ̳ɼ�<���ġ���ѧ��Ӣ�������ѧ>��\n", n + 1);
//		for (i = 0,sum=0; i < 5; i++)
//		{
//			scanf_s("%f", &a[n][i]);
//			sum += a[n][i];
//		}
//		printf("�ܷ֣�%.2f\tƽ����:%.2f\n", sum, sum / 5);
//	}
//
//	getchar();
//	getchar();
//	return 0;
//}

////6���������
//#include<stdio.h>
//int main()
//{
//	int i, j;
//	int a[6][6];
//
//	for(i=0;i<6;i++)//������β����1
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
//	��дһ�������ж��������������ĺ�����
//	��main�����е��øú������������ֵ�����жϣ�
//	������жϽ������������ֵ<=1ʱ��ֹͣ������жϣ���
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
//		if (n < 2)//n<=1������ѭ��
//			break;
//		if (prime(n))//nΪ����ʱ�ķ���ֵΪ1
//			printf("%d is a prime number.\n", n);
//		else
//			printf("%d is not a prime number.\n", n);
//	}
//		getchar();
//		getchar();
//		return 0;
//}
////�ж�x�Ƿ�Ϊ�������Ƿ���1�����Ƿ���0
//int prime(int x)
//{
//	int i, t = 1;
//	for (i = 2; i < sqrt(x); i++)
//		if (x % i == 0)
//			t = 0;
//	return(t);
//}




////ʹ����һ��������д���ж������ĺ�����֤��°ͺյ�1 + 1����
////---- - �κ�һ�� >= 6��ż�������Ա�ʾ����������֮�͡�
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
//		if ((n < 6) || ((n % 2) != 0))//�ж��Ƿ����������������ֱ������whileѭ��
//		{
//			printf("The number is not a even number<exit with n>=6>");
//			break;
//		}
//
//		for (a = 2; a < n; a++)//1<a<n,1<b<n
//			for (b = 2; b < a; b++)//�˴�b<a��������a<n,���򽫻����2��˳��ͬ����ͬ��ʽ
//				if (n == a + b)
//					if (prime(a) && prime(b))//�ж�a,b�Ƿ�Ϊ����
//						printf("%d=%d+%d\n", n, a, b);
//	}
//		getchar();
//		getchar();
//		return 0;
//}
////�ж�x�Ƿ�Ϊ�������Ƿ���1�����Ƿ���0
//int prime(int x)
//{
//	int i, t = 1;
//	for (i = 2; i <= sqrt(x); i++)
//		if (x % i == 0)
//			t = 0;
//	return(t);
//}

////��дһ����׳˵ĺ��������ŵ��øú���ʵ����ϵ���⡣
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
//��дһ������������Ԫ���Լ���СԪ�صĺ���selectmaxandmin()��
//��main�����е��øú�����
//�����ֵ����Сֵ��������������Է���selectmaxandmin()�����С�
//*/
//#include<stdio.h>
//int main()
//{
//	void selectmaxandmin(int a[4][4]);
//	int i, j;
//	int a[4][4] = { {1,5,3,6},{2,4,5,7},{3,9,8,0},{4,1,9,5} };
//	printf("����\n");
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


////a->e,b->f,c->g����w->a,x->b,y->c,z->d;
////a-v,+4
////w-z,-22
////��дһ������ԭ�ĵĺ��������ڸ��������ݣ����չ��ɶ�����б���
//#include<stdio.h>
//int main()
//{		
//	encode();
//	system("pause");
//}
//
//void encode(void)
//{
//	printf("������������ݣ�\n");	
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



////a->e,b->f,c->g����w->a,x->b,y->c,z->d;
////a-v,+4
////w-z,-22
////��дһ������ԭ�ĵĺ��������ڸ��������ݣ����չ��ɶ�����б���
//#include<stdio.h>
//#define N 40
//char a[N];
//
//int main()
//{
//	//char c;
//	printf("������������ݣ�\n");
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



////���岢����һ����һ���������еľ���ת�õĺ���
//#include<stdio.h>
//#define row 3
//#define col 4
//int main()
//{
//	void transpose(int a[col][col]);
//	int a[col][col];
//	int i, j;
//
//	printf("����ԭʼ�����Ԫ�ص�ֵ��\n");
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("a[%d][%d]", i, j);
//			scanf_s("%d", &a[i][j]);
//		}
//	}
//	transpose(a);
//	printf("ת�þ���\n");
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
////��һ���������еľ���ת��
//void transpose(int a[col][col])
//{
//	int i, j;
//
//	printf("ԭʼ����\n");
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d\t", a[i][j]);
//		}
//		printf("\n");
//	}
//
//	//Ԫ����ֵ����
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



////���õݹ鵹����� ������ַ���
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
////��������ַ������������������n����ֵ��Ӱ�쵹��
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
// ����3������������С�����˳�����
// ����3���ַ���������С�����˳�����
// Ҫ��ʹ��ָ�뷽��ʵ��
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
// ��13����Χ��һȦ��˳���źš�
// �ӵ�1���˿�ʼ����(��1��3����)��
// ������3�����˳�Ȧ�ӣ���������µ���ԭ���ڼ��ŵ���λ��
// Ҫ��ʹ��ָ�뷽��ʵ��
//*/
//#include<stdio.h>
//#define N 13
//void main()
//{
//	int k = 0, m = 0, i, a[50];
//
//	for (i = 0; i < N; i++)
//		*(a+i) = -~i;//numbering��a[0]=1,a[1]=2����
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





////��дһ������ʵ�ֽ��ַ���str1���ַ���str2�ϲ���
////�ϲ�����ַ����е��ַ�����ASCII��ֵ��С�����������
////��ͬ���ַ������ַ�����ֻ����һ��
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
//	//�ϲ��ַ�����
//	strcat_s(s1, strlen(s1)+strlen(s2) + 1, s2);
//
//	//ɾ���ظ�Ԫ��
//	i = 0;
//	while (s1[i] != '\0')
//	{
//		j = i+1;
//		while (s1[j] != '\0')
//		{
//			while (s1[j] == s1[i])//�����ʱ,Ԫ�ر�����,�����Ԫ�ض���ǰ��һλ
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
//	//����
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
//	��֪һ������Ϊ10��һά����arr��
//	��д�����������m��������n�����ĺ͡�
//	Ҫ��ʹ��ָ�뷽��ʵ��
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
//	printf("\n���m��������n�����ĺ�");
//	printf("\n���� m n: ");
//	scanf_s("%d %d", &m, &n);
//	for (; m < -~n; m++)
//		sum += *(arr + ~- m);
//
//	printf("��m��������n�����ĺ�Ϊ��%d\n", sum);
//	system("pause");
//}


///*
// Arr��һ������n��������һά���顣
// �ֽ������е�ÿ��Ԫ�������m��λ�ã�
// ʹ���m���������ǰ���m������
// дһ����ʵ�����Ϲ��ܣ�
// ��������������n�����������������ĵ�n������
// Ҫ��ָ����Ϊ��������
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
//	printf("����%d��������һά����Arr:\n", n);
//	for (i = 0; i < n; i++)
//	{
//		printf("Arr[%d]=", i);
//		scanf_s("%d", &Arr[i]);
//	}
//
//	printf("�ֽ������е�ÿ��Ԫ�������m��λ�ã�\
//ʹ���m���������ǰ���m������\n����m:");
//	scanf_s("%d", &m);
//
//	special_move(p,m);
//
//	printf("�ƶ��������Arr��\n");
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
//	//����Ԫ�ؼ�������ƶ�n��λ��
//	for (k = 0; k < n; k++)
//	{
//		a[i - 1+m] = a[i-1];
//			i--;
//	}
//	
//	//��ǰ��m��Ԫ�����¸�ֵ
//	for (k = 1; k <= m; k++)
//	{
//		 a[k - 1]=a[n-1 + k];
//	}
//}




///*
//��дһ������insert(s1, s2, ch)��
//ʵ�����ַ���s1�е�ָ���ַ�chλ�ô������ַ���s2��
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
//				j++;//ѭ����õ�s1[j]Ϊ��һ��Ϊ\0���ַ������ַ���ĩβ��һλ
//
//			for (k = 0; k < strlen(s1)-i-1; k++)//����ѭ��������������Ԫ�ظ���
//			{
//				s1[j - 1 + strlen(s2)] = s1[j - 1];
//				j--;//�Ӻ���ǰ������λ
//			}
//
//			//д���ַ���s2
//			for (k = 0; k < strlen(s2); k++)
//			{
//				s1[i+1] = s2[k];
//				i++;
//			}						
//		}		
//	}	
//}


////����һ���������ڣ��ꡢ�¡��գ��Ľṹ�����͡�
////��дһ���������ڼ���ĳ����������Ӧ��ݵĵڼ��졣
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
//	���������ṹ��STUDENT��BIRTHDAY��
//	���нṹ��STUDENT������Ա�У�����(char name[20]),
//	ѧ��(int number),��������(BIRTHDAY birth);
//	�ṹ��BIRTHDAY�����ĳ�Ա�У����(int year),
//	�·�(int month)������(int day).
//	�������������ֱ�������������N��STUDENT�ṹ���������Ϣ
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
//		getchar();// �� rewind(stdin);
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



////���ģ��ʱ�Ӹ���
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
//		//ÿ������Ҫռ��λ�������������һλ����û�����ǵ������
//		//���59��->09��->19��->29�����ʾ����
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
//	/*��Ҫʹ��ѭ������ʹ�����·�ʽ
//	for (int i = 0; i < 100000; i++)
//			printf("\b");*/
//	}
//	system("pause");
//}
//void sleep(long wait)//windows.h���а����������Sleep();
//{
//	long goal;
//	goal = wait + clock();
//	while (goal > clock());
//}



////�ֱ��幫��METRIC����Ա�������ס����ף���Ӣ��BRITISH����Ա������Ӣ�ߡ�Ӣ�磩�����ṹ�塣
////Ϊÿһ���ṹ������������������ÿһ���ṹ���������������ʾ�ĳ���֮�ͣ���λ�����ף�
//#include<stdio.h>
//struct METRIC
//{
//	float m, cm;//meter��centimeter
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
//		printf("Enter the length of m%d(meter��centimeter):", -~i);
//		scanf("%f %f", &M[i].m, &M[i].cm);	
//	}
//	for (i = 0; i < 2; i++)
//	{
//		printf("Enter the length of b%d(foot��inch):", -~i);
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


////��N��ѧ����ÿ��ѧ������ѧ��(num),����(name[20]),�Ա�(sex),����(age),
////���ſεĳɼ�(score[3]).Ҫ��Ӽ���������n��ѧ�������ݣ�Ȼ�����һ��������
////��������ÿ��ѧ�����ֺܷ�ƽ����,Ȼ���ӡ�������ݡ�
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
//	printf("Enter the number of students��");
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






////����һ��student�ṹ�壬��Ա�У�����(char name[20]), ѧ��(int number)��
////�ܳɼ�(float totalscore)��
////��main�����ж���һ������Ϊn�Ľṹ������arr[]��
////���ú���sortinfo(struct student *arr, int n)��nλѧ������Ϣ��������
////��֪������sortinfo(����)�ǰ����ܳɼ��Ӹߵ��͵�˳���������ġ�
////�����λѧ�����ܳɼ���ȣ�����ѧ�Ŵ�С��������
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
//	struct student arr[N+1] = { {"����",1076,400} ,{"����",1061,400},{"����",1040,405},"����",1058,395 };
//	printf("����ǰ��\n");
//	output(arr, N);
//
//	sortinfo(arr, N);
//
//	printf("�����\n");
//	output(arr, N);
//
//	system("pause");
//}
//void sortinfo(struct student *arr, int n)
//{
//	//arr[n+1]������arr[0]~arr[n]�Ľṹ�����飬arr[n]�������ݴ���
//	//��������õ���ʵ��Ϊn����ѭ������ʱΪarr[0]~arr[n-1]
//	for (i = 0; i<n; i++)
//		for (j = i + 1; j < n; j++)	
//			//�ȽϷ�����������ȱȽ�ѧ��
//			if ((arr[i].totalscore < arr[j].totalscore)||((arr[i].totalscore == arr[j].totalscore)&& (arr[i].number > arr[j].number)))
//			{
//				//��arr[n]��Ϊ�м����������ݽ���
//				arr[n] = arr[i];
//				arr[i] = arr[j];
//				arr[j] = arr[n];
//			}		
//}
//void output(const struct student *arr, int n)
//{
//	for (i = 0; i<n; i++)
//		printf("������%s ѧ�ţ�%d �ܷ֣�%.2f\n", arr[i].name, arr[i].number, arr[i].totalscore);	
//}




////ʵ�鿼�� 3��
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
//	printf("����%d�ֽ跨", k);
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
//	printf("�������ݸ���n(n<=10)��");
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
//	struct student stu[N + 1] = { { "����",12311,65,77,69 },{ "����",12305,45,78,66 },{ "����",12302,89,92,59 } };//�ഴ��һ���ṹ����������
//	Average(stu, N);
//
//	for (i = 0; i<N; i++)
//		printf("%s %.2f\n", stu[i].name, stu[i].ave);
//
//	Sort(stu, N);
//	puts("\n�����\n");
//	for (i = 0; i<N; i++)
//		printf("%s %.2f\n", stu[i].name, stu[i].ave);
//	Save(stu, N);
//	printf("Ҫ���ҵ�ѧ�����֣�");
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
//	puts("\n�ɹ����棡");
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
//			printf("������%s ѧ�ţ�%d ���Ƴɼ���%.2f %.2f %.2f ƽ���ɼ��� %.2f\n", stu[i].name, stu[i].num, stu[i].score[0], stu[i].score[1], stu[i].score[2], stu[i].ave);
//			break;
//		}
//		if (i == n - 1)puts("�ļ���û�����ѧ��������");
//	}
//}