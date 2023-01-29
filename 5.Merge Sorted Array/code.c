void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    int final[m+n],i=0,j=0,k=0;
    while(m && n){
        if(nums1[i]>=nums2[j]){
            if(nums2[j] != 0)
                final[k++] = nums2[j++];
            n--;
        }
        else{
            if(nums1[i] != 0)
                final[k++] = nums1[i++];
            m--;
        }
    }
    while(m){
        if(nums1[i] != 0)
            final[k++] = nums1[i++];
        m--;
    }
    while(n){
        if(nums1[j] != 0)
            final[k++] = nums1[j++];
        n--;
    }
    for(int x = 0; x<k ; x++){
        nums1[x] = final[x];
    }
}
