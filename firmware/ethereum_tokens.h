/*
 * This file is part of the TREZOR project, https://trezor.io/
 *
 * Copyright (C) 2014 Pavol Rusnak <stick@satoshilabs.com>
 *
 * This library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __ETHEREUM_TOKENS_H__
#define __ETHEREUM_TOKENS_H__

#include <stdint.h>

#define TOKENS_COUNT 125

typedef struct {
    uint8_t chain_id;
    char   address[20];
    char   ticker[32];
    int decimals;
} TokenType;

extern const TokenType tokens[TOKENS_COUNT];

extern TokenType *UnknownToken;

TokenType *tokenByChainAddress(uint8_t chain_id, const uint8_t *address);

#endif
