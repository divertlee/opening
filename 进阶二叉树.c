#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

//��ʽ�洢-����������������

//����������-����������Ч�ʸ�
//������-�ݹ�ʵ��

typedef int STDatatype;

typedef struct STree //�������Ľڵ�
{
	STDatatype data;
	struct STree* left;
	struct STree* right;
}BTNode;
 preorder(BTNode* root)//ǰ�����
{
	if (root == NULL)
	{
		printf("NULL");
		return ;
	}
	printf("%d ", root->data);
	preorder(root->left);
	preorder(root->right);
}
 aforder(BTNode*root)//�������
{
	if (root == NULL)
	{
		printf("NULL");
		return ;
	}
	aforder(root->left);
	printf("%d ", root->data);
	aforder(root->right);
}
 laorder(BTNode* root)//�������
{
	if (root == NULL)
	{
		printf("NULL");
		return ;
	}
	laorder(root->left);
	laorder(root->right);
	printf("%d ", root->data);
}
BTNode* CreateTree()//����������
{
	BTNode * n1 = (BTNode*)malloc(sizeof(BTNode));
	assert(n1);
	BTNode * n2 = (BTNode*)malloc(sizeof(BTNode));
	assert(n2);
	BTNode * n3 = (BTNode*)malloc(sizeof(BTNode));
	assert(n3);
	BTNode * n4 = (BTNode*)malloc(sizeof(BTNode));
	assert(n4);
	BTNode * n5 = (BTNode*)malloc(sizeof(BTNode));
	assert(n5);
	BTNode * n6 = (BTNode*)malloc(sizeof(BTNode));
	assert(n6);
	n1->data = 1;
	n2->data = 2;
	n3->data = 3;
	n4->data = 4;
	n5->data = 5;
	n6->data = 6;

	n1->left = n2;
	n1->right = n4;
	n2->left = n3;
	n2->right = NULL;
	n3->left = NULL;
	n3->right = NULL;
	n4->left = n5;
	n4->right = n6;
	n5->left = NULL;
	n5->right = NULL;
	n6->left = NULL;
	n6->right = NULL;
	
	return n1;
}
int TreeSize(BTNode* root)//��ڵ����
{
	return root == NULL ? 0 :
		TreeSize(root->left) +TreeSize(root->right)+1;

}
int Leafsize(BTNode* root)//��Ҷ�Ӹ���
{
	if (root == NULL)
	
		return 0;
	if (root->left == NULL && root->right == NULL)
	{
		return 1;
	}
	return Leafsize(root->left) + Leafsize(root->right);

}
int Treehigh(BTNode* root)//�����ĸ߶�
{
	if (root == NULL)
		return 0;
	int lt = Treehigh(root->left);
	int rt = Treehigh(root->right);
	return lt > rt ? lt + 1 : rt + 1;

}
int Ktreesize(BTNode* root, int k)//���k��ڵ����
{
	assert(k > 0);
	if (root == NULL)
	{
		return 0;
	}
	if (k == 1)
	{
		return 1;
	}
	return Ktreesize(root->left,k-1) +Ktreesize(root->right,k-1);
	
}
BTNode*  TreeFind(BTNode* root, STDatatype X)//�ڶ���������Ӧ�ڵ�-���ظ�
{
	if (root == NULL)
	
		return NULL;
	
	if (root->data == X)
	{
		return root;
	}
	//��ȥ������
	BTNode*lret= TreeFind(root->left, X);
	if (lret)
	
		return lret;
	
	//�Ҳ�����ȥ������
		BTNode*rret=TreeFind(root->right, X);
		if (rret)
			return rret;

		return NULL;
}
TreeDestroy(BTNode* root)//����
{
	if (root == NULL)
	{
		return;
	}
	TreeDestroy(root->left);
	TreeDestroy(root->right);
	free(root);
}
int main()
{
	BTNode* root = CreateTree();	
printf("\n");
printf("�ڵ����Ϊ%d ", TreeSize(root));
printf("\n");
printf("Ҷ�ӽڵ����Ϊ%d ",Leafsize(root));
printf("\n");
printf("���ĸ߶�Ϊ%d ",Treehigh(root));
printf("\n");
printf("��k��ڵ����Ϊ%d ", Ktreesize(root,3));
printf("find��%p ", TreeFind(root, 6));//�ڶ���������Ӧ�ڵ�-���ظýڵ��ַ
TreeDestroy(root);

return 0;
}
//
//preorder(root);//ǰ�����
// aforder(root);//�������
//laorder(root);//�������


