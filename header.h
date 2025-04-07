int factorial(int m ){
    int product= 1;
    for(int i =m;i>=1;i--){
        product*=i;
    if(i==1){
        break;
    }   
    }
    
    return product;
}

int calculatesum(int n,int a[]){
    int sum=0;
    a[n];
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    return sum;
}

int perfect(int n){
    int sub=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sub+=i;
        }
        
    }
    return sub;
}

