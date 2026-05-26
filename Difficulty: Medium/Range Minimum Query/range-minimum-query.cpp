/* The functions which
builds the segment tree */
void builtTree(int i,int l,int r, int segmentTree[], int arr[]){
    if(l == r) {
        segmentTree[i] = arr[l];
        return;
    }
    int mid = (l+r)/2;
    builtTree(2*i+1, l, mid, segmentTree, arr);
    builtTree(2*i+2, mid + 1, r, segmentTree, arr);
    
    segmentTree[i] = min(segmentTree[2*i+1] , segmentTree[2*i+2]);
}


int *constructST(int arr[], int n) {
    int* segmentTree = new int[4 * n];
    builtTree(0, 0, n - 1, segmentTree, arr);
    return segmentTree;
    
}

int rangeSum(int start, int end, int i, int l, int r,int segmentTree[]){
        if(r<start || l>end){
            return INT_MAX;
        }
        else if(l>=start && r<=end){
            return segmentTree[i];
        }
        else{
            int mid = (l+r)/2;
            return min(rangeSum(start, end, 2*i+1, l, mid,segmentTree), 
            rangeSum(start, end, 2*i+2, mid+1, r,segmentTree));
        }
    }


int RMQ(int st[], int n, int a, int b) {
    return rangeSum(a,b,0,0,n-1,st);
}