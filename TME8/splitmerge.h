#include <glib.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int ix, iy, x, y;
  int n;
  float mu, var;
  GSList *merged; // utilisé uniquement par merge
} region;

/* Fonctions utiles pour la phase split (TME 8) */
int    predsplit           (region *reg, float threshold);
GNode *split               ( unsigned char *buf, int dimx, int dimy,
			     float threshold, int xmin, int ymin);
void   split_print_regions ( GNode *qt);
void   split_segment       ( GNode *qt, unsigned char *buf, int dimx);

void count_region(GNode* qt, int* count);


/* fonctions utiles pour la phase merge (TME 9) */
GSList *merge_list_regions ( GNode *qt);
int     predmerge          ( region *a, region *b, float threshold);
GSList *merge              ( GSList *reg, float threshold);
void    merge_segment      ( GSList *reg, unsigned char *buf, int dimx);
