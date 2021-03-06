#ifndef __EOS_H__
#define __EOS_H__

#include <stdint.h>
#include <stdbool.h>
#include "bip32.h"
#include "messages.pb.h"
#include "eos_reader.h"

void eos_signing_init(EOSSignTx *msg, const HDNode *node);

void eos_signing_abort(void);

void eos_signing_txack(EOSTxAck *msg);

bool confirm_action(EosReaderCTX *ctx);

#endif