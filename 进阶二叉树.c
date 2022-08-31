#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

//链式存储-用链表制作二叉树

//搜索二叉树-搜索二叉数效率高
//二叉树-递归实现

typedef int STDatatype;

typedef struct STree //二叉树的节点
{
	STDatatype data;
	struct STree* left;
	struct STree* right;
}BTNode;
 preorder(BTNode* root)//前序遍历
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
 aforder(BTNode*root)//中序遍历
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
 laorder(BTNode* root)//后序遍历
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
BTNode* CreateTree()//构建二叉树
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
int TreeSize(BTNode* root)//求节点个数
{
	return root == NULL ? 0 :
		TreeSize(root->left) +TreeSize(root->right)+1;

}
int Leafsize(BTNode* root)//求叶子个数
{
	if (root == NULL)
	
		return 0;
	if (root->left == NULL && root->right == NULL)
	{
		return 1;
	}
	return Leafsize(root->left) + Leafsize(root->right);

}
int Treehigh(BTNode* root)//求树的高度
{
	if (root == NULL)
		return 0;
	int lt = Treehigh(root->left);
	int rt = Treehigh(root->right);
	return lt > rt ? lt + 1 : rt + 1;

}
int Ktreesize(BTNode* root, int k)//求第k层节点个数
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
BTNode*  TreeFind(BTNode* root, STDatatype X)//在二叉树找相应节点-返回该
{
	if (root == NULL)
	
		return NULL;
	
	if (root->data == X)
	{
		return root;
	}
	//先去左树找
	BTNode*lret= TreeFind(root->left, X);
	if (lret)
	
		return lret;
	
	//找不到再去右树找
		BTNode*rret=TreeFind(root->right, X);
		if (rret)
			return rret;

		return NULL;
}
TreeDestroy(BTNode* root)//销毁
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
printf("节点个数为%d ", TreeSize(root));
printf("\n");
printf("叶子节点个数为%d ",Leafsize(root));
printf("\n");
printf("树的高度为%d ",Treehigh(root));
printf("\n");
printf("第k层节点个数为%d ", Ktreesize(root,3));
printf("find：%p ", TreeFind(root, 6));//在二叉树找相应节点-返回该节点地址
TreeDestroy(root);

return 0;
}
//
//preorder(root);//前序遍历
// aforder(root);//中序遍历
//laorder(root);//后序遍历


