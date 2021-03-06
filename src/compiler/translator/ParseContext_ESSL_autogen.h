// GENERATED FILE - DO NOT EDIT.
// Generated by gen_builtin_symbols.py using data from builtin_variables.json and
// builtin_function_declarations.txt.
//
// Copyright 2020 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// ParseContext_ESSL_autogen.h:
//   Helpers for built-in related checks.

#ifndef COMPILER_TRANSLATOR_PARSECONTEXT_AUTOGEN_H_
#define COMPILER_TRANSLATOR_PARSECONTEXT_AUTOGEN_H_

namespace sh
{

namespace BuiltInGroup
{

bool isTextureOffsetNoBias(const TFunction *func)
{
    int id = func->uniqueId().get();
    return id >= 3058 && id <= 3127;
}
bool isTextureOffsetBias(const TFunction *func)
{
    int id = func->uniqueId().get();
    return id >= 3128 && id <= 3147;
}
bool isTextureGatherOffsetsComp(const TFunction *func)
{
    int id = func->uniqueId().get();
    return id >= 3185 && id <= 3197;
}
bool isTextureGatherOffsetsNoComp(const TFunction *func)
{
    int id = func->uniqueId().get();
    return id >= 3198 && id <= 3213;
}
bool isTextureGatherOffsets(const TFunction *func)
{
    int id = func->uniqueId().get();
    return id >= 3185 && id <= 3213;
}
bool isTextureGatherOffsetComp(const TFunction *func)
{
    int id = func->uniqueId().get();
    return id >= 3214 && id <= 3219;
}
bool isTextureGatherOffsetNoComp(const TFunction *func)
{
    int id = func->uniqueId().get();
    return id >= 3220 && id <= 3227;
}
bool isTextureGatherOffset(const TFunction *func)
{
    int id = func->uniqueId().get();
    return id >= 3214 && id <= 3227;
}
bool isTextureGather(const TFunction *func)
{
    int id = func->uniqueId().get();
    return id >= 3161 && id <= 3227;
}
bool isAtomicMemory(const TFunction *func)
{
    int id = func->uniqueId().get();
    return id >= 3244 && id <= 3261;
}
bool isImageLoad(const TFunction *func)
{
    int id = func->uniqueId().get();
    return id >= 3286 && id <= 3297;
}
bool isImageStore(const TFunction *func)
{
    int id = func->uniqueId().get();
    return id >= 3298 && id <= 3309;
}
bool isImage(const TFunction *func)
{
    int id = func->uniqueId().get();
    return id >= 3262 && id <= 3309;
}

}  // namespace BuiltInGroup

}  // namespace sh

#endif  // COMPILER_TRANSLATOR_PARSECONTEXT_AUTOGEN_H_
