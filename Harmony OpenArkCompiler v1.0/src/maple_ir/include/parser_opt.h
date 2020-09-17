/*
 * Copyright (c) [2019] Huawei Technologies Co.,Ltd.All rights reserved.
 *
 * OpenArkCompiler is licensed under the Mulan PSL v1.
 * You can use this software according to the terms and conditions of the Mulan PSL v1.
 * You may obtain a copy of Mulan PSL v1 at:
 *
 *     http://license.coscl.org.cn/MulanPSL
 *
 * THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT, MERCHANTABILITY OR
 * FIT FOR A PARTICULAR PURPOSE.
 * See the Mulan PSL v1 for more details.
 */
#ifndef MAPLE_IR_INCLUDE_PARSER_OPT_H
#define MAPLE_IR_INCLUDE_PARSER_OPT_H
#include "types_def.h"

namespace maple {
// option bits passed into ParseMIR
enum ParserOptions: uint8 {
  kInvalidOption = 0x0,
  kWithDbgInfo = 0x1,  // collect dbginfo
  kKeepFirst = 0x2,    // ignore second type def, not emit error
  kWithProfileInfo = 0x4,
  kParseOptFunc = 0x08,  // parse optimized function mpl file
};

}  // namespace maple
#endif  // MAPLE_IR_INCLUDE_PARSER_OPT_H
