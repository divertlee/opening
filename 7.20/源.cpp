#include<Stdio.h>
//��ӡ100-200������
//int main()
//{
//	int i= 0;
//	int j = 0;
//	int flag = 1;
//	for (i = 100; i < 200; i++)
//	{
//		for (j = 2; j < i / 2; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//			}
//			if (flag == 1)
//			{
//				printf("%d ", i);
//			}
//		}
//	}
//
//	return 0;
//}
//#include<stdio.h>
//int is_p(int n)
//{
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//		
//			return 1;
//	}
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	scanf_s("%d", &i);
//	for (n = 1; n < i; n++)//����n֮ǰ����
//	{
//		if (is_p(n))
//		{
//			printf("%d ", n);
//		}
//	}
//
//	return 0;
//}


//int main()
//{
//	int i;
//	int j;
//	int flag = 1;
//	for (i = 2; i <= 100; i++)
//	{
//		for (j = 2; j <= i / 2; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1) {
//			printf("%d\n", i);
//		}
//		flag = 1;
//	}
//	return 0;
//}
//int main()//����һ������-����������1����ӡ�������Ǿͷ���0
//{
//	int i = 0;
//	int j = 0;
//	int flag = 1;
//	for (i = 100; i < 200; i++)//����100-200����
//	{
//		for (j = 2; j < i / 2; j++)//�ж��ǲ�������
//		{
//			if (i % j == 0)//һ������-��������-ֱ���˳�
//			{
//				flag = 0;
//				break;
//			}
//		}
//			if (flag == 1)
//			{
//				printf("%d ",i);
//			}
//			flag = 1;//������1
//		}
//	
//	return 0;
//}
//��ӡ-100֮�����е�3�ı���
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 100; i++)//����-1-100����
//	{
//		if (i % 3 == 0)//�ж��ǲ���3�ı���
//		{
//			printf("%d ", i);
//		}
//	}
//}
//��ӡ1000-2000֮�������
//int main()
//{
//	int n = 0;
//	for (n = 1000; n <=2000; n++)//����1000-2000
//	{
//		if(n%4==0 && n%100!=0 )//�ж��ǲ�������
//		{
//			printf("%d ", n);
//		}
//		
//		if (n % 400 == 0)//�ж��ǲ�������
//		{
//			printf("%d\n", n);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int tmp;
//	scanf_s("%d%d%d", &a, &b, &c);
//	if (a < b)//(a,b)a->1
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//
//
//	}
//
//	if (a < c)//(a,c)a->1
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//
//	if (b<c)//(b,c)b->1
//	{
//		tmp = b;
//		b=c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}
//int main()//ת���ַ�->/"
//{
//	printf("printf(\"Hello world!\\n\");\n");
//	printf("cout << \"Hello world!\" << endl;");
//	return 0;
//}

//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//�����Լ������С������
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf_s("%d%d", &n, &m);


	//��һ�ַ�����������
	// 	//int min = n < m ? n : m;//����С-���Լ��
	//int max = n > m ? n : m;//�����-��С������
	//int i = min;
	//int j = max;
	//while (1)
	//{
	//	if (n % i == 0 && m % i == 0)//�������ܰ����Լ������ʱ
	//	{
	//		break;//������Լ������whileѭ��
	//	}
	//	i--;//i���Լ��
	//}
	//while (1)
	//{
	//	if (j % n == 0 && j % m == 0)//��С�������ܱ�����������ʱ
	//	{
	//		break;//�����С����������whileѭ��
	//	}
	//	j++;//j��С������
	//}
	//printf("%d%d", i, j);//��ӡ���Լ������С������
		//�ڶ��ַ���-շת�����-�����Լ��
	/*int i = n;
	int j = m;
	int r = 0;
	while (r = i % j)
	{
		i = j;
		j = r;
	}*/
	//int min = j;//����ʱjΪ���Լ��
	//int max = n * m / j;//��С������Ϊ������˳������Լ��
	//printf("%d %d", min, max);//��ӡ���Լ������С������
//	return 0;
//}
//��ӡ����������
//int main()
//{
//	int n = 0;
//	while (scanf_s("%d", &n) == 1)//����������һ���������ѭ��
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (i == 0 || i == n - 1 || j == 0 || j == n - 1)//�ڵ�һ/�����\�У���ӡ
//				{
//					printf("* ");
//				}
//				else
//					printf("  ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
// }
//int main()
//{
//	int a = 0;
//	int b = 0;
//	double sum1 = 0;
//	double sum2 = 0;
//	double sum;
//	for (a = 1; a < 100;a+= 2)//������������
//	{
//		sum1=sum1+1.0/ a;//1.0(�󲻼�.0����ʧ����-������������
//}
//	for (b = 2; b < 101;b+=2)//����ż������
//	{
//		sum2 = sum2 + 1.0 / b;
//	}
//	 sum = sum1 - sum2;//����������
//	printf("%f", sum);
//	return 0;
//}
//int main()//ʮ�������������ֵ
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int max = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//	return 0;
//
//}
//int main()//�������в���ĳ�����������ң�
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int a = 11;
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] == a)
//		{
//		
//			return	printf("�ҵ��ˣ��±�Ϊ%d\n", i);;
//		}
//
//}
//	printf("�Ҳ���\n");
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = sizeof(arr)/sizeof(arr[0]);
//	int left = 0;//������±�
//	int right = k-1;//���ұ��±�
//	int n = 4;//Ҫ�ҵ���
//	while (left <=right)
//	{
//		int mid = left + right / 2;//�м�Ԫ���±�
//		if (n > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else if (n < arr[mid])
//		{
//			right = mid-1 ;
//		}
//
//		else
//		{
//			return printf("�ҵ���,�±�Ϊ%d", mid);//n�������Ҳ�����ұ߼��ҵ���
//		}
//	}
//	printf("û�ҵ�\n");
//
//	return 0;
//}
//int main()//1-100�ж��ٸ�9
//{
//	int n = 0;
//	int i = 0;
//	for (n = 1; n < 100; n++)
//	{
//		if (n % 10 == 9 ||n%90==9)
//		{
//			i++;
//		}
//
//	}
//	printf("%d", i);
//	return 0;
//}
int main()//��ӡ9*9�˷��ھ���
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			printf("%2d*%2d=%2d ",i,j ,i * j);
			
		}
		printf("\n");
	}
	return 0;
}