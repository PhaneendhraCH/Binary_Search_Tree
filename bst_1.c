#if 0

Binary Search Tree in C

Author : Phaneendhra
Description : Used GDB for figuring out errors.

Compile : gcc -g bst.c -o bst

#endif

#include "packages.h"

extern struct tree *head;

struct tree *postorder(struct tree *start){
 
 
    if(start){
    postorder(start->left);
    postorder(start->right);
    printf("%d ",start->data);
    }
}


struct tree *inorder(struct tree *start){
 
 
    if(start){
    inorder(start->left);
    printf("%d ",start->data);
    inorder(start->right);
    }
}


struct tree *preorder(struct tree *start){
 
 
    if(start){
    printf("%d ",start->data);
    preorder(start->left);
    preorder(start->right);
    }
}


struct tree *search(struct tree *start,int value){
 
if (start){
    if (value == start->data)
    	printf("\nValue exists in tree : %d\n",start->data);
    	
    	
    if (value < start->data)
    	return search(start->left,value);
    
    if (value > start->data)
    	return search(start->right,value);
    
	}
}

struct node *lesserNode(struct tree *root){

	if (root->left == NULL){
		printf("Lesser Node is BST : %d\n",root->data);
		return NULL;}
		
	return lesserNode(root->left);
}

struct node *HigherNode(struct tree *root){

	if (root->right == NULL){
		printf("Higher Node is BST : %d\n",root->data);
		return NULL;}
		
	return HigherNode(root->right);
}

struct tree *insert(struct tree *root,int value){
    
    if (root == NULL){
        root = malloc(sizeof(struct tree));
        root->data = value;
        return root;
    }
    
    if (value == root->data){
        printf("Cannot insert duplicate values\n");
        return root;
    }
    
    if (value < root->data){
        
        if (root->left == NULL){
            
            struct tree *node = malloc(sizeof(struct tree));
            node->data = value;
            root->left = node;
            
        }
        else{
            return insert(root->left,value);
        }
    }
    
    if (value > root->data){
        if (root->right == NULL){
            
            struct tree *node = malloc(sizeof(struct tree));
            node->data = value;
            root->right = node;
           
        }

        else{
            return insert(root->right,value);
        }
    }
   return root;
}

int main()
{
    
    head = insert(head,7);
    insert(head,4);
    insert(head,9);
    insert(head,9);
    insert(head,5);
    
    preorder(head);
    postorder(head);
    inorder(head);
    search(head,9);
    lesserNode(head);
    HigherNode(head);
    return 0;
}

