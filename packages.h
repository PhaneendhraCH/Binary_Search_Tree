#ifndef bst_packages

#define bst_packages
	
	#include <stdio.h>
	#include <stdlib.h>

	struct tree{
	    int data;
	    struct tree *left;
	    struct tree *right;
	};

	struct tree *head;

	struct tree *postorder(struct tree *);
	struct tree *preorder(struct tree *);
	struct tree *inorder(struct tree *);
	struct tree *insert(struct tree *,int );
	struct node *HigherNode(struct tree *);
	struct node *lesserNode(struct tree *);
	struct tree *search(struct tree *,int);
	
	void leftviewprint(struct tree *,int ,int *);
	void LeftView(struct tree *);

	void rightviewprint(struct tree *,int ,int *);
	void RightView(struct tree *);
#endif
