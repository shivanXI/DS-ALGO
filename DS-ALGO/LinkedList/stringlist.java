class LinkedList{
	Node head;
	static Node a, b;

   static class Node{
	      char data;
	      Node next;

	    Node(char d){


	    	data =d;
	    	next = null;
	    }
	}

	int compare(Node node1, Node node2){
		if(node1 == null && node2 == null){
			return 1;
		}

		while(node1 != null && node2 != null && node1.data == node2.data){
			node1 = node1.next;
			node2 = node2.next;
		}

		if(node1 != null && node2 != null){
			return (node1.data > node2.data ? 1 : -1);
		}

		if(node1 != null && node2 == null){
			return 1;
		}

		if(node1 == null && node2 != null){
			return -1;
		}

		return 0;
	}

	
}