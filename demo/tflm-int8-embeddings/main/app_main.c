#include <stdio.h>
#include "tflm_infer.h"
void app_main(void){
  printf("[demo] TFLM int8 embeddings demo start\n");
  unsigned char in[1024]={0}; signed char emb[64]={0};
  if(tflm_init()!=0){ printf("init fail\n"); return; }
  if(tflm_run(in,sizeof(in),emb,64)!=0){ printf("run fail\n"); return; }
  printf("[demo] embedding: ");
  for(int i=0;i<64;i++) printf("%d ", (int)emb[i]);
  printf("\n[demo] done\n");
}
