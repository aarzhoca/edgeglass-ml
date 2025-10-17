#include "tflm_infer.h"
#include <stdio.h>
#include <stddef.h>
int tflm_init(void){ return 0; }
int tflm_run(const unsigned char* in, size_t in_len, signed char* out_emb, size_t emb_len){
  for(size_t i=0;i<emb_len;i++) out_emb[i] = (signed char)((i*3)%127);
  return 0;
}
