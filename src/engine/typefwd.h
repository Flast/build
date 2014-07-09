/* object.h */
typedef struct _object OBJECT;

/* lists.h */
typedef struct _list LIST;
typedef OBJECT * * LISTITER;
typedef struct _lol LOL;

/* function.h */
typedef struct _function FUNCTION;
typedef struct _stack STACK;

/* parse.h */
typedef struct _PARSE PARSE;

/* frames.h */
typedef struct frame FRAME;

/* modules.h */
typedef struct module_t module_t ;

/* scan.h */
#define YYSTYPE YYSYMBOL
typedef struct _YYSTYPE YYSTYPE;
