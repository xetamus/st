/* fyry by fyr
 * http://dotshare.it/dots/1156/ */

/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
    "#14161A",
    "#8C5760",
    "#7B8C58",
    "#B28C55",
    "#58698C",
    "#B23450",
    "#737373",
    "#D7D7D7",
    "#14161A",
    "#8C5760",
    "#7B8C58",
    "#B28C55",
    "#58698C",
    "#B23450",
    "#737373",
    "#D7D7D7",
    // Extra colors
	[255] = 0,
    "#03070B",
};

/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
static unsigned int defaultfg = 7;
static unsigned int defaultbg = 256;
static unsigned int defaultcs = 7;
static unsigned int defaultrcs = 2;
