/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
main(){
    
    int lim,x,mul,menor=0;
    
    printf("Digite o limite:\n");
    scanf("%d",&lim);
    printf("Informe o multiplo:\n");
    scanf("%d",&mul);
    
    for(x=lim+mul;x>lim;x--){
        
        if(x%mul==0){
            if(x<menor){
                menor = x;
            }else if (menor==0){
                menor = x;
            }
        }
    }
    printf("Menor multiplo de %d maior que o limite minimo de %d = %d",mul,lim,menor);
}

  
