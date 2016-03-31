/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
    "#101010", //black
    "#E84F4F", //red
    "#B8D68C", //gren
    "#E1AA5D", //yellow
    "#7DC1CF", //blue
    "#9B64FB", //magenta
    "#6D878D", // cyan
    "#dddddd", //white
    "#404040",
    "#D23D3D",
    "#A0CF5D",
    "#F39D21",
    "#4E9FB1",
    "#8542FF",
    "#42717B",
    "#dddddd",
    // Extra colors
	[255] = 0,
    "#151515",
    "#AF875F",
    "#8FA388",
};

//static const int alpha = 0xf9;

/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
static unsigned int defaultfg = 247;
static unsigned int defaultbg = 256;
static unsigned int defaultcs = 257;
static unsigned int defaultrcs = 258;
