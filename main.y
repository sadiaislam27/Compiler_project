%{

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
extern FILE *yyin,*yyout; 
int i=0,sw=-1,fi=0,s[100];
int k,j,stop=0;
int els=0;
int inc=0,dec=0,g=-1,l=-1,r=-1;
int skipassgn=0;
int exitswtc=0;

void yyerror(char*);
int yylex(void); 

char func[100][100];
int fun=0;

 int vptr = 0;
    int val[1000];
    char variables[1000][1000];

	void swap(int *x,int *y)
	{
		int temp = *x;
		*x = *y;
		*y = temp;
	}
    int ifExists(char str[]){//check if a variable already exists
        int i;
        for(i = 0; i < vptr; i++){
            if(strcmp(variables[i],str) == 0) return 1;
        }
        return 0;
    }
    
    int addval(char str[],int newval){// if a variable is not already exist add new value
        if(ifExists(str) == 1) return 0;
        strcpy(variables[vptr],str);
        val[vptr] = newval;
        vptr++;
        return 1;
    }

    int getval(char str[]){//for getting value
        int idx = -1;
        int i;
        for(i = 0; i < vptr; i++){
            if(strcmp(variables[i],str) == 0) {
                idx = i;
                break;
            }
        }
        return val[idx];
    }
    int setval(char str[], int newval){
    	int idx = -1;
        int i;
        for(i = 0; i < vptr; i++){
            if(strcmp(variables[i],str) == 0) {
                idx = i;
                break;
            }
        }
        val[idx] = newval;

    }
	int swdone = 0;
	double swvar;

	int ifvar[1000];
	int ifptr = -1;
	int ifdone[1000];


%}


%union
{
	float fvalue;
	int ivalue;
	char *string;
}

%token MAIN START END RETURN INCREMENT DECREMENT 
%token INT FLOAT CHAR DOUBLE GT LT EQ NEQ SHOW IF ELIF ELSE SWITCH CASE DEF BREAK FOR WHILE DO COND SQRT GET CIN Function DIRECTIVE
%token<string> VARIABLE
%token<string> Str
%token<string> DIR
%token<fvalue> NUMBERF
%type<ivalue> exp1  if_condition else_if  assignment case default
%token<ivalue> NUMBERI


%nonassoc ELIF
%nonassoc ELSE
%left '+' '-' INCREMENT DECREMENT
%left '*' '/'
%left GT LT EQ NEQ
%nonassoc '<' '>'


%%
program:
	 MAIN DIRECTIVEs START statements END {printf("succesfully compiled\n");}
	|
	;

DIRECTIVEs: 
			DIRECTIVEs DIRECTIVE '<' DIR '>'	{printf("Directive Included\n");}
			|DIRECTIVE '<' DIR '>'	{printf("Directive Included\n");}
			;

statements:
	statements stmnt  {/*printf("valid statement 1\n");*/}
	|stmnt         {/*printf("valid statement 2\n");*/}
	| ';'
	;


stmnt:
	 declaration     {/*printf(" declaration \n");*/}
	|assignment ';'       {/*printf(" assign \n");*/}
	|RETURN ';'     {printf("\nend of program\n");}
	|output ';'   {/*printf("output\n");*/}
	|input ';'
	|Functions
	|FunctionCall ';'
	|conditions 
	|loops
	|exp1
	|'evenodd' '(' exp1 ')' ';'
				{
				int d=$3;
				  if(d%2)
				  printf("%d is odd\n",$3);
				  else
				  printf("%d is even\n",$3);

				}

    |'factorial' '(' exp1 ')' ';'
                 {
                 int k=$3,d=1,i;
                 for(i=1;i<=k;i++)
                 d=d*i;
                 printf("Factorial of %d is %d\n",$3,d);

                 }
    |'sin' '(' exp1 ')' ';'     
    			{
    			  float d=sin($3 * 3.14/180);
    			  printf("sin(%d) is %.5f\n",$3,d);
    			}     
   |'cos' '(' exp1 ')' ';'     
    			{
    			float d=cos($3* 3.14/180);
    			  printf("cos(%d) is %.5f\n",$3,d);
    			}            			   
   |'tan' '(' exp1 ')' ';'     
    			{
    			 float d=tan($3* 3.14/180);
    			  printf("tan(%d) is %.5f\n",$3,d);
    			}  
    |'log' '(' exp1 ')' ';'     
    			{
    			  float d=log($3);
    			  printf("log(%d) is %.5f\n",$3,d);
    			}   
    |SQRT '(' exp1 ')' ';'  
    			{
    			   float d=sqrt($3);
    			   printf("square root of %d is %f\n",$3,d);

    			}  
    |'power' '(' exp1 ',' exp1 ')' ';'  
    			{
    			   int d=pow($3,$5);
    			   printf("power of %d^%d is %d\n",$3,$5,d);

    			}
    |'gcd' '(' exp1 ',' exp1 ')' ';'  
    			{
    			   int i,n1,n2,gcd;
					n1=$3;
					n2=$5;
				for(i=1; i <= n1 && i <= n2; ++i)
    			  {
        
        			if(n1%i==0 && n2%i==0)
            		gcd = i;
    			   }
    			 printf("G.C.D of %d and %d is %d\n", n1, n2, gcd);
    			}  	
    |'prime' '(' exp1 ')' ';'
    			{int i, n=$3,flag=0;
    			for (i = 2; i <= n / 2; ++i) {
    					if (n % i == 0) {
      							flag = 1;
     							 break;
    								}
  						}

  					if (n == 1) {
    					printf("1 is neither prime nor composite.\n");} 
  					else {
    					if (flag == 0)
      					printf("%d is a prime number.\n", n);
   						 else
      					printf("%d is not a prime number.\n", n);}
    				}					 

	;

