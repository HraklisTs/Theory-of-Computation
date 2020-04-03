%{
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>		
#include "cgen.h"


char* checkDiv;

extern int yylex(void);
extern int line_num;

%}
%union{
	char* reg;
}

%define parse.error verbose


%token <reg> GT
%token <reg> L_BRAC
%token <reg> R_BRAC
%token <reg> AND
%token <reg> STRING
%token <reg> OP_OR 
%token <reg> NOT 
%token <reg> TRUE 
%token <reg> FALSE
%token <reg> IF 
%token <reg> FI
%token <reg> ELSE 
%token <reg> WHILE
%token <reg> BOOL 
%token <reg> CHAR
%token <reg> RL
%token <reg> POSINT 
%token <reg> ID
%token <reg> STR	
%token <reg> LOOP  
%token <reg> POOL 
%token <reg> CONST 
%token <reg> LET 
%token <reg> BR
%token <reg> RET
%token <reg> START 
%token <reg> LST 
%token <reg> ASSIGN 
%token <reg> EQ
%token <reg> OP_PLUS 
%token <reg> OP_MIN 
%token <reg> L_PAR 
%token <reg> R_PAR 
%token <reg> DIV 
%token <reg> OP_MUL 
%token <reg> SEMICOLON 
%token <reg> COLON 
%token <reg> MOD 
%token <reg> DIFF 
%token <reg> EAR
%token <reg> ARROW
%token <reg> INT
%token <reg> REAL
%token <reg> THEN

%left '[' ']' L_PAR R_PAR L_BRAC R_BRAC
%left '<' GT NEG

%precedence EXPREC

%start program

%type <reg> decl_list_statement decl_list body 
%type <reg> func_decl func_call func_args func_param param_type func_body
%type <reg> statement_list statement oth_statement 
%type <reg> data_type type_spec case_comma array decl_array
%type <reg> expressions exp_type ret
%type <reg> if_case while_case 

%%

program: decl_list CONST START ASSIGN L_PAR R_PAR COLON type_spec ARROW L_BRAC body R_BRAC 

{ 
/* We have a successful parse! 
  Check for any errors and generate output. 
*/
	if(yyerror_count==0) {
	  puts(c_prologue); 
	  printf("/* program */ \n\n");
	  printf("%s", $1);		//print decl_list
	  printf("\n\nint main() {\n%s\n} \n", $11);
	}
};


decl_list_statement: CONST case_comma COLON type_spec 					{ $$ = template("const %s = %s", $2, $4);}
		 | CONST ID ASSIGN data_type COLON type_spec  					{ $$ = template("const %s %s = %s", $6,$2,$4); }
		 | LET case_comma COLON type_spec 								{ $$ = template("%s %s ",$4, $2); }
		 | LET case_comma ASSIGN expressions COLON type_spec  			{ $$ = template("%s %s = %s",$6, $2, $4); }
		 | LET decl_array												{ $$ = template("%s",$2); }
		 | func_decl													{ $$ = template("%s",$1); }


decl_list: decl_list_statement SEMICOLON 			{ $$ = template("%s;", $1); }
		 | decl_list decl_list_statement SEMICOLON	{ $$ = template("%s\n%s;", $1, $2 ); }



func_decl: CONST ID ASSIGN L_PAR func_param R_PAR COLON type_spec ARROW L_BRAC func_body R_BRAC 	{ $$ = template("%s %s(%s) {\n%s\n}",$8,$2,$5,$11); }


func_call: ID L_PAR func_args R_PAR { $$ = template("%s(%s)", $1, $3); }


func_args: { $$ = "";}
		  | func_args ',' case_comma		{ $$ = template("%s, %s", $1,$3); }
		  |expressions						{ $$ = template("%s", $1); }

func_param: { $$ = "";}
			| param_type						{ $$ = template("%s", $1); }
			| func_param ',' param_type			{ $$ = template("%s, %s", $1,$3); }
		  	|expressions						{ $$ = template("%s", $1); }

param_type: ID COLON type_spec			{ $$ = template("%s %s", $3,$1); }
			|array COLON type_spec		{ $$ = template("%s %s", $3,$1); }
			| ID ',' param_type			{ $$ = template("%s, %s", $1,$3); }


