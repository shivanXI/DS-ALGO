class Node
{
	int val;
	Node left, right;

	public Node(int val)
	{
		this.val = val;
		left = right = null;
	}
}

class Tree
{
	Node root;
	
	public Tree()
	{
		root = null;
	}


	

	public void bTreeToDList(Node root)
	{
		if(root == null)
			return ;

		bTreeToDList(root.left);
		if(prev == null)
			head = root;
		else
		{
			root.left = prev;
			prev.right = root;
		}

		prev = root;

		bTreeToDList(root.right);

	}

	public void display(Node head)
	{
		System.out.println("Doubly Linked List is:");
		Node itr = head;
		do{
			System.out.print(itr.val+" ");
		}
		while(itr != head);
		System.out.println();
	}
}

class Solution
{
	public static void main(String[] args)
	{
		Tree tree = new Tree();
        tree.root = new Node(10);
        tree.root.left = new Node(12);
        tree.root.right = new Node(15);
        tree.root.left.left = new Node(25);
        tree.root.left.right = new Node(30);
        tree.root.right.left = new Node(36);
		tree.bTreeToDList(tree.root);
		tree.display(head);
	}
}