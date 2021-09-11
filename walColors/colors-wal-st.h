const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0a0a0a", /* black   */
  [1] = "#98AC6E", /* red     */
  [2] = "#ABCA6C", /* green   */
  [3] = "#677180", /* yellow  */
  [4] = "#558E9D", /* blue    */
  [5] = "#5590A3", /* magenta */
  [6] = "#7CC68B", /* cyan    */
  [7] = "#d7d7c7", /* white   */

  /* 8 bright colors */
  [8]  = "#96968b",  /* black   */
  [9]  = "#98AC6E",  /* red     */
  [10] = "#ABCA6C", /* green   */
  [11] = "#677180", /* yellow  */
  [12] = "#558E9D", /* blue    */
  [13] = "#5590A3", /* magenta */
  [14] = "#7CC68B", /* cyan    */
  [15] = "#d7d7c7", /* white   */

  /* special colors */
  [256] = "#0a0a0a", /* background */
  [257] = "#d7d7c7", /* foreground */
  [258] = "#d7d7c7",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