func_body: statement_list		{ $$ = template("%s", $1); }


body: statement_list 			{ $$ = template("%s", $1); }



statement_list: statement SEMICOLON						{ $$ = template("   %s; \n", $1); }
				|statement_list statement SEMICOLON		{ $$ = template("%s \n   %s; \n",$1 ,$2); }

statement: func_call						{ $$ = template("%s", $1); }
		  | ID ASSIGN expressions			{ $$ = template("%s = %s", $1,$3); }
		  | decl_list_statement				{ $$ = template("%s", $1); }
		  | oth_statement					{ $$ = template("%s", $1); }


oth_statement:if_case 			{ $$ = template("%s", $1); }
			 | while_case		{ $$ = template("%s", $1); }
			 | ret 				{ $$ = template("%s", $1); }




data_type: POSINT		{ $$ = template("%s",$1); }
		 | RL 			{ $$ = template("%s",$1); }
		 | ID 			{ $$ = template("%s",$1); }


type_spec: INT 			{ $$ = template("int");}
		  | REAL		{ $$ = template("double");}
		  | BOOL		{ $$ = template("int");}
		  | STRING 		{ $$ = template("%s",$1);}




case_comma: ID 						{ $$ = template("%s",$1); }
		   | case_comma ',' ID 		{ $$ = template("%s,%s", $1, $3); }



decl_array: ID '[' POSINT ']' COLON type_spec SEMICOLON		{ $$ = template("$s $s[$s];", $6, $1, $3); }

array: ID '[' POSINT ']'		{ $$ = template("%s[%s]", $1,$3); }



expressions: exp_type							%prec EXPREC
			| NOT expressions												{ $$ = template("not%s", $2); }	
			| OP_PLUS expressions											{ $$ = template("+%s", $2); }
			| OP_MIN expressions											{ $$ = template("-%s", $2); }
			| expressions MOD expressions									{ $$ = template("%s %% %s", $1, $3); }
			| expressions DIV expressions						{ {checkDiv = $3;};if(strcmp(checkDiv,"0")) $$ = template("%s / %s", $1, $3);else{yyerror("Division by zero"); YYABORT;}; }

			| expressions OP_MUL expressions					{ $$ = template("%s * %s", $1, $3); }
			| expressions OP_PLUS expressions					{ $$ = template("%s + %s", $1, $3); }
			| expressions OP_MIN expressions	%prec NEG		{ $$ = template("%s - %s", $1, $3); }
			| expressions LST expressions						{ $$ = template("%s <= %s", $1, $3); }
			| expressions DIFF expressions						{ $$ = template("%s != %s", $1, $3); }
			| expressions EQ expressions						{ $$ = template("%s == %s", $1, $3); }
			| expressions '<' expressions				{ $$ = template("%s < %s", $1, $3); }
			| expressions OP_OR expressions				{ $$ = template("%s || %s", $1, $3); }
			| expressions AND expressions				{ $$ = template("%s && %s", $1, $3); }	
			| L_PAR expressions R_PAR					{ $$ = template("(%s)",$2); }



exp_type: data_type			{ $$ = template("%s",$1); }
		| type_spec			{ $$ = template("%s",$1); }
		| TRUE				{ $$ = template("1");}
		| FALSE				{ $$ = template("0");}
		| func_call			{ $$ = template("%s",$1); }





ret:  RET 				{ $$ = template("return "); }
	| RET expressions	{ $$ = template("return %s ", $2); }


if_case: IF expressions THEN statement_list FI							{ $$ = template("if (%s){\n\t%s\n}\n", $2, $4);}
		|IF expressions THEN statement_list ELSE statement_list FI 		{ $$ = template("if (%s){\n\t%s\n}\n else {\n\t%s\n}\n", $2, $4,$6);}	


while_case: WHILE expressions LOOP statement_list POOL 				{ $$ = template("while (%s){\n\t%s\n}", $2 , $4); }



%%


int main()
{
  if ( yyparse() != 0 )
    printf("Rejected!\n");
}