%{
#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "bison.tab.h"
#include "cgen.h"

int line_num = 1 ;

%}

DIGIT [0-9]
NUMBER {DIGIT}{DIGIT}*
ID    [a-zA-Z][_a-zA-Z0-9]*  
REAL  {NUMBER}(".")(({NUMBER}[eE][+-]?{NUMBER})|{NUMBER})
STRING ('[^'\n]*')|(\"[^'\n]*\") 

%x comment
%x singlecom

%%

and	return AND; 
or  return OP_OR; 
not return NOT; 
true return TRUE; 
false return FALSE;
if return IF; 
fi return FI; 
else return ELSE; 
while return WHILE; 
bool return BOOL; 
char return CHAR;
real return REAL;	
int return INT; 
string return STR;	
loop return LOOP;  
pool return POOL; 
const return CONST; 
let return LET; 
break return BR;
return return RET;
start return START; 
then return THEN;

{ID}  	    		{ yylval.reg = strdup(yytext); return ID; }
{NUMBER}			{ yylval.reg = strdup(yytext); return POSINT; }
{REAL}				{ yylval.reg = strdup(yytext); return RL; }
{STRING}			{ yylval.reg = strdup(yytext); return STRING; }

"=>"    return ARROW;
"<="	return LST;
"!="	return DIFF; 
"<-"	return ASSIGN; 
"="		return EQ; 
"+"		return OP_PLUS; 
"-"		return OP_MIN; 
"("		return L_PAR; 
")"		return R_PAR; 
"/"		return DIV; 
"*"		return OP_MUL; 
";"		return SEMICOLON; 
":"		return COLON; 
"%"		return MOD; 
"["		return '[';
"]"		return ']'; 
","		return ','; 
"<"		return '<'; 
" "		; 
">"		return GT;
"{"		return L_BRAC;
"}"		return R_BRAC;

"//"	BEGIN(singlecom);

[ \t\r]*				;	
"--"[^\n]*  	/* eat line comments */
"(*"					BEGIN(comment);
<comment>[^*\n]*        /* eat anything that's not a '*' */
<comment>"*"+[^*)\n]*   /* eat up '*'s not followed by ')'s */
<comment>\n             ++line_num;
<comment>"*"+")"        BEGIN(INITIAL);


\n 						++line_num;

<<EOF>>     return EOF;
.        { yyerror("lexical error: unrecognized literal '%s'\n", yytext); }

%%

int yywrap(void)
{
	return 1;
}