declaration:
     type id1 ';' ;

type: 
	INT   
	|FLOAT
	|CHAR
	|DOUBLE
	;

id1:
	id1 ',' id    {}
	|id  ;
id:
	VARIABLE                {
						int a = addval($1,0);
						if(!a) {
							printf("%s is already exist\n",$1);
							exit(-1);
						}
						else{printf("%s declared\n",$1);}
	                          } 
	|VARIABLE '=' NUMBERF   {  int a = addval($1,$3);
						if(!a) {
							printf("%s is already exist\n",$1);
							exit(-1);
							}
							else{printf("%s declared with value %f\n",$1,$3);}
	
       						}
    |VARIABLE '=' NUMBERI	{  int a = addval($1,$3);
						if(!a) {
							printf("%s is already exist\n",$1);
							exit(-1);
							}
							else{printf("%s declared with value %d  \n",$1,$3);}
	
       						}
	   						
    ;

assignment : VARIABLE '=' exp1
					{
						if(!ifExists($1)) {
							printf("%s is not declared\n",$1);
							exit(-1);
						}
						else{
							printf("%d is assigned to %s\n",$3,$1);
							setval($1,$3);
						}
				    }
			| VARIABLE '=' NUMBERF
					{
						if(!ifExists($1)) {
							printf("%s is not declared\n",$1);
							exit(-1);
						}
						else{
							printf("%f is assigned to %s\n",$3,$1);
							setval($1,$3);
						}
				    }
			     
					; 
output: 
      SHOW '(' VARIABLE ')'   { if(!ifExists($3)){
							printf("%s is not declared\n",$3);
							exit(-1);
						}
						else{
							int a = getval($3);
							printf("Value of %s is : %d\n",$3,a);
						}


                             }
		|SHOW '(' exp1 ')'
				{
					printf("%lf",$3);
				}
	   | SHOW '(' Str ')'	{
						int len = strlen($3);
						int i;
						printf("printed: ");
						for(i = 1; i < len-1; i++) 
						printf("%c",$3[i]);
						printf("\n");
	   }

	;

input:		CIN '(' VARIABLE ')'
				{
					int a;
					scanf("%d",&a);
					setval($3,a);
					printf("Input taken for %s\n",$3);
					
				}
				;


Functions: Function VARIABLE '(' param ')' '{' stmnt '}'
			{
				int a = addval($2,0);
						if(!a) {
							printf("function %s already exists\n",$2);
							exit(-1);
						}
						else{printf("Function %s declared\n",$2);}
				
				strcpy(func[fun],$2);
				//fun[i]=$2;
				fun++;
				//printf("Function Name: %s\n",$2);
				printf("Inside %s function\n",$2);
			}
			;

param:  type id2
		;

id2: id2 ',' VARIABLE
	|VARIABLE
	;

FunctionCall: VARIABLE '(' num ')'
			{
				if(!ifExists($1)) {
							printf("Function %s is not declared\n",$1);
							exit(-1);
						}
						else{
							printf("%s Function Called\n",$1);
							//setval($1,$3);
						}
			}
			;
num:num ',' NUMBERI
	|num ',' NUMBERF
	|NUMBERI
	|NUMBERF
	;


loops:
    FOR VARIABLE ':' NUMBERI 'to' NUMBERI
    START stmnt END
         {int j,k=$6-$4;
          printf("\n");
		  printf("for loop started\n");
          for (j=1;j<=k;j++)
          {
           printf("At %d no execution \n",j);
          }
		   printf("for loop ended\n");

         }
    |WHILE '<' NUMBERI LT NUMBERI '>' START stmnt  END
          {   printf("\n");
		  l=$3,r=$5;
		  printf("%d",l);
              if(l<r)
              {
				int k=1;
				
              while(l<r)
              {
              printf("At %d no. execution\n",k);
			  //printf("At %d %d\n",l,r);
			  k++;
              l++;
              }
              
              l=-1,r=-1;
              }
              else 
			  {
				printf("condition not satisfied for while loop\n");
			  }
             
          }
	|WHILE '<' NUMBERI GT NUMBERI '>' START stmnt END
          {   printf("\n");
		  l=$3,r=$5;
              if(l>r)
              {
				int k=1;
              while(l>r)
              {
              printf("At %d no. execution\n",k);
			  k++;
              l--;
              }
              
              l=-1,r=-1;
              }
              else 
			  {
				printf("condition not satisfied for while loop\n");
			  }
             
          }
	;

