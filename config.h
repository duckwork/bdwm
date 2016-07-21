#define MOD		ALT /* modifier for mouse resize and move */

/* INNER + OUTER should not be greater than BORDERWIDTH */
#define OUTER			3
#define BORDERWIDTH		5
#define INNER			(BORDERWIDTH - OUTER)

/* colors */
#define FOCUSCOL	0xFFFF00
#define UNFOCUSCOL	0x000080
#define OUTERCOL	0x111111

/* resize and move by mouse? */
#define ENABLE_MOUSE
/* sloppy focus? */
#define ENABLE_SLOPPY
/* and double borders? */
#define DOUBLE_BORDER
