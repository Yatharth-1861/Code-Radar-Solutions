int isPrime(int num){
    int isPrime=1;
    if(num<=1){
        isPrime=0;
    }
// i<num  &&  i*i<=num  &&  i<=num/2 all these 3 works
// but i<num does not work
    for(int i=2;i<num;i++){
        if(num%i==0){
            isPrime =0;
        }
    }
    return isPrime;
}