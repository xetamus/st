/* Relic Dark by stark
 * http://dotshare.it/dots/1039/ */

/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
    "#101010",
    "#E84F4F",
    "#B8D68C",
    "#E1AA5D",
    "#7DC1CF",
    "#9B64FB",
    "#6D878D",
    "#dddddd",
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
    "#8FA388",
    "#1D2426",
    "#BE5E1E"
};

/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
static unsigned int defaultfg = 256;
static unsigned int defaultbg = 257;
static unsigned int defaultcs = 258;
static unsigned int defaultrcs = 16;
