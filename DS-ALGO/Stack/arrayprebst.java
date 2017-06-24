import java.util.Stack;

class arraypreBST{

	boolean canbeasBST(int pre[], int n){
		Stack<integer> s = new Stack<Integer>();
		int root = Integer.MIN_VALUE;

		for(int i=0;i<n;i++)
		{
			if(pre[i] < root){
				return false;
			}

			while(!s.empty() && s.peek() < pre[i]){
				root = s.peek();
				s.pop();
			}
			s.push(pre[i]);
		}
		return true;
	}

	public static void main(String args[]){
		arraypreBST bst = new arraypreBST();
		int p1 = new int[]{50, 40, 30 , 80 , 100};
		int n = p1.length;
		if(bst.canbeasBST(p1, n) == true){
			System.out.println("true");
		} else {
			System.out.println("false");
		}
	}
}