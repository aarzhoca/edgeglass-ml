#pragma once
#include <stddef.h>
int tflm_init(void);
int tflm_run(const unsigned char* in, size_t in_len, signed char* out_emb, size_t emb_len);
