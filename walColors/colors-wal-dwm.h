static const char norm_fg[] = "#d7d7c7";
static const char norm_bg[] = "#0a0a0a";
static const char norm_border[] = "#96968b";

static const char sel_fg[] = "#d7d7c7";
static const char sel_bg[] = "#ABCA6C";
static const char sel_border[] = "#d7d7c7";

static const char urg_fg[] = "#d7d7c7";
static const char urg_bg[] = "#98AC6E";
static const char urg_border[] = "#98AC6E";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
