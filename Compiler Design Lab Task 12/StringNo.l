%{
#include <stdio.h>

int string_count = 0;
%}

%%
\"[^\"]*\"   { string_count++; printf("This is string No: %d\n", string_count); }
.           { /* ignore other characters */ }
%%

int main(int argc, char **argv) {
    yylex();
    printf("End\n");
    return 0;
}

int yywrap() {
    return 1;
}