#define EQ(a,b) ((a) == (b))
#define	LT(a,b)	((a) < (b))
#define	LQ(a,b) ((a) <= (b))
#define GT(a,b) ((a) > (b))
#define GQ(a,b) ((a) >= (b))

typedef struct bstNode{
	int data;
	struct bstNode *lchild,*rchild;
}*BSTree;

//搜索排序树
BSTree searchBST(BSTree t,int key);

//向排序树插入结点
void insertBST(BSTree t,int key);

//删除关键字为key的结点
void deleteBST(BSTree t,int key);
