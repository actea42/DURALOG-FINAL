#ifndef LOG_RECORD_H
#define LOG_RECORD_H

#include <stdint.h>

typedef struct __attribute__((packed)) {
    uint32_t epoch;
    int16_t t_x100;
    uint16_t rh_x100;
} logrec_t;

#endif
