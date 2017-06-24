import java.util.NoSuchElementException;



public class Graph{
	private static final String NEWLINE = System.getProperty("line.separator");
	private final int V;
	private int E;
	private Bag<Integer>[] adj;



public  Graph(int V){
	if(V < 0) throw new IllegalArgumentException("Number of vertices will be non-negative");
	this.V = V;
	this.E = 0;
	adj = (Bag<Integer> []) new Bag[V];
	for(int v = 0;v<V;v++){
		adj[v]  = new Bag<Integer>();
	}
 }

public Graph(In in){
	try{
		this.V = in.readInt();
		if(V<0) throw new IllegalArgumentException("vertices should not be negative");
		adj = (Bag<Integre>[]) new Bag[V];
		for(int v = 0; v<V; v++){
			adj[v] = new Bag<Integer>();
		}
		int E = in.readInt();
		if(E < 0) throw new IllegalArgumentException("no. of edges in a graph must be non-negative"){
			for(int  i = 0;i<E;i++){
				int v = in.readInt();
				int w = in.readInt();
				validateVertex(v);
				validateVertex(w);
				addEdge(v,w);
			}
		}
	
	}catch(NoSuchElementException e){
		throw new IllegalArgumentException("Invalid input format in Graphconstructor")
	}
}


public Graph(Graph G){
	this(G.V());
	this.E = G.E();
	for(int v = 0; v < G.V(); v++){

		
	}
}





}