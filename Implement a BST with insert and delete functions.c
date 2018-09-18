#Implement BST with insert functions 
void insert(node ** tree, int val) {
 node *temp = NULL;
 if(!(*tree)) {
   temp = (node *)malloc(sizeof(node));
   temp->left = temp->right = NULL;
   temp->data = val;
   *tree = temp;
   return;
 }

 if(val < (*tree)->data) {
      insert(&(*tree)->left, val);
   } else if(val > (*tree)->data) {
     insert(&(*tree)->right, val);
   }
 }
#Implement BST delete functions  
void deltree(node * tree) {
 if (tree) {
   deltree(tree->left);
   deltree(tree->right);
   free(tree);
  }
}
