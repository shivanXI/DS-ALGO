int FindMax(struct BinaryTree *root)
{
	int root_val,left,right,max = INT_MIN;
	if(root != NULL){
		root_val = root->data;
		left = FindMax(root->left);
		right = FindMax(root->right);

		if(left > right)
			max = left;
		else
			max = right;

		if(root_val > max)
			max = root_val; 
	}
	return max;
}