conditions:
     if_condition 	{
     					printf("If block executed\n");

     					}
    |switch_condition 		{
    						printf("switch block ended\n");

    						}
    ;


switch_condition:
		SWITCH '<' exp1 '>' ':' 
		{
		
		sw=$3;
		
		skipassgn=1;
		exitswtc=0;
		}
		START 
		 cases

		 END
		 ;

  cases :
     cases case 
     |cases default
     |case   
     ;

case :
    CASE '(' exp1 ')' ':' 
    {
    if($3==sw)
    {
    printf("case %d is true \n",$3);
      skipassgn=0;
      exitswtc=1;
    }
	else{
		 printf("case %d is false \n",$3);
	}
    }
	assignment 
     {
		printf("statement\n");
    // printf("sw2.5 %d  %d \n",skipassgn,exitswtc);      
     }
 BREAK 
    {
		printf("b\n");
    if(exitswtc)
    {
    printf("sw3 \n");
     //printf("%d\n",$3);
     skipassgn=1;     
    }
    }
    ;
 default:
   DEF ':'
   {
   if(exitswtc==0)
   {
	skipassgn=0;
	printf("Default case \n");
   }  
   }
	assignment
	 BREAK
   {
   //printf("sw5 \n");
     // printf("%d\n",$2);
     skipassgn=0;
     exitswtc=0;
	// break;
   }
   ;  
    
if_condition:
    IF '<' ifexp '>' '{' statements '}' 
              { ifdone[ifptr] = 0;
							ifptr--;
              }  
	|IF '<' ifexp '>' '{' statements '}' else_if
              { ifdone[ifptr] = 0;
							ifptr--;
              }     
    ; 

ifexp:   	exp1 
						{
							ifptr++;
							ifdone[ifptr] = 0;
							if($1){
								printf("If block: True\n");
								ifdone[ifptr] = 1;
							}
							else
							{
								printf("If block: False\n");
							}
						}
				;

else_if:
      ELIF '<' exp1  '>' '{' statements '}'
     {
     		if($3 && ifdone[ifptr] == 0)
     		{
				printf("Else if block: True\n");
								ifdone[ifptr] = 1;
			printf("elif executed\n");
     		
     		}
     		else
     		{  
     		 printf("Else if block: False\n");
     		
     		}

     		}  
	|ELIF '<' exp1  '>' '{' statements '}' ELSE '{' statements '}'
     {
     		if($3 && ifdone[ifptr] == 0)
     		{
				printf("Else if block: True\n");
								ifdone[ifptr] = 1;
			printf("elif executed\n");
     		
     		}
     		else
     		{  
     		 printf("Else if block: False\n");
     		
     		}

     		}  
	|ELSE '{' statements '}'
			{
				if(ifdone[ifptr] == 0){
								printf("Else block: True\n");
								ifdone[ifptr] = 1;
							}
							else
							{
								printf("Else block: False\n");
							}
          
            }
     ;	


exp1:	
    NUMBERI                { $$ = $1;
								//printf(" exp1 %d \n",$1);
								} 	
	|VARIABLE 
					{
						if(!ifExists($1)) {
							printf("%s is not declared\n",$1);
							exit(-1);
						}
						else{
							$$ = getval($1);
						}
					}					
	| exp1 '+' exp1            {$$ = $1 + $3;
	 						//printf("PLUS \n");
	 						}
	|exp1 '-' exp1            {$$ = $1 - $3;
							//printf("MINUS \n");
							}
	|exp1 '*' exp1            {$$ = $1 * $3;
							//printf("MUL \n");
							}
	|exp1 '/' exp1            {$$ = $1 / $3;
							//printf("DIV \n");
							}

	|exp1 GT exp1            {$$ = $1 > $3; 
	                           l=$1;
	                           r=$3;
	                           g=1;
							//printf("GT \n");
							}
	|exp1 LT exp1            {$$ = $1<$3;
	                           l=$1;
	                           r=$3;
							//printf("DIV \n");
							}							
	|exp1 EQ exp1            {$$ = $1== $3;
							   l=$1;
	                           r=$3;
							//printf("DIV \n");
							}
	|exp1 NEQ exp1           {$$ = $1!= $3;
							  l=$1;
	                          r=$3;
							//printf("DIV \n");
							}
    |'(' exp1 ')'			{$$=$2;
                             //printf("DIV \n");
                             }                           								
	
	;
	

%%
int yywrap()
{
    return 1;
}

int main(void)
{
   yyin=freopen("in.txt","r",stdin);
	yyout=freopen("out.txt","w",stdout);

    yyparse();

    fclose(yyin);
   	fclose(yyout);
    return 0;
}
void yyerror( char *s)
{
    printf("%s\n",s);
}
