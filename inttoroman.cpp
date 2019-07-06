// Symbol       Value
// I             1
// V             5
// X             10
// L             50
// C             100
// D             500
// M             1000

string Solution::intToRoman(int B) {
    int A=B;
    int unit9=(B%10==9)?1:0;
    B/=10;
    int ten9=(B%10==9)?1:0;
    B/=10;
    int hundred9=(B%10==9)?1:0;
    int arr[7];
    int d=0;
    d=A%10;
    arr[1]=d/5;
    d=d%5;
    arr[0]=d;
    A=A/10;
    d=A%10;
    arr[3]=d/5;
    d=d%5;
    arr[2]=d;
    A=A/10;
    d=A%10;
    arr[5]=d/5;
    d=d%5;
    arr[4]=d;
    A=A/10;
    arr[6]=A;
    if(unit9) {arr[0]=0; arr[1]=0;}
    if(ten9) {arr[2]=0; arr[3]=0;}
    if(hundred9) {arr[4]=0; arr[5]=0;}
    char rom[7];
    rom[0]='I';
    rom[1]='V';
    rom[2]='X';
    rom[3]='L';
    rom[4]='C';
    rom[5]='D';
    rom[6]='M';
    string roman="";
    for(int i =0; i<7; i++)
    {
        if(arr[i]==4&&i==0&&(!unit9))
        {
            roman="IV";
        }
        else if(arr[i]==4&&i==2&&(!ten9))
        {
            roman="XL"+roman;
        }
        else if(arr[i]==4&&i==4&&(!hundred9))
        {
            roman="CD"+roman;
        }
        else if(unit9&&i==1)
        {
            roman="IX"+roman;
        }
         else if(ten9&&i==3)
        {
            roman="XC"+roman;
        }
         else if(hundred9&&i==5)
        {
            roman="CM"+roman;
        }
        // else if(arr[i]==4&&i==4)
        // {
        //     roman="CD"+roman;
        // }
        else if(arr[i]>0)
        {
            int k=arr[i];
            while(k>0)
            {
                roman=rom[i]+roman;
                k--;
            }
        }
    }
    return roman;
    
}
