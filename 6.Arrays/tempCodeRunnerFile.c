for(int i=0; i<=6; i++){
        if(max<arr[i]){
        max = arr[i];
        }
    }
    for(int i=0; i<=6; i++){
        if(arr[i]!=max && smax<arr[i]){
            smax = arr[i];
        }
    }