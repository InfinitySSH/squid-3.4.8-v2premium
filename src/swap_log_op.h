#ifndef _SQUID_SWAP_LOG_OP_H
#define _SQUID_SWAP_LOG_OP_H

typedef enum {
    SWAP_LOG_NOP,
    SWAP_LOG_ADD,
    SWAP_LOG_DEL,
    SWAP_LOG_VERSION,
    SWAP_LOG_MAX
} swap_log_op;

extern const char *swap_log_op_str[];

#endif /* _SQUID_SWAP_LOG_OP_H */
