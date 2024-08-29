    // int j=i*2;                   // this has been optimised; in line below;
            int j=i*i;
            while(j<=n){
                sieve[j]=0;
                j=j+i;
            }