/* Cloudy by tudurom 
 * http://dotshare.it/dots/1154/ */

/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
    "#273941",
    "#a66363",
    "#63a690",
    "#a6a663",
    "#6385a6",
    "#BF9C86",
    "#63a69b",
    "#c0c5ce",
    "#456472",
    "#c27171",
    "#6dc2a3",
    "#bfc271",
    "#719bc2",
    "#BF9C86",
    "#71c2af",
    "#eff1f5",
    // Extra colors
	[255] = 0,
    "#101010",
};

/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
static unsigned int defaultfg = 8;
static unsigned int defaultbg = 257;
static unsigned int defaultcs = 8;
static unsigned int defaultrcs = 16;
