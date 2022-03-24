#include "def.h"
extern FILE *yyin;
extern int yylineno;
int main(int argc, char *argv[])
{
    yyin = fopen(argv[1], "r");
  //  YY_BUFFER_STATE bp = yy_scan_string(argv[1]);
  //yy_scan_string(argv[1]);
    yylineno = 1;
    yyparse();
    return 0;
}
