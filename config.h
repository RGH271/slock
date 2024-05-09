/* user and group to drop privileges to */
static const char *user  = "robert";
static const char *group = "wheel";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#31748F",   /* during input */
	[INPUT_ALT] = "#9CCFD8", /* during input, second color */
	[FAILED] = "#EB6F92",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
