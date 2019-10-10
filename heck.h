#define BUFFSIZE 32

int readToken();
void evaluate();
void print();
void accept(int token);
int select(char op);

// lex states
#define GEOF 0
#define IDLE 1
#define BFULL 2
#define RESOLVE 3

