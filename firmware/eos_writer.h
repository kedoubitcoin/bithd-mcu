#include<stdint.h>

#define INIT_CAPACITY 256

void wirter_reset(uint8_t *pBuff) ;

void wirter_put(uint8_t b);

void wirter_put_short(uint16_t);

void wirter_put_int(uint32_t);

void wirter_put_long(uint64_t);

void wirter_put_bytes(uint8_t *, int);

void wirter_to_bytes(uint8_t *, int *);

void wirter_bytes_length(uint16_t *);

void  wirter_put_variable_uint(uint64_t val);