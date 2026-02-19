//heap is a complete binary tree which follows heap order property
//complete binary tree (CBT)-> all levels are completely filled except the last level,the last level is filled from left to right
//heap order property -> 1. Max heap->everey parent node is greater than or equal to  its children the largest element is always at root
//2. min heap- every parent node is smaller than or equal to its children the smallest element is always at top

//important -heap is not a BST

//index =0
// for any node
// left child=2* i+1;
// right child=2* i+2;
//parent=(i-1)/2

//index=1
// left child=2*i;
// right child=2*i+1;
// parent=i/2

// heapification
// n/2+1 to n is already at correct position

