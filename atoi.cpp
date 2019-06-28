int Solution::atoi(const string A) {
    
    int number= A.length();
    int i=0;
    char ch=A[i];
    int flag=0;
    int neg=0;
    int k=0;
    int flag2=0;
   for( k=0; k<number; k++)
   {
       if (A[k]=='-'||A[k]=='+')
       {
           flag2=1;
           break;
       }
   }
   if(flag2==1)
   {if(!(A[k+1]>='0'&&A[k+1]<='9'))
   return 0;}
    // if(A[j+1]<'0'&&A[j+1]>'9')
    // return 0;
    while(ch==' ')
    {
        i++;
        ch=A[i];
        if(i==number)
        {
            flag=1;
            break;
        }
        
    }
    if(flag==1)
        return 0;
    int sol=0;
    if(A[i]=='-')
    {
        neg=1;
        i++;
    }
   else if(A[i]=='+')
   {
       neg=2; i++;
   }
   else if(!(A[i]>='0'&&A[i]<='9'))
   return 0;
   
    int counter=0;
    while(A[i]>='0'&&A[i]<='9')
    {
        
        int n=0;
        n= (int)(A[i]-'0');
       // cout<<n<<endl;
        sol=sol*10+n;
        i++;
        counter++;
        //cout<<"counter="<<counter<<endl;
        if(counter==10&&sol+1<INT_MAX)
        {
            //cout<<"out of bound"<<endl;
            if(neg==0||neg==2)
           
            return INT_MAX;
            if(neg==1)
            return INT_MIN;

        }
    }
    
    //cout<<INT_MAX<<endl;
    // if(sol>INT_MAX)
    // {
    //     return INT_MAX;
    // }
    // if(sol<INT_MIN)
    // {
    //     return INT_MIN;
    // }
    if(neg==0||neg==2)
    return sol;
    else return -1*sol;
    }

