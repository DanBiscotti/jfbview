/* framebuffer depth */
typedef unsigned int fbval_t;

/* optimized version of fb_val() */
#define FB_VAL(r, g, b)	fb_val((r), (g), (b))

struct doc *doc_open(char *path);
int doc_pages(struct doc *doc);
int doc_draw(struct doc *doc, fbval_t *bitmap, int page, int rows, int cols, int zoom, int rotate);
void doc_close(struct doc *doc);
/* Retrieves the width and height of the previously drawn page of the document
 * in pixels. */
void doc_geometry(struct doc *doc, int *rows, int *cols);
