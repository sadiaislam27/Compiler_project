%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include <math.h>
	#include "main.tab.h"
    void yyerror(char* );
%}

digit [0-9]
variable [a-zA-Z][a-zA-Z0-9]*
dir_name [a-zA-Z]+"."[a-z]

%%
[-+]?{digit}+				{yylval.ivalue=atoi(yytext);
					 			return NUMBERI;}
[-+]?{digit}*"."{digit}+		{yylval.fvalue=atof(yytext);
					 			return NUMBERF;}



[ \t\n]      {;}
";"	       {return *yytext;}
","	       {return *yytext;}



"function main()" {return MAIN;}
"directive"		{return DIRECTIVE;}
"start"		      {return START;}
"end"		      {return END;}
"rtn"		      {return RETURN;}
"iff"             {return IF;}
"elif"            {return ELIF;}
"else"            {return ELSE;}
"switch"          {return SWITCH;}
"case"            {return CASE;}
"default"         {return DEF;}
"break"           {return BREAK;}
"for"		      {return FOR;}
"while"			  {return WHILE;}
"evenodd"		  {return *yytext;}
"factorial"		  {return *yytext;}
"prime"			  {return *yytext;}
"sin"		      {return *yytext;}
"cos"		      {return *yytext;}
"tan"		      {return *yytext;}
"log"		      {return *yytext;}
"squaroot"		  {return SQRT;}
"power"		      {return *yytext;}
"gcd"		      {return *yytext;}

"take"		{return CIN;}
"func"		{return Function;}

"integer" 	{return INT;}
"float"   	{return FLOAT;}
"character"	{return CHAR;}
"double" 	{return DOUBLE;}
"show"		{return SHOW;}
"condition"	{return COND;}

"**-"[^*]+"-**"	{printf("\nThis is comment: %s\n",yytext);}

[-+*/()#<> @ : {} << >>]    {return *yytext;}
"inc"         {return INCREMENT;}
"dec"		  {return DECREMENT;}
"="           {return *yytext;}
"->"           {return *yytext;}
"to"           {return *yytext;}
"gt"		  {return GT;}
"lt"		  {return LT;}
"eq"		  {return EQ;}
"neq"		  {return NEQ;}


{variable} {yylval.string=strdup(yytext);
			return VARIABLE;}
{dir_name} {yylval.string=strdup(yytext);
			return DIR;}
"\""(.)*"\"" {strcpy(yylval.string,yytext);
			return Str;}


.           yyerror("Invalid input character");
%%