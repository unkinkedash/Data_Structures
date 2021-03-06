#ifndef MINHEAP
#define MINHEAP

class MinHeap {
    public:
        /**
		 * This constructor builds a Heap and Heapfies it.
         * Also gives the time enlapsed for Building it
		 * @author Lucas Fiorini Braga
		 * 
		 * @param cap The capacity of the heap
         * and bool option to use random values.
		 */
        MinHeap(int cap, bool rand);
		
        /**
		 * This destructor free up the memory.
		 * @author Lucas Fiorini Braga
		 */
	    ~MinHeap();

        /**
		 * This method print the Heap as it is into the array
		 * @author Lucas Fiorini Braga

		 * @return void.
		 */
	    void print();
		
	   /**
		* This method insert decreasing order elements into
		* the array. Also calls heapUp(int i) after each insertion
		* @author Lucas Fiorini Braga

		* @param data to be inserted
		* @return void
		*/
		void insert(int d);
		/**
		 * This method insert random elements into the array
		 * For each element the heapUp method is called so the structure can
		 * represent a min heap properly.
		 * @author Lucas Fiorini Braga
		 *
		 * @param amount of data to be inserted
		 * @return void
		 */
		void insertRandom(int d);

		/**
		 * Constructor overload that only initialize the
		 * class attributes
		 * @author Lucas Fiorini Braga
		 *
		 * @param capacity of the array
		 * @return void
		 */
		MinHeap(int cap);

		/**
		 * This static method merge two min heaps into one
		 * Both of the heaps remain the same
		 * @author Lucas Fiorini Braga
		 * @param pointer to first heap be merged
		 * @param pointer to second heap to me merged
		 * @return address of the new min heap
		 */
		static MinHeap* meld(MinHeap* first, MinHeap* second);
private:
    int* array;
    //heap capacity
    int capacity;

    /**
     * This method changes two values of
     * the object's array
     * @author Lucas Fiorini Braga

     * @param x y Both integer values that represents
     * the array position to be swapped.
     * @return void.
     */
    inline void swap(int x, int y);

    /**
     * This method is used to find left son
     * of a given node, the value can be wrong
     * indicating that there is no left son.
     * @author Lucas Fiorini Braga

     * @param i The array index representing
     * the node.
     * @return The index of the left son.
     */
    inline int leftSon(int i);

    /**
     * This method is used to find right son
     * of a given node, the value can be wrong
     * indicating that there is no right son.
     * @author Lucas Fiorini Braga

     * @param i The array index representing
     * the node.
     * @return The index of the rigth son.
     */
    inline int rightSon(int i);

    /**
     * This method is a recursive way to verify
     * the necessity to swap in between father and son
     * respectively.
     * @author Lucas Fiorini Braga

     * @param i The array index representing
     * the father node.
     * @return void.
     */
    void heapfy(int i);

    /**
     * This method shift up the son nodes that are
     * smaller than it's father. It calls itself resursiveley
     * for every time a son is smaller than it's father
     * @author Lucas Fiorini Braga

     * @param index of the son
     * @return void
     */
    void heapUp(int i);

    /**
     * This method returns the father's index of a
     * given son
     * @author Lucas Fiorini Braga

     * @param integer index of the son
     * @return father index
     */
    inline int father(int i);
};

#endif
