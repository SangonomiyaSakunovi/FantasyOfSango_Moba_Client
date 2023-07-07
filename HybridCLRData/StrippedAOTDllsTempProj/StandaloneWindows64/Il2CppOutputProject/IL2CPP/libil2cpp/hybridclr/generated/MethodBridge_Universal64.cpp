#include <codegen/il2cpp-codegen-metadata.h>
#include "vm/ClassInlines.h"
#include "vm/Object.h"
#include "vm/Class.h"

#include "../metadata/MetadataModule.h"
#include "../metadata/MetadataUtil.h"

#include "../interpreter/MethodBridge.h"
#include "../interpreter/Interpreter.h"
#include "../interpreter/MemoryUtil.h"
#include "../interpreter/InstrinctDef.h"

using namespace hybridclr::interpreter;

#if HYBRIDCLR_ABI_UNIVERSAL_64
//!!!{{CODE

static void __M2N_S108(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<108> (*NativeMethod)(const MethodInfo* method);
    *(ValueTypeSize<108>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_S108i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<108> (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<108>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_S108i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<108> (*NativeMethod)(int64_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(ValueTypeSize<108>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<12> (*NativeMethod)(const MethodInfo* method);
    *(ValueTypeSize<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_S120i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<120> (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<120>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_S120i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<120> (*NativeMethod)(int64_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(ValueTypeSize<120>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_S128i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<128> (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<128>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_S12S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<12> (*NativeMethod)(ValueTypeSize<12> __arg0, const MethodInfo* method);
    *(ValueTypeSize<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_S12S12S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<12> (*NativeMethod)(ValueTypeSize<12> __arg0, ValueTypeSize<12> __arg1, const MethodInfo* method);
    *(ValueTypeSize<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_S12S12S12r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<12> (*NativeMethod)(ValueTypeSize<12> __arg0, ValueTypeSize<12> __arg1, float __arg2, const MethodInfo* method);
    *(ValueTypeSize<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_S12S12i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<12> (*NativeMethod)(ValueTypeSize<12> __arg0, int32_t __arg1, const MethodInfo* method);
    *(ValueTypeSize<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_S12S12r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<12> (*NativeMethod)(ValueTypeSize<12> __arg0, float __arg1, const MethodInfo* method);
    *(ValueTypeSize<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_S12S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<12> (*NativeMethod)(ValueTypeSize<16> __arg0, const MethodInfo* method);
    *(ValueTypeSize<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_S12S16S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<12> (*NativeMethod)(ValueTypeSize<16> __arg0, ValueTypeSize<12> __arg1, const MethodInfo* method);
    *(ValueTypeSize<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_S12S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<12> (*NativeMethod)(ValueTypeSize<8> __arg0, const MethodInfo* method);
    *(ValueTypeSize<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_S12i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<12> (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_S12i8S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<12> (*NativeMethod)(int64_t __arg0, ValueTypeSize<12> __arg1, const MethodInfo* method);
    *(ValueTypeSize<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_S12i8S12i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<12> (*NativeMethod)(int64_t __arg0, ValueTypeSize<12> __arg1, int32_t __arg2, const MethodInfo* method);
    *(ValueTypeSize<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_S12i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<12> (*NativeMethod)(int64_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(ValueTypeSize<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_S12i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<12> (*NativeMethod)(int64_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(ValueTypeSize<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_S12i8r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<12> (*NativeMethod)(int64_t __arg0, float __arg1, const MethodInfo* method);
    *(ValueTypeSize<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_S12i8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<12> (*NativeMethod)(int64_t __arg0, uint8_t __arg1, const MethodInfo* method);
    *(ValueTypeSize<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_S12r4S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<12> (*NativeMethod)(float __arg0, ValueTypeSize<12> __arg1, const MethodInfo* method);
    *(ValueTypeSize<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_S12u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<12> (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_S144i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<144> (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<144>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_S16S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(ValueTypeSize<12> __arg0, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_S16S12S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(ValueTypeSize<12> __arg0, ValueTypeSize<12> __arg1, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_S16S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(ValueTypeSize<16> __arg0, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_S16S16S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(ValueTypeSize<16> __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_S16S16S16S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(ValueTypeSize<16> __arg0, ValueTypeSize<16> __arg1, ValueTypeSize<16> __arg2, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_S16S16S16r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(ValueTypeSize<16> __arg0, ValueTypeSize<16> __arg1, float __arg2, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_S16S16i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(ValueTypeSize<16> __arg0, int32_t __arg1, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_S16S16i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(ValueTypeSize<16> __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_S16S16r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(ValueTypeSize<16> __arg0, float __arg1, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_S16S4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(ValueTypeSize<4> __arg0, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<4>*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_S16S64S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(ValueTypeSize<64> __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<64>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_S16S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(ValueTypeSize<8> __arg0, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_S16i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(int8_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int8_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_S16i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int16_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_S16i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_S16i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_S16i8S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_S16i8S16i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, int64_t __arg2, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_S16i8S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(int64_t __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_S16i8S8S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(int64_t __arg0, ValueTypeSize<8> __arg1, ValueTypeSize<16> __arg2, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_S16i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(int64_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_S16i8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_S16i8i4i4S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, ValueTypeSize<16> __arg3, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_S16i8i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_S16i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(int64_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_S16i8i8S176S16i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(int64_t __arg0, int64_t __arg1, ValueTypeSize<176> __arg2, ValueTypeSize<16> __arg3, int64_t __arg4, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<176>*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_S16i8r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(int64_t __arg0, float __arg1, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_S16i8r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(int64_t __arg0, float __arg1, float __arg2, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_S16i8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(int64_t __arg0, uint8_t __arg1, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_S16r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_S16r4S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(float __arg0, ValueTypeSize<12> __arg1, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_S16r4S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(float __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_S16r4r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(float __arg0, float __arg1, float __arg2, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_S16r4r4r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(float __arg0, float __arg1, float __arg2, float __arg3, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_S16r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_S16u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_S16u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_S16u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_S16u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint64_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_S1i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<1> (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<1>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_S1i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<1> (*NativeMethod)(int64_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(ValueTypeSize<1>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_S2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<2> (*NativeMethod)(const MethodInfo* method);
    *(ValueTypeSize<2>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_S20i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<20> (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<20>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_S24(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<24> (*NativeMethod)(const MethodInfo* method);
    *(ValueTypeSize<24>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_S24S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<24> (*NativeMethod)(ValueTypeSize<8> __arg0, const MethodInfo* method);
    *(ValueTypeSize<24>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_S24S8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<24> (*NativeMethod)(ValueTypeSize<8> __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(ValueTypeSize<24>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_S24S8i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<24> (*NativeMethod)(ValueTypeSize<8> __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(ValueTypeSize<24>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_S24i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<24> (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<24>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_S24i8S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<24> (*NativeMethod)(int64_t __arg0, ValueTypeSize<12> __arg1, const MethodInfo* method);
    *(ValueTypeSize<24>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_S24i8S12i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<24> (*NativeMethod)(int64_t __arg0, ValueTypeSize<12> __arg1, int32_t __arg2, const MethodInfo* method);
    *(ValueTypeSize<24>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_S24i8S208(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<24> (*NativeMethod)(int64_t __arg0, ValueTypeSize<208> __arg1, const MethodInfo* method);
    *(ValueTypeSize<24>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<208>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_S24i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<24> (*NativeMethod)(int64_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(ValueTypeSize<24>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_S24i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<24> (*NativeMethod)(int64_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(ValueTypeSize<24>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_S24i8i8i8u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<24> (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, uint8_t __arg3, uint8_t __arg4, const MethodInfo* method);
    *(ValueTypeSize<24>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_S24u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<24> (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<24>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_S28i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<28> (*NativeMethod)(int64_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(ValueTypeSize<28>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_S296i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<296> (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<296>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_S2i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<2> (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<2>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_S32i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<32> (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<32>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_S4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<4> (*NativeMethod)(const MethodInfo* method);
    *(ValueTypeSize<4>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_S40i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<40> (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<40>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_S40i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<40> (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<40>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_S48i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<48> (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<48>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_S48i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<48> (*NativeMethod)(int64_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(ValueTypeSize<48>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_S4S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<4> (*NativeMethod)(ValueTypeSize<16> __arg0, const MethodInfo* method);
    *(ValueTypeSize<4>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_S4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<4> (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<4>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_S4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<4> (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<4>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_S4i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<4> (*NativeMethod)(int64_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(ValueTypeSize<4>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_S4i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<4> (*NativeMethod)(int64_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(ValueTypeSize<4>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_S52i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<52> (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<52>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_S56i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<56> (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<56>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_S64(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<64> (*NativeMethod)(const MethodInfo* method);
    *(ValueTypeSize<64>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_S64S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<64> (*NativeMethod)(ValueTypeSize<12> __arg0, const MethodInfo* method);
    *(ValueTypeSize<64>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_S64S12S12S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<64> (*NativeMethod)(ValueTypeSize<12> __arg0, ValueTypeSize<12> __arg1, ValueTypeSize<12> __arg2, const MethodInfo* method);
    *(ValueTypeSize<64>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_S64S12S16S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<64> (*NativeMethod)(ValueTypeSize<12> __arg0, ValueTypeSize<16> __arg1, ValueTypeSize<12> __arg2, const MethodInfo* method);
    *(ValueTypeSize<64>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_S64S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<64> (*NativeMethod)(ValueTypeSize<16> __arg0, const MethodInfo* method);
    *(ValueTypeSize<64>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_S64S24(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<64> (*NativeMethod)(ValueTypeSize<24> __arg0, const MethodInfo* method);
    *(ValueTypeSize<64>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<24>*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_S64S64(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<64> (*NativeMethod)(ValueTypeSize<64> __arg0, const MethodInfo* method);
    *(ValueTypeSize<64>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<64>*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_S64S64S64(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<64> (*NativeMethod)(ValueTypeSize<64> __arg0, ValueTypeSize<64> __arg1, const MethodInfo* method);
    *(ValueTypeSize<64>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<64>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<64>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_S64S64u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<64> (*NativeMethod)(ValueTypeSize<64> __arg0, uint8_t __arg1, const MethodInfo* method);
    *(ValueTypeSize<64>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<64>*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_S64i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<64> (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<64>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_S64i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<64> (*NativeMethod)(int64_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(ValueTypeSize<64>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_S64i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<64> (*NativeMethod)(int64_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(ValueTypeSize<64>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_S64r4r4r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<64> (*NativeMethod)(float __arg0, float __arg1, float __arg2, float __arg3, const MethodInfo* method);
    *(ValueTypeSize<64>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_S64r4r4r4r4r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<64> (*NativeMethod)(float __arg0, float __arg1, float __arg2, float __arg3, float __arg4, float __arg5, const MethodInfo* method);
    *(ValueTypeSize<64>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), *(float*)(localVarBase+argVarIndexs[4]), *(float*)(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_S68(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<68> (*NativeMethod)(const MethodInfo* method);
    *(ValueTypeSize<68>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_S72i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<72> (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<72>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<8> (*NativeMethod)(const MethodInfo* method);
    *(ValueTypeSize<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_S80i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<80> (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<80>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_S88i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<88> (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<88>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_S8S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<8> (*NativeMethod)(ValueTypeSize<12> __arg0, const MethodInfo* method);
    *(ValueTypeSize<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_S8S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<8> (*NativeMethod)(ValueTypeSize<16> __arg0, const MethodInfo* method);
    *(ValueTypeSize<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_S8S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<8> (*NativeMethod)(ValueTypeSize<8> __arg0, const MethodInfo* method);
    *(ValueTypeSize<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_S8S8S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<8> (*NativeMethod)(ValueTypeSize<8> __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method);
    *(ValueTypeSize<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_S8S8S8r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<8> (*NativeMethod)(ValueTypeSize<8> __arg0, ValueTypeSize<8> __arg1, float __arg2, const MethodInfo* method);
    *(ValueTypeSize<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_S8S8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<8> (*NativeMethod)(ValueTypeSize<8> __arg0, int32_t __arg1, const MethodInfo* method);
    *(ValueTypeSize<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_S8S8r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<8> (*NativeMethod)(ValueTypeSize<8> __arg0, float __arg1, const MethodInfo* method);
    *(ValueTypeSize<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_S8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<8> (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_S8i8S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<8> (*NativeMethod)(int64_t __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method);
    *(ValueTypeSize<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_S8i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<8> (*NativeMethod)(int64_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(ValueTypeSize<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_S8i8i4i4i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<8> (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, const MethodInfo* method);
    *(ValueTypeSize<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), *(int32_t*)(localVarBase+argVarIndexs[8]), method);
}


static void __M2N_S8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<8> (*NativeMethod)(int64_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(ValueTypeSize<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_S8i8r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<8> (*NativeMethod)(int64_t __arg0, double __arg1, const MethodInfo* method);
    *(ValueTypeSize<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(double*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_S8r4S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<8> (*NativeMethod)(float __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method);
    *(ValueTypeSize<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_S8r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<8> (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(ValueTypeSize<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_S8u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<8> (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_S96i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<96> (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<96>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_S96i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<96> (*NativeMethod)(int64_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(ValueTypeSize<96>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_i1S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(ValueTypeSize<16> __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i1i1i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(int8_t __arg0, int8_t __arg1, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int8_t*)(localVarBase+argVarIndexs[0]), *(int8_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i1i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int16_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i1i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i1i8i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i1i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i1r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i1r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i1u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i1u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i1u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint64_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_i2S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(ValueTypeSize<16> __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i2i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(int8_t __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int8_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i2i2i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(int16_t __arg0, int16_t __arg1, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int16_t*)(localVarBase+argVarIndexs[0]), *(int16_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i2i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i2i8i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i2i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i2r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i2r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i2u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i2u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i2u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i2u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint64_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_i4S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(ValueTypeSize<16> __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i4S16S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(ValueTypeSize<16> __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4S16i4i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(ValueTypeSize<16> __arg0, int32_t __arg1, int32_t __arg2, int64_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i4S16i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(ValueTypeSize<16> __arg0, int64_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4S16u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(ValueTypeSize<16> __arg0, uint16_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4S16u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(ValueTypeSize<16> __arg0, uint64_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(uint64_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4S4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(ValueTypeSize<4> __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<4>*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i4S52(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(ValueTypeSize<52> __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<52>*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i4S8S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(ValueTypeSize<8> __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int16_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4i4i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int64_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, uint8_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i4i8S1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<1> __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<1>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4i8S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<12> __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4i8S12S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<12> __arg1, ValueTypeSize<12> __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4i8S12i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<12> __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i4i8S12i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<12> __arg1, int64_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4i8S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4i8S16S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, ValueTypeSize<16> __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4i8S16S16u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, ValueTypeSize<16> __arg2, uint8_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i4i8S16i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i4i8S16i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, int64_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4i8S1S1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<1> __arg1, ValueTypeSize<1> __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<1>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<1>*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4i8S24(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<24> __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<24>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4i8S24S24(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<24> __arg1, ValueTypeSize<24> __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<24>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<24>*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4i8S24i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<24> __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<24>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i4i8S24i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<24> __arg1, int64_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<24>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4i8S28(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<28> __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<28>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4i8S32(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<32> __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<32>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4i8S4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<4> __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4i8S40(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<40> __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<40>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4i8S48(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<48> __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<48>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4i8S4S4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<4> __arg1, ValueTypeSize<4> __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4i8S4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<4> __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i4i8S4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<4> __arg1, int64_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4i8S64(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<64> __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<64>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4i8S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4i8S8S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<8> __arg1, ValueTypeSize<8> __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4i8S8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<8> __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i4i8S8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<8> __arg1, int64_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4i8S8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<8> __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i4i8S8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<8> __arg1, uint8_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4i8i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int8_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int8_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4i8i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int16_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int16_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4i8i4S28(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, ValueTypeSize<28> __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<28>*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4i8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4i8i4i4S12i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, ValueTypeSize<12> __arg3, int64_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4i8i4i4S16i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, ValueTypeSize<16> __arg3, int64_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4i8i4i4S24i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, ValueTypeSize<24> __arg3, int64_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<24>*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4i8i4i4S4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, ValueTypeSize<4> __arg3, int64_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4i8i4i4S8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, ValueTypeSize<8> __arg3, int64_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4i8i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i4i8i4i4i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int64_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4i8i4i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int64_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i4i8i4i4i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4i8i4i4r8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, double __arg3, int64_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(double*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4i8i4i4u8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, uint64_t __arg3, int64_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4i8i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4i8i4i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i4i8i4i8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4i8i4i8i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_i4i8i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, uint8_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4i8i4u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, uint64_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint64_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4i8i8S12i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, ValueTypeSize<12> __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4i8i8S16i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, ValueTypeSize<16> __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4i8i8S24i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, ValueTypeSize<24> __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<24>*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4i8i8S4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, ValueTypeSize<4> __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4i8i8S8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, ValueTypeSize<8> __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4i8i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4i8i8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i4i8i8i4i4S12i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, ValueTypeSize<12> __arg4, int64_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_i4i8i8i4i4S16i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, ValueTypeSize<16> __arg4, int64_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_i4i8i8i4i4S24i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, ValueTypeSize<24> __arg4, int64_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(ValueTypeSize<24>*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_i4i8i8i4i4S4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, ValueTypeSize<4> __arg4, int64_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_i4i8i8i4i4S8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, ValueTypeSize<8> __arg4, int64_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_i4i8i8i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4i8i8i4i4i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int64_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_i4i8i8i4i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, int64_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4i8i8i4i4i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, int64_t __arg4, int32_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_i4i8i8i4i4i8i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, int64_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), method);
}


static void __M2N_i4i8i8i4i4i8i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, int64_t __arg4, int32_t __arg5, uint8_t __arg6, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(uint8_t*)(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_i4i8i8i4i4i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, int64_t __arg4, int64_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_i4i8i8i4i4r8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, double __arg4, int64_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(double*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_i4i8i8i4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, uint8_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4i8i8i4i4u8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, uint64_t __arg4, int64_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(uint64_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_i4i8i8i4i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int64_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4i8i8i4i8i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int64_t __arg3, int32_t __arg4, uint8_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(uint8_t*)(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_i4i8i8i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, uint8_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i4i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4i8i8i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i4i8i8i8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4i8i8i8i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_i4i8i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i4i8i8i8i8i8i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, int64_t __arg5, int64_t __arg6, int64_t __arg7, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), *(int64_t*)(localVarBase+argVarIndexs[6]), *(int64_t*)(localVarBase+argVarIndexs[7]), method);
}


static void __M2N_i4i8i8i8i8i8i8u4u4u1i8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, int64_t __arg5, uint32_t __arg6, uint32_t __arg7, uint8_t __arg8, int64_t __arg9, uint8_t __arg10, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), *(uint32_t*)(localVarBase+argVarIndexs[6]), *(uint32_t*)(localVarBase+argVarIndexs[7]), *(uint8_t*)(localVarBase+argVarIndexs[8]), *(int64_t*)(localVarBase+argVarIndexs[9]), *(uint8_t*)(localVarBase+argVarIndexs[10]), method);
}


static void __M2N_i4i8i8r8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, double __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(double*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4i8i8u1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, uint8_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i4i8i8u1i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, uint8_t __arg2, int64_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i4i8r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, float __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4i8r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, float __arg1, float __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4i8r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, double __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(double*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4i8r8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, double __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(double*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i4i8r8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, double __arg1, int64_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(double*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4i8r8r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, double __arg1, double __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(double*)(localVarBase+argVarIndexs[1]), *(double*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4i8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, uint8_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4i8u1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, uint8_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4i8u1i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, uint8_t __arg1, int64_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i4i8u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, uint8_t __arg1, uint8_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4i8u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, uint16_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4i8u2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, uint16_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4i8u2i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, uint16_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i4i8u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, uint32_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4i8u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, uint64_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint64_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4i8u8u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, uint64_t __arg1, uint64_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint64_t*)(localVarBase+argVarIndexs[1]), *(uint64_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i4r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i4u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i4u2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uint16_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4u2u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uint16_t __arg0, uint16_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4u2u2u2u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uint16_t __arg0, uint16_t __arg1, uint16_t __arg2, uint16_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), *(uint16_t*)(localVarBase+argVarIndexs[2]), *(uint16_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i4u4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uint32_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint64_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_i8S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(ValueTypeSize<16> __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i8S16S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(ValueTypeSize<16> __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i8S16S16S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(ValueTypeSize<16> __arg0, ValueTypeSize<16> __arg1, ValueTypeSize<16> __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i8S16S16i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(ValueTypeSize<16> __arg0, ValueTypeSize<16> __arg1, int64_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i8S16i4i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(ValueTypeSize<16> __arg0, int32_t __arg1, int32_t __arg2, int64_t __arg3, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i8S4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(ValueTypeSize<4> __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<4>*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i8S52(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(ValueTypeSize<52> __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<52>*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i8S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(ValueTypeSize<8> __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i8S8S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(ValueTypeSize<8> __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i8i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int8_t __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int8_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i8i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int16_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i8i4S16i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<16> __arg1, int64_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i8i4S32i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<32> __arg1, int64_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<32>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i8i4S48i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<48> __arg1, int64_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<48>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i8i4S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i8i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i8i4i4i4u2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, uint16_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint16_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i8i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int32_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i8i4i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int32_t __arg0, int64_t __arg1, int64_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i8i8S12S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<12> __arg1, ValueTypeSize<16> __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i8i8S12S16i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<12> __arg1, ValueTypeSize<16> __arg2, int64_t __arg3, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i8i8S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i8i8S16S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, ValueTypeSize<8> __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i8i8S16S8r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, ValueTypeSize<8> __arg2, float __arg3, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i8i8S16S8r4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, ValueTypeSize<8> __arg2, float __arg3, uint32_t __arg4, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), *(uint32_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i8i8S16S8r4u4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, ValueTypeSize<8> __arg2, float __arg3, uint32_t __arg4, int32_t __arg5, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), *(uint32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_i8i8S16S8r4u4i4S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, ValueTypeSize<8> __arg2, float __arg3, uint32_t __arg4, int32_t __arg5, ValueTypeSize<16> __arg6, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), *(uint32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_i8i8S16S8r4u4i4S16u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, ValueTypeSize<8> __arg2, float __arg3, uint32_t __arg4, int32_t __arg5, ValueTypeSize<16> __arg6, uint8_t __arg7, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), *(uint32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[6]), *(uint8_t*)(localVarBase+argVarIndexs[7]), method);
}


static void __M2N_i8i8S16S8r4u4i4S16u1i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, ValueTypeSize<8> __arg2, float __arg3, uint32_t __arg4, int32_t __arg5, ValueTypeSize<16> __arg6, uint8_t __arg7, int64_t __arg8, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), *(uint32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[6]), *(uint8_t*)(localVarBase+argVarIndexs[7]), *(int64_t*)(localVarBase+argVarIndexs[8]), method);
}


static void __M2N_i8i8S16i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, int64_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i8i8S24(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<24> __arg1, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<24>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i8i8S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i8i8S8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<8> __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i8i8i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int8_t __arg1, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int8_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i8i8i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int16_t __arg1, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int16_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i8i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i8i8i4S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, ValueTypeSize<8> __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i8i8i4S8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, ValueTypeSize<8> __arg2, uint8_t __arg3, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i8i8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i8i8i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i8i8i4i4i4i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int64_t __arg5, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_i8i8i4i4u2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, uint16_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint16_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i8i8i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i8i8i4i8i4i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, int32_t __arg3, int64_t __arg4, int64_t __arg5, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_i8i8i4i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i8i8i4i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i8i8i4i8i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, int64_t __arg5, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_i8i8i4i8i8i8i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, int64_t __arg5, int64_t __arg6, int64_t __arg7, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), *(int64_t*)(localVarBase+argVarIndexs[6]), *(int64_t*)(localVarBase+argVarIndexs[7]), method);
}


static void __M2N_i8i8i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, uint8_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i8i8i4u1u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, uint8_t __arg2, uint8_t __arg3, uint8_t __arg4, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i8i8i4u1u1u1u1i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, uint8_t __arg2, uint8_t __arg3, uint8_t __arg4, uint8_t __arg5, int64_t __arg6, int32_t __arg7, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), *(uint8_t*)(localVarBase+argVarIndexs[5]), *(int64_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), method);
}


static void __M2N_i8i8i4u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, uint16_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint16_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i8i8i8S16i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, ValueTypeSize<16> __arg2, int64_t __arg3, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i8i8i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i8i8i8i4S8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, ValueTypeSize<8> __arg3, uint8_t __arg4, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i8i8i8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i8i8i8i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i8i8i8i4i4i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, int64_t __arg4, int64_t __arg5, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_i8i8i8i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int64_t __arg3, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i8i8i8i4i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int64_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i8i8i8i4i8i4i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int64_t __arg3, int32_t __arg4, int64_t __arg5, int64_t __arg6, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), *(int64_t*)(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_i8i8i8i4i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int64_t __arg3, int64_t __arg4, int64_t __arg5, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_i8i8i8i4i8i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int64_t __arg3, int64_t __arg4, int64_t __arg5, int64_t __arg6, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), *(int64_t*)(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_i8i8i8i4i8i8i8i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int64_t __arg3, int64_t __arg4, int64_t __arg5, int64_t __arg6, int64_t __arg7, int64_t __arg8, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), *(int64_t*)(localVarBase+argVarIndexs[6]), *(int64_t*)(localVarBase+argVarIndexs[7]), *(int64_t*)(localVarBase+argVarIndexs[8]), method);
}


static void __M2N_i8i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i8i8i8i8S16i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, ValueTypeSize<16> __arg3, int64_t __arg4, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i8i8i8i8S8i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, ValueTypeSize<8> __arg3, int32_t __arg4, int64_t __arg5, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_i8i8i8i8S8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, ValueTypeSize<8> __arg3, uint8_t __arg4, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i8i8i8i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i8i8i8i8i4S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int32_t __arg3, ValueTypeSize<8> __arg4, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i8i8i8i8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i8i8i8i8i4i4i4i4u1S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, uint8_t __arg7, ValueTypeSize<8> __arg8, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(uint8_t*)(localVarBase+argVarIndexs[7]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[8]), method);
}


static void __M2N_i8i8i8i8i4i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int32_t __arg3, int64_t __arg4, int32_t __arg5, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_i8i8i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i8i8i8i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i8i8i8i8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, uint8_t __arg3, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i8i8i8i8u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, uint8_t __arg3, uint8_t __arg4, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i8i8i8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, uint8_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i8i8i8u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, uint8_t __arg2, uint8_t __arg3, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i8i8i8u4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, uint32_t __arg2, uint32_t __arg3, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(uint32_t*)(localVarBase+argVarIndexs[2]), *(uint32_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i8i8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, uint8_t __arg1, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i8i8u1i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, uint8_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i8i8u1i4i4i4i8i4i4i4i4u1i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, uint8_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int64_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, int32_t __arg9, uint8_t __arg10, int64_t __arg11, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), *(int32_t*)(localVarBase+argVarIndexs[8]), *(int32_t*)(localVarBase+argVarIndexs[9]), *(uint8_t*)(localVarBase+argVarIndexs[10]), *(int64_t*)(localVarBase+argVarIndexs[11]), method);
}


static void __M2N_i8i8u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, uint8_t __arg1, uint8_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i8i8u1u1u1u1i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, uint8_t __arg1, uint8_t __arg2, uint8_t __arg3, uint8_t __arg4, int64_t __arg5, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_i8i8u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, uint16_t __arg1, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i8i8u2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, uint16_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i8i8u2u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, uint16_t __arg1, uint16_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), *(uint16_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i8i8u2u2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, uint16_t __arg1, uint16_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), *(uint16_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i8i8u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, uint32_t __arg1, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i8i8u4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, uint32_t __arg1, uint32_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), *(uint32_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i8i8u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, uint64_t __arg1, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint64_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i8r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i8r4i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(float __arg0, int64_t __arg1, int64_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i8r4r4r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(float __arg0, float __arg1, float __arg2, float __arg3, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i8r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i8r8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(double __arg0, int64_t __arg1, int64_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i8u1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(uint8_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i8u1u1i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(uint8_t __arg0, uint8_t __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i8u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i8u2i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(uint16_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i8u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i8u4S16i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(uint32_t __arg0, ValueTypeSize<16> __arg1, int64_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i8u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint64_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i8u8S16i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(uint64_t __arg0, ValueTypeSize<16> __arg1, int64_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_r4S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(ValueTypeSize<12> __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r4S12S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(ValueTypeSize<12> __arg0, ValueTypeSize<12> __arg1, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_r4S12S12S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(ValueTypeSize<12> __arg0, ValueTypeSize<12> __arg1, ValueTypeSize<12> __arg2, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_r4S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(ValueTypeSize<16> __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r4S16S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(ValueTypeSize<16> __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_r4S8S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(ValueTypeSize<8> __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_r4i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(int8_t __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int8_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r4i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int16_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r4i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(int64_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_r4i8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_r4i8i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_r4i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(int64_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_r4i8r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(int64_t __arg0, float __arg1, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_r4i8r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(int64_t __arg0, float __arg1, float __arg2, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r4r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(float __arg0, float __arg1, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_r4r4r4i8r4r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(float __arg0, float __arg1, int64_t __arg2, float __arg3, float __arg4, float __arg5, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), *(float*)(localVarBase+argVarIndexs[4]), *(float*)(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_r4r4r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(float __arg0, float __arg1, float __arg2, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_r4r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r4u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r4u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint64_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_r8S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(ValueTypeSize<16> __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r8i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(int8_t __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int8_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r8i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int16_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r8i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(int64_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_r8i8i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_r8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(int64_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_r8i8r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(int64_t __arg0, double __arg1, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(double*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_r8i8r8r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(int64_t __arg0, double __arg1, double __arg2, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(double*)(localVarBase+argVarIndexs[1]), *(double*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_r8r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r8r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r8r8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(double __arg0, int32_t __arg1, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_r8r8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(double __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_r8r8r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(double __arg0, double __arg1, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), *(double*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_r8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r8u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r8u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r8u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint64_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_u1S108S108(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSize<108> __arg0, ValueTypeSize<108> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<108>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<108>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1S120S120(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSize<120> __arg0, ValueTypeSize<120> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<120>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<120>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1S12S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSize<12> __arg0, ValueTypeSize<12> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSize<16> __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u1S16S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSize<16> __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1S16S16i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSize<16> __arg0, ValueTypeSize<16> __arg1, int32_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1S16S16i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSize<16> __arg0, ValueTypeSize<16> __arg1, int64_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1S16S16i8S16i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSize<16> __arg0, ValueTypeSize<16> __arg1, int64_t __arg2, ValueTypeSize<16> __arg3, int64_t __arg4, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_u1S16S16u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSize<16> __arg0, ValueTypeSize<16> __arg1, uint8_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1S16i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSize<16> __arg0, int32_t __arg1, int64_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1S16i4i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSize<16> __arg0, int32_t __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_u1S16i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSize<16> __arg0, int64_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1S16u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSize<16> __arg0, uint32_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1S196S196(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSize<196> __arg0, ValueTypeSize<196> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<196>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<196>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1S24S24(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSize<24> __arg0, ValueTypeSize<24> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<24>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<24>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1S4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSize<4> __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<4>*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u1S40S40(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSize<40> __arg0, ValueTypeSize<40> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<40>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<40>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1S48S48(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSize<48> __arg0, ValueTypeSize<48> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<48>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<48>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1S4S4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSize<4> __arg0, ValueTypeSize<4> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<4>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1S64i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSize<64> __arg0, int64_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<64>*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1S8S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSize<8> __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int8_t __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int8_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u1i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int16_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u1i4S16i8S16i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<16> __arg1, int64_t __arg2, ValueTypeSize<16> __arg3, int64_t __arg4, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_u1i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, uint8_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u1i8S1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<1> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<1>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1i8S108(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<108> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<108>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1i8S116(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<116> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<116>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1i8S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<12> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1i8S120(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<120> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<120>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1i8S12S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<12> __arg1, ValueTypeSize<12> __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1i8S136(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<136> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<136>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1i8S1584(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<1584> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<1584>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1i8S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1i8S16S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, ValueTypeSize<16> __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1i8S16i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, int32_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1i8S16i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, int32_t __arg2, int64_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_u1i8S16i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, int64_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1i8S16i8S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, int64_t __arg2, ValueTypeSize<16> __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_u1i8S16i8S16i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, int64_t __arg2, ValueTypeSize<16> __arg3, int64_t __arg4, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_u1i8S16i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, int64_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_u1i8S16u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, uint8_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1i8S196(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<196> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<196>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1i8S1S1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<1> __arg1, ValueTypeSize<1> __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<1>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<1>*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1i8S2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<2> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<2>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1i8S24(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<24> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<24>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1i8S24S24(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<24> __arg1, ValueTypeSize<24> __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<24>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<24>*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1i8S24i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<24> __arg1, int64_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<24>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1i8S252(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<252> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<252>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1i8S28(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<28> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<28>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1i8S288(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<288> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<288>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1i8S296(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<296> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<296>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1i8S32(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<32> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<32>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1i8S4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<4> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1i8S40(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<40> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<40>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1i8S48(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<48> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<48>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1i8S4S4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<4> __arg1, ValueTypeSize<4> __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1i8S64(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<64> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<64>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1i8S64S64(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<64> __arg1, ValueTypeSize<64> __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<64>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<64>*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1i8S68(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<68> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<68>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1i8S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1i8S8S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<8> __arg1, ValueTypeSize<8> __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1i8S96(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<96> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<96>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1i8S992(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<992> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<992>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1i8i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, int8_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int8_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1i8i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, int16_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int16_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1i8i4S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, ValueTypeSize<16> __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1i8i4S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, ValueTypeSize<8> __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1i8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1i8i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_u1i8i4i4i4S12i4r4i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, ValueTypeSize<12> __arg4, int32_t __arg5, float __arg6, int64_t __arg7, int64_t __arg8, int64_t __arg9, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(float*)(localVarBase+argVarIndexs[6]), *(int64_t*)(localVarBase+argVarIndexs[7]), *(int64_t*)(localVarBase+argVarIndexs[8]), *(int64_t*)(localVarBase+argVarIndexs[9]), method);
}


static void __M2N_u1i8i4i4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, uint8_t __arg4, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_u1i8i4i4r4i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, float __arg3, int64_t __arg4, int64_t __arg5, int64_t __arg6, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), *(int64_t*)(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_u1i8i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1i8i4i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_u1i8i4i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_u1i8i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, uint8_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1i8i8S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, ValueTypeSize<16> __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1i8i8S64(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, ValueTypeSize<64> __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<64>*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1i8i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1i8i8i4S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, ValueTypeSize<8> __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_u1i8i8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_u1i8i8i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_u1i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1i8i8i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_u1i8i8i8i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_u1i8i8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, uint8_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1i8i8u1i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, uint8_t __arg2, int64_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_u1i8i8u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, uint64_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(uint64_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1i8r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, float __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1i8r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, double __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(double*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1i8r8r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, double __arg1, double __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(double*)(localVarBase+argVarIndexs[1]), *(double*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1i8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, uint8_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1i8u1i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, uint8_t __arg1, int64_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1i8u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, uint8_t __arg1, uint8_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1i8u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, uint16_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1i8u2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, uint16_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1i8u2u2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, uint16_t __arg1, uint16_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), *(uint16_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_u1i8u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, uint32_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1i8u4i4i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, uint32_t __arg1, int32_t __arg2, int32_t __arg3, int64_t __arg4, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_u1i8u4i8u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, uint32_t __arg1, int64_t __arg2, uint32_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(uint32_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_u1i8u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, uint64_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint64_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u1r4S16i8S16i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(float __arg0, ValueTypeSize<16> __arg1, int64_t __arg2, ValueTypeSize<16> __arg3, int64_t __arg4, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_u1r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(float __arg0, float __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u1r8S16i8S16i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(double __arg0, ValueTypeSize<16> __arg1, int64_t __arg2, ValueTypeSize<16> __arg3, int64_t __arg4, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u1u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uint8_t __arg0, uint8_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u1u2i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uint16_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1u2u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uint16_t __arg0, uint16_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u1u4S16i8S16i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uint32_t __arg0, ValueTypeSize<16> __arg1, int64_t __arg2, ValueTypeSize<16> __arg3, int64_t __arg4, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_u1u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint64_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u1u8S16i8S16i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uint64_t __arg0, ValueTypeSize<16> __arg1, int64_t __arg2, ValueTypeSize<16> __arg3, int64_t __arg4, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_u1u8u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uint64_t __arg0, uint64_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint64_t*)(localVarBase+argVarIndexs[0]), *(uint64_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_u2S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(ValueTypeSize<16> __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u2S2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(ValueTypeSize<2> __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<2>*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u2i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(int8_t __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int8_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u2i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int16_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u2i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u2i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u2i8i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u2i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u2i8u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(int64_t __arg0, uint16_t __arg1, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u2r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u2r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u2u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u2u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u2u2u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(uint16_t __arg0, uint16_t __arg1, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u2u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u2u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint64_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_u4S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(ValueTypeSize<16> __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u4i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(int8_t __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int8_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u4i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int16_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u4i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u4i8i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u4i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u4r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u4u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u4u4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(uint32_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u4u4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(uint32_t __arg0, uint32_t __arg1, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u4u4u4u4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(uint32_t __arg0, uint32_t __arg1, uint32_t __arg2, uint32_t __arg3, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), *(uint32_t*)(localVarBase+argVarIndexs[2]), *(uint32_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_u4u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint64_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_u8S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(ValueTypeSize<16> __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u8i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(int8_t __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int8_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u8i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int16_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u8i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u8i8i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u8r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u8r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u8u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u8u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u8u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint64_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u8u8u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(uint64_t __arg0, uint64_t __arg1, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint64_t*)(localVarBase+argVarIndexs[0]), *(uint64_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_v(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_vS12S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(ValueTypeSize<12> __arg0, ValueTypeSize<12> __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vS12S12S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(ValueTypeSize<12> __arg0, ValueTypeSize<12> __arg1, ValueTypeSize<16> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vS12S12S16r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(ValueTypeSize<12> __arg0, ValueTypeSize<12> __arg1, ValueTypeSize<16> __arg2, float __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vS12S12S16r4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(ValueTypeSize<12> __arg0, ValueTypeSize<12> __arg1, ValueTypeSize<16> __arg2, float __arg3, uint8_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vS12i8u1S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(ValueTypeSize<12> __arg0, int64_t __arg1, uint8_t __arg2, ValueTypeSize<16> __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vS16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(ValueTypeSize<16> __arg0, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_vS16S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(ValueTypeSize<16> __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vS16S16i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(ValueTypeSize<16> __arg0, ValueTypeSize<16> __arg1, int32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vS16i4S16i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(ValueTypeSize<16> __arg0, int32_t __arg1, ValueTypeSize<16> __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vS16i4i8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(ValueTypeSize<16> __arg0, int32_t __arg1, int64_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vS16i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(ValueTypeSize<16> __arg0, int64_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vS16i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(ValueTypeSize<16> __arg0, int64_t __arg1, int32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vS24i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(ValueTypeSize<24> __arg0, int64_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<24>*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vS64(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(ValueTypeSize<64> __arg0, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<64>*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_vS64i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(ValueTypeSize<64> __arg0, int64_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<64>*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vS8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(ValueTypeSize<8> __arg0, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_vS8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(ValueTypeSize<8> __arg0, int64_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vi4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_vi4S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vi4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vi4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vi4i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int64_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi4i4i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vi4i4i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vi4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int64_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vi4i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int64_t __arg1, int32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi4i8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vi4i8i8u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int64_t __arg1, int64_t __arg2, uint64_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(uint64_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vi4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, float __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vi8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_vi8S108(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<108> __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<108>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vi8S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<12> __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vi8S12S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<12> __arg1, ValueTypeSize<12> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi8S12i4u4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<12> __arg1, int32_t __arg2, uint32_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vi8S12r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<12> __arg1, float __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi8S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vi8S16S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, ValueTypeSize<16> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi8S16S16S16S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, ValueTypeSize<16> __arg2, ValueTypeSize<16> __arg3, ValueTypeSize<16> __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[3]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vi8S16S16u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, ValueTypeSize<16> __arg2, uint8_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vi8S16S32(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, ValueTypeSize<32> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<32>*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi8S16S48(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, ValueTypeSize<48> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<48>*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi8S16S64(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, ValueTypeSize<64> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<64>*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi8S16S64i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, ValueTypeSize<64> __arg2, int64_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<64>*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vi8S16i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, int32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi8S16i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vi8S16i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vi8S16i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_vi8S16i4i4i4i4u1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, uint8_t __arg6, int32_t __arg7, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(uint8_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), method);
}


static void __M2N_vi8S16i4i4u1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, int32_t __arg2, int32_t __arg3, uint8_t __arg4, int32_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_vi8S16i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, int64_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi8S16i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, int64_t __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vi8S16i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vi8S16i8i8S4u1S16S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, int64_t __arg2, int64_t __arg3, ValueTypeSize<4> __arg4, uint8_t __arg5, ValueTypeSize<16> __arg6, ValueTypeSize<16> __arg7, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[4]), *(uint8_t*)(localVarBase+argVarIndexs[5]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[6]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[7]), method);
}


static void __M2N_vi8S16i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vi8S16r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, float __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi8S16r4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, float __arg2, uint32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), *(uint32_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vi8S16u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<16> __arg1, uint8_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi8S2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<2> __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<2>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vi8S24(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<24> __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<24>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vi8S24i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<24> __arg1, int64_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<24>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi8S24i8i8i8i8i4i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<24> __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, int64_t __arg5, int32_t __arg6, int64_t __arg7, int64_t __arg8, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<24>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int64_t*)(localVarBase+argVarIndexs[7]), *(int64_t*)(localVarBase+argVarIndexs[8]), method);
}


static void __M2N_vi8S252(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<252> __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<252>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vi8S2i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<2> __arg1, int64_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<2>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi8S4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<4> __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vi8S40(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<40> __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<40>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vi8S40S40(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<40> __arg1, ValueTypeSize<40> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<40>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<40>*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi8S40S40i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<40> __arg1, ValueTypeSize<40> __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<40>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<40>*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_vi8S40S40i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<40> __arg1, ValueTypeSize<40> __arg2, int64_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<40>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<40>*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vi8S40i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<40> __arg1, int32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<40>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi8S40i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<40> __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<40>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vi8S40i4i4S40i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<40> __arg1, int32_t __arg2, int32_t __arg3, ValueTypeSize<40> __arg4, int32_t __arg5, int32_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<40>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(ValueTypeSize<40>*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_vi8S40i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<40> __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<40>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vi8S40i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<40> __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<40>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_vi8S40i4r4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<40> __arg1, int32_t __arg2, float __arg3, uint8_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<40>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vi8S40u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<40> __arg1, uint8_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<40>*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi8S40u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<40> __arg1, uint8_t __arg2, uint8_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<40>*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vi8S48(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<48> __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<48>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vi8S4S4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<4> __arg1, ValueTypeSize<4> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi8S4S96(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<4> __arg1, ValueTypeSize<96> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<96>*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi8S4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<4> __arg1, int32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi8S52(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<52> __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<52>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vi8S64(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<64> __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<64>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vi8S64S64(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<64> __arg1, ValueTypeSize<64> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<64>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<64>*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi8S64i8i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<64> __arg1, int64_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<64>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_vi8S64i8i4i4i4i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<64> __arg1, int64_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int64_t __arg7, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<64>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int64_t*)(localVarBase+argVarIndexs[7]), method);
}


static void __M2N_vi8S64i8i4i8i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<64> __arg1, int64_t __arg2, int32_t __arg3, int64_t __arg4, int32_t __arg5, int64_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<64>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int64_t*)(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_vi8S64i8i4i8i4i8i4u1i8i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<64> __arg1, int64_t __arg2, int32_t __arg3, int64_t __arg4, int32_t __arg5, int64_t __arg6, int32_t __arg7, uint8_t __arg8, int64_t __arg9, int32_t __arg10, int64_t __arg11, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<64>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int64_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), *(uint8_t*)(localVarBase+argVarIndexs[8]), *(int64_t*)(localVarBase+argVarIndexs[9]), *(int32_t*)(localVarBase+argVarIndexs[10]), *(int64_t*)(localVarBase+argVarIndexs[11]), method);
}


static void __M2N_vi8S68(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<68> __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<68>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vi8S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vi8S8S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<8> __arg1, ValueTypeSize<8> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi8S8S8S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<8> __arg1, ValueTypeSize<8> __arg2, ValueTypeSize<8> __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vi8S8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<8> __arg1, int32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi8S8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<8> __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vi8S8i4i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<8> __arg1, int32_t __arg2, int32_t __arg3, int64_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vi8S8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<8> __arg1, int64_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi8S8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<8> __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vi8S96(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, ValueTypeSize<96> __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<96>*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vi8i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int16_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int16_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vi8i2i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int16_t __arg1, int16_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int16_t*)(localVarBase+argVarIndexs[1]), *(int16_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vi8i4S108(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, ValueTypeSize<108> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<108>*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi8i4S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, ValueTypeSize<12> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi8i4S120(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, ValueTypeSize<120> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<120>*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi8i4S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, ValueTypeSize<16> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi8i4S16i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, ValueTypeSize<16> __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vi8i4S16r4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, ValueTypeSize<16> __arg2, float __arg3, uint32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), *(uint32_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vi8i4S24(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, ValueTypeSize<24> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<24>*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi8i4S4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, ValueTypeSize<4> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi8i4S40(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, ValueTypeSize<40> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<40>*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi8i4S40i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, ValueTypeSize<40> __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<40>*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vi8i4S48(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, ValueTypeSize<48> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<48>*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi8i4S52i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, ValueTypeSize<52> __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<52>*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vi8i4S64(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, ValueTypeSize<64> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<64>*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi8i4S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, ValueTypeSize<8> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi8i4S8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, ValueTypeSize<8> __arg2, int64_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vi8i4S96(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, ValueTypeSize<96> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<96>*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi8i4i2i2u1u1u1u1u1u1u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int16_t __arg2, int16_t __arg3, uint8_t __arg4, uint8_t __arg5, uint8_t __arg6, uint8_t __arg7, uint8_t __arg8, uint8_t __arg9, uint8_t __arg10, uint8_t __arg11, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int16_t*)(localVarBase+argVarIndexs[2]), *(int16_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), *(uint8_t*)(localVarBase+argVarIndexs[5]), *(uint8_t*)(localVarBase+argVarIndexs[6]), *(uint8_t*)(localVarBase+argVarIndexs[7]), *(uint8_t*)(localVarBase+argVarIndexs[8]), *(uint8_t*)(localVarBase+argVarIndexs[9]), *(uint8_t*)(localVarBase+argVarIndexs[10]), *(uint8_t*)(localVarBase+argVarIndexs[11]), method);
}


static void __M2N_vi8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi8i4i4S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, ValueTypeSize<16> __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vi8i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vi8i4i4i4S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, ValueTypeSize<16> __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vi8i4i4i4S16i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, ValueTypeSize<16> __arg4, int32_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_vi8i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vi8i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_vi8i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_vi8i4i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), method);
}


static void __M2N_vi8i4i4i4i4i4i4i8i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int64_t __arg7, int32_t __arg8, int32_t __arg9, int32_t __arg10, int32_t __arg11, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int64_t*)(localVarBase+argVarIndexs[7]), *(int32_t*)(localVarBase+argVarIndexs[8]), *(int32_t*)(localVarBase+argVarIndexs[9]), *(int32_t*)(localVarBase+argVarIndexs[10]), *(int32_t*)(localVarBase+argVarIndexs[11]), method);
}


static void __M2N_vi8i4i4i4i4i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int64_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int64_t*)(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_vi8i4i4i4i4i4i8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int64_t __arg6, uint8_t __arg7, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int64_t*)(localVarBase+argVarIndexs[6]), *(uint8_t*)(localVarBase+argVarIndexs[7]), method);
}


static void __M2N_vi8i4i4i4i4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, uint8_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(uint8_t*)(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_vi8i4i4i4i4i4u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, uint8_t __arg6, uint8_t __arg7, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(uint8_t*)(localVarBase+argVarIndexs[6]), *(uint8_t*)(localVarBase+argVarIndexs[7]), method);
}


static void __M2N_vi8i4i4i4i4i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int64_t __arg5, int32_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_vi8i4i4i4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, uint8_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(uint8_t*)(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_vi8i4i4i4i4u1i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, uint8_t __arg5, int64_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(uint8_t*)(localVarBase+argVarIndexs[5]), *(int64_t*)(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_vi8i4i4i4i4u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, uint8_t __arg5, uint8_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(uint8_t*)(localVarBase+argVarIndexs[5]), *(uint8_t*)(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_vi8i4i4i4i4u1u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, uint8_t __arg5, uint8_t __arg6, uint8_t __arg7, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(uint8_t*)(localVarBase+argVarIndexs[5]), *(uint8_t*)(localVarBase+argVarIndexs[6]), *(uint8_t*)(localVarBase+argVarIndexs[7]), method);
}


static void __M2N_vi8i4i4i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int64_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vi8i4i4i4i8i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int64_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), method);
}


static void __M2N_vi8i4i4i4i8i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int64_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), *(int32_t*)(localVarBase+argVarIndexs[8]), method);
}


static void __M2N_vi8i4i4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, uint8_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vi8i4i4i4u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, uint8_t __arg4, uint8_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), *(uint8_t*)(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_vi8i4i4i4u1u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, uint8_t __arg4, uint8_t __arg5, uint8_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), *(uint8_t*)(localVarBase+argVarIndexs[5]), *(uint8_t*)(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_vi8i4i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int64_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vi8i4i4i8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int64_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_vi8i4i4i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, int64_t __arg3, int64_t __arg4, int64_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_vi8i4i4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, float __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vi8i4i4r4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, float __arg3, uint8_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vi8i4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, uint8_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vi8i4i4u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, uint8_t __arg3, uint8_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vi8i4i4u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, uint16_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint16_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vi8i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi8i4i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vi8i4i8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vi8i4i8i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_vi8i4i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vi8i4i8i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, int64_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vi8i4i8i8i4i8i4u1i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, int64_t __arg3, int32_t __arg4, int64_t __arg5, int32_t __arg6, uint8_t __arg7, int32_t __arg8, int64_t __arg9, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(uint8_t*)(localVarBase+argVarIndexs[7]), *(int32_t*)(localVarBase+argVarIndexs[8]), *(int64_t*)(localVarBase+argVarIndexs[9]), method);
}


static void __M2N_vi8i4i8i8i4i8i4u1i4i8i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, int64_t __arg3, int32_t __arg4, int64_t __arg5, int32_t __arg6, uint8_t __arg7, int32_t __arg8, int64_t __arg9, int32_t __arg10, int64_t __arg11, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(uint8_t*)(localVarBase+argVarIndexs[7]), *(int32_t*)(localVarBase+argVarIndexs[8]), *(int64_t*)(localVarBase+argVarIndexs[9]), *(int32_t*)(localVarBase+argVarIndexs[10]), *(int64_t*)(localVarBase+argVarIndexs[11]), method);
}


static void __M2N_vi8i4i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vi8i4i8i8i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, int64_t __arg5, int64_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), *(int64_t*)(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_vi8i4i8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, int64_t __arg2, uint8_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vi8i4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, float __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi8i4r4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, float __arg2, int64_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vi8i4r4i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, float __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vi8i4r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, double __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(double*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi8i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, uint8_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi8i4u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int32_t __arg1, uint16_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint16_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vi8i8S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, ValueTypeSize<16> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi8i8S40(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, ValueTypeSize<40> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<40>*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi8i8S40i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, ValueTypeSize<40> __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<40>*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_vi8i8S64(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, ValueTypeSize<64> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<64>*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi8i8S64i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, ValueTypeSize<64> __arg2, int64_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<64>*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vi8i8S64i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, ValueTypeSize<64> __arg2, int64_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<64>*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vi8i8S64i8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, ValueTypeSize<64> __arg2, int64_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<64>*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_vi8i8S64i8i4i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, ValueTypeSize<64> __arg2, int64_t __arg3, int32_t __arg4, int32_t __arg5, int64_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<64>*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int64_t*)(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_vi8i8S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, ValueTypeSize<8> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi8i8S8S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, ValueTypeSize<8> __arg2, ValueTypeSize<8> __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vi8i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi8i8i4S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, ValueTypeSize<16> __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vi8i8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vi8i8i4i4S40(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, ValueTypeSize<40> __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(ValueTypeSize<40>*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vi8i8i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vi8i8i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_vi8i8i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_vi8i8i4i4i4i4u1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, uint8_t __arg6, int32_t __arg7, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(uint8_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), method);
}


static void __M2N_vi8i8i4i4i4u1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, uint8_t __arg5, int32_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(uint8_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_vi8i8i4i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, int64_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vi8i8i4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, uint8_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vi8i8i4i4u1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, uint8_t __arg4, int32_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_vi8i8i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int64_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vi8i8i4i8S40(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int64_t __arg3, ValueTypeSize<40> __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(ValueTypeSize<40>*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vi8i8i4i8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int64_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_vi8i8i4i8i4i8i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int64_t __arg3, int32_t __arg4, int64_t __arg5, int32_t __arg6, int64_t __arg7, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int64_t*)(localVarBase+argVarIndexs[7]), method);
}


static void __M2N_vi8i8i4i8i4i8i4u1S1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int64_t __arg3, int32_t __arg4, int64_t __arg5, int32_t __arg6, uint8_t __arg7, ValueTypeSize<1> __arg8, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(uint8_t*)(localVarBase+argVarIndexs[7]), *(ValueTypeSize<1>*)(localVarBase+argVarIndexs[8]), method);
}


static void __M2N_vi8i8i4i8i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, int64_t __arg3, int32_t __arg4, uint8_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(uint8_t*)(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_vi8i8i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, uint8_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vi8i8i4u1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, uint8_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vi8i8i4u1u1u1u1i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, uint8_t __arg3, uint8_t __arg4, uint8_t __arg5, uint8_t __arg6, int64_t __arg7, int32_t __arg8, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), *(uint8_t*)(localVarBase+argVarIndexs[5]), *(uint8_t*)(localVarBase+argVarIndexs[6]), *(int64_t*)(localVarBase+argVarIndexs[7]), *(int32_t*)(localVarBase+argVarIndexs[8]), method);
}


static void __M2N_vi8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi8i8i8S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, ValueTypeSize<16> __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vi8i8i8S16i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, ValueTypeSize<16> __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vi8i8i8S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, ValueTypeSize<8> __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vi8i8i8S8S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, ValueTypeSize<8> __arg3, ValueTypeSize<8> __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[3]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vi8i8i8S8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, ValueTypeSize<8> __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vi8i8i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vi8i8i8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vi8i8i8i4i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int32_t __arg3, int32_t __arg4, int64_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_vi8i8i8i4i8i4i8S24i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int32_t __arg3, int64_t __arg4, int32_t __arg5, int64_t __arg6, ValueTypeSize<24> __arg7, int32_t __arg8, uint8_t __arg9, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int64_t*)(localVarBase+argVarIndexs[6]), *(ValueTypeSize<24>*)(localVarBase+argVarIndexs[7]), *(int32_t*)(localVarBase+argVarIndexs[8]), *(uint8_t*)(localVarBase+argVarIndexs[9]), method);
}


static void __M2N_vi8i8i8i4i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int32_t __arg3, int64_t __arg4, int64_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_vi8i8i8i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int32_t __arg3, uint8_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vi8i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vi8i8i8i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vi8i8i8i8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_vi8i8i8i8i4i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, int32_t __arg4, int32_t __arg5, int64_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int64_t*)(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_vi8i8i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vi8i8i8i8i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, int32_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_vi8i8i8i8i8i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, int32_t __arg5, int64_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int64_t*)(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_vi8i8i8i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, int64_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_vi8i8i8i8i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, int64_t __arg5, int64_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), *(int64_t*)(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_vi8i8i8i8i8i8i8i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, int64_t __arg5, int64_t __arg6, int32_t __arg7, int64_t __arg8, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), *(int64_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), *(int64_t*)(localVarBase+argVarIndexs[8]), method);
}


static void __M2N_vi8i8i8i8i8i8i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, int64_t __arg5, int64_t __arg6, int64_t __arg7, int64_t __arg8, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), *(int64_t*)(localVarBase+argVarIndexs[6]), *(int64_t*)(localVarBase+argVarIndexs[7]), *(int64_t*)(localVarBase+argVarIndexs[8]), method);
}


static void __M2N_vi8i8i8i8i8u1i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, uint8_t __arg5, int32_t __arg6, int32_t __arg7, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(uint8_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), method);
}


static void __M2N_vi8i8i8i8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, uint8_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vi8i8i8r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, float __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vi8i8i8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, uint8_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vi8i8i8u1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, uint8_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vi8i8i8u1i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, uint8_t __arg3, int32_t __arg4, uint8_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(uint8_t*)(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_vi8i8r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, float __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi8i8r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, float __arg2, float __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vi8i8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, uint8_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi8i8u1S32(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, uint8_t __arg2, ValueTypeSize<32> __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<32>*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vi8i8u1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, uint8_t __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vi8i8u1i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, uint8_t __arg2, int32_t __arg3, uint8_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vi8i8u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, uint8_t __arg2, uint8_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vi8i8u1u1i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, uint8_t __arg2, uint8_t __arg3, int64_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vi8i8u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, uint32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(uint32_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi8i8u4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, uint32_t __arg2, int64_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(uint32_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vi8i8u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, int64_t __arg1, uint64_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(uint64_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi8r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, float __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vi8r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, float __arg1, float __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi8r4r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, float __arg1, float __arg2, float __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vi8r4r4r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, float __arg1, float __arg2, float __arg3, float __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), *(float*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vi8r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, double __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(double*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vi8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, uint8_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vi8u1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, uint8_t __arg1, int32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi8u1i4i4S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, uint8_t __arg1, int32_t __arg2, int32_t __arg3, ValueTypeSize<8> __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vi8u1i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, uint8_t __arg1, int32_t __arg2, int64_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vi8u1i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, uint8_t __arg1, int64_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi8u1i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, uint8_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vi8u1i8u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, uint8_t __arg1, int64_t __arg2, uint8_t __arg3, uint8_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vi8u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, uint8_t __arg1, uint8_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi8u1u1S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, uint8_t __arg1, uint8_t __arg2, ValueTypeSize<16> __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vi8u1u1i4S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, uint8_t __arg1, uint8_t __arg2, int32_t __arg3, ValueTypeSize<8> __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vi8u1u1i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, uint8_t __arg1, uint8_t __arg2, int32_t __arg3, uint8_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vi8u1u1i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, uint8_t __arg1, uint8_t __arg2, int64_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vi8u1u1i8i8i8i8i4i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, uint8_t __arg1, uint8_t __arg2, int64_t __arg3, int64_t __arg4, int64_t __arg5, int64_t __arg6, int32_t __arg7, int32_t __arg8, int64_t __arg9, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int64_t*)(localVarBase+argVarIndexs[5]), *(int64_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), *(int32_t*)(localVarBase+argVarIndexs[8]), *(int64_t*)(localVarBase+argVarIndexs[9]), method);
}


static void __M2N_vi8u1u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, uint8_t __arg1, uint8_t __arg2, uint8_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vi8u1u1u1i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, uint8_t __arg1, uint8_t __arg2, uint8_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), method);
}


static void __M2N_vi8u1u1u1i4i4i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, uint8_t __arg1, uint8_t __arg2, uint8_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, int32_t __arg9, int32_t __arg10, int32_t __arg11, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), *(int32_t*)(localVarBase+argVarIndexs[8]), *(int32_t*)(localVarBase+argVarIndexs[9]), *(int32_t*)(localVarBase+argVarIndexs[10]), *(int32_t*)(localVarBase+argVarIndexs[11]), method);
}


static void __M2N_vi8u1u1u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, uint8_t __arg1, uint8_t __arg2, uint8_t __arg3, uint8_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vi8u1u1u4u4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, uint8_t __arg1, uint8_t __arg2, uint32_t __arg3, uint32_t __arg4, uint32_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(uint32_t*)(localVarBase+argVarIndexs[3]), *(uint32_t*)(localVarBase+argVarIndexs[4]), *(uint32_t*)(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_vi8u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, uint16_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vi8u2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, uint16_t __arg1, int32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi8u2i4i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, uint16_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), *(int32_t*)(localVarBase+argVarIndexs[8]), method);
}


static void __M2N_vi8u2i4u1u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, uint16_t __arg1, int32_t __arg2, uint8_t __arg3, uint8_t __arg4, uint8_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), *(uint8_t*)(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_vi8u2u1u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, uint16_t __arg1, uint8_t __arg2, uint8_t __arg3, uint8_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vi8u2u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, uint16_t __arg1, uint16_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), *(uint16_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi8u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, uint32_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vi8u4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, uint32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vi8u4u4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, uint32_t __arg1, uint32_t __arg2, uint32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), *(uint32_t*)(localVarBase+argVarIndexs[2]), *(uint32_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vi8u4u4u4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, uint32_t __arg1, uint32_t __arg2, uint32_t __arg3, uint32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), *(uint32_t*)(localVarBase+argVarIndexs[2]), *(uint32_t*)(localVarBase+argVarIndexs[3]), *(uint32_t*)(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vi8u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, uint64_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint64_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vi8u8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, uint64_t __arg1, int64_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vi8u8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, uint64_t __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vi8u8u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, uint64_t __arg1, uint64_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(uint64_t*)(localVarBase+argVarIndexs[1]), *(uint64_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vr4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(float __arg0, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_vr4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(float __arg0, float __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vr4r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(float __arg0, float __arg1, float __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vr4r4r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(float __arg0, float __arg1, float __arg2, float __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vu1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_vu1i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uint8_t __arg0, int64_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vu1i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uint8_t __arg0, int64_t __arg1, int64_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vu1i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uint8_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vu1u1S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uint8_t __arg0, uint8_t __arg1, ValueTypeSize<16> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vu1u1S16r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uint8_t __arg0, uint8_t __arg1, ValueTypeSize<16> __arg2, float __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vu4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), method);
}


Managed2NativeMethodInfo hybridclr::interpreter::g_managed2nativeStub[] = 
{

	{"S108", __M2N_S108},
	{"S108i8", __M2N_S108i8},
	{"S108i8i4", __M2N_S108i8i4},
	{"S12", __M2N_S12},
	{"S120i8", __M2N_S120i8},
	{"S120i8i4", __M2N_S120i8i4},
	{"S128i8", __M2N_S128i8},
	{"S12S12", __M2N_S12S12},
	{"S12S12S12", __M2N_S12S12S12},
	{"S12S12S12r4", __M2N_S12S12S12r4},
	{"S12S12i4", __M2N_S12S12i4},
	{"S12S12r4", __M2N_S12S12r4},
	{"S12S16", __M2N_S12S16},
	{"S12S16S12", __M2N_S12S16S12},
	{"S12S8", __M2N_S12S8},
	{"S12i8", __M2N_S12i8},
	{"S12i8S12", __M2N_S12i8S12},
	{"S12i8S12i4", __M2N_S12i8S12i4},
	{"S12i8i4", __M2N_S12i8i4},
	{"S12i8i8", __M2N_S12i8i8},
	{"S12i8r4", __M2N_S12i8r4},
	{"S12i8u1", __M2N_S12i8u1},
	{"S12r4S12", __M2N_S12r4S12},
	{"S12u1", __M2N_S12u1},
	{"S144i8", __M2N_S144i8},
	{"S16", __M2N_S16},
	{"S16S12", __M2N_S16S12},
	{"S16S12S12", __M2N_S16S12S12},
	{"S16S16", __M2N_S16S16},
	{"S16S16S16", __M2N_S16S16S16},
	{"S16S16S16S16", __M2N_S16S16S16S16},
	{"S16S16S16r4", __M2N_S16S16S16r4},
	{"S16S16i4", __M2N_S16S16i4},
	{"S16S16i4i4", __M2N_S16S16i4i4},
	{"S16S16r4", __M2N_S16S16r4},
	{"S16S4", __M2N_S16S4},
	{"S16S64S16", __M2N_S16S64S16},
	{"S16S8", __M2N_S16S8},
	{"S16i1", __M2N_S16i1},
	{"S16i2", __M2N_S16i2},
	{"S16i4", __M2N_S16i4},
	{"S16i8", __M2N_S16i8},
	{"S16i8S16", __M2N_S16i8S16},
	{"S16i8S16i8", __M2N_S16i8S16i8},
	{"S16i8S8", __M2N_S16i8S8},
	{"S16i8S8S16", __M2N_S16i8S8S16},
	{"S16i8i4", __M2N_S16i8i4},
	{"S16i8i4i4", __M2N_S16i8i4i4},
	{"S16i8i4i4S16", __M2N_S16i8i4i4S16},
	{"S16i8i4i8", __M2N_S16i8i4i8},
	{"S16i8i8", __M2N_S16i8i8},
	{"S16i8i8S176S16i8", __M2N_S16i8i8S176S16i8},
	{"S16i8r4", __M2N_S16i8r4},
	{"S16i8r4r4", __M2N_S16i8r4r4},
	{"S16i8u1", __M2N_S16i8u1},
	{"S16r4", __M2N_S16r4},
	{"S16r4S12", __M2N_S16r4S12},
	{"S16r4S16", __M2N_S16r4S16},
	{"S16r4r4r4", __M2N_S16r4r4r4},
	{"S16r4r4r4r4", __M2N_S16r4r4r4r4},
	{"S16r8", __M2N_S16r8},
	{"S16u1", __M2N_S16u1},
	{"S16u2", __M2N_S16u2},
	{"S16u4", __M2N_S16u4},
	{"S16u8", __M2N_S16u8},
	{"S1i8", __M2N_S1i8},
	{"S1i8i8", __M2N_S1i8i8},
	{"S2", __M2N_S2},
	{"S20i8", __M2N_S20i8},
	{"S24", __M2N_S24},
	{"S24S8", __M2N_S24S8},
	{"S24S8i4i4", __M2N_S24S8i4i4},
	{"S24S8i4i4i4", __M2N_S24S8i4i4i4},
	{"S24i8", __M2N_S24i8},
	{"S24i8S12", __M2N_S24i8S12},
	{"S24i8S12i4", __M2N_S24i8S12i4},
	{"S24i8S208", __M2N_S24i8S208},
	{"S24i8i4", __M2N_S24i8i4},
	{"S24i8i8", __M2N_S24i8i8},
	{"S24i8i8i8u1u1", __M2N_S24i8i8i8u1u1},
	{"S24u2", __M2N_S24u2},
	{"S28i8i4", __M2N_S28i8i4},
	{"S296i8", __M2N_S296i8},
	{"S2i8", __M2N_S2i8},
	{"S32i8", __M2N_S32i8},
	{"S4", __M2N_S4},
	{"S40i4", __M2N_S40i4},
	{"S40i8", __M2N_S40i8},
	{"S48i8", __M2N_S48i8},
	{"S48i8i4", __M2N_S48i8i4},
	{"S4S16", __M2N_S4S16},
	{"S4i4", __M2N_S4i4},
	{"S4i8", __M2N_S4i8},
	{"S4i8i4", __M2N_S4i8i4},
	{"S4i8i8", __M2N_S4i8i8},
	{"S52i8", __M2N_S52i8},
	{"S56i8", __M2N_S56i8},
	{"S64", __M2N_S64},
	{"S64S12", __M2N_S64S12},
	{"S64S12S12S12", __M2N_S64S12S12S12},
	{"S64S12S16S12", __M2N_S64S12S16S12},
	{"S64S16", __M2N_S64S16},
	{"S64S24", __M2N_S64S24},
	{"S64S64", __M2N_S64S64},
	{"S64S64S64", __M2N_S64S64S64},
	{"S64S64u1", __M2N_S64S64u1},
	{"S64i8", __M2N_S64i8},
	{"S64i8i4", __M2N_S64i8i4},
	{"S64i8i8", __M2N_S64i8i8},
	{"S64r4r4r4r4", __M2N_S64r4r4r4r4},
	{"S64r4r4r4r4r4r4", __M2N_S64r4r4r4r4r4r4},
	{"S68", __M2N_S68},
	{"S72i8", __M2N_S72i8},
	{"S8", __M2N_S8},
	{"S80i8", __M2N_S80i8},
	{"S88i8", __M2N_S88i8},
	{"S8S12", __M2N_S8S12},
	{"S8S16", __M2N_S8S16},
	{"S8S8", __M2N_S8S8},
	{"S8S8S8", __M2N_S8S8S8},
	{"S8S8S8r4", __M2N_S8S8S8r4},
	{"S8S8i4", __M2N_S8S8i4},
	{"S8S8r4", __M2N_S8S8r4},
	{"S8i8", __M2N_S8i8},
	{"S8i8S8", __M2N_S8i8S8},
	{"S8i8i4", __M2N_S8i8i4},
	{"S8i8i4i4i4i4i4i4i4i4", __M2N_S8i8i4i4i4i4i4i4i4i4},
	{"S8i8i8", __M2N_S8i8i8},
	{"S8i8r8", __M2N_S8i8r8},
	{"S8r4S8", __M2N_S8r4S8},
	{"S8r8", __M2N_S8r8},
	{"S8u4", __M2N_S8u4},
	{"S96i8", __M2N_S96i8},
	{"S96i8i4", __M2N_S96i8i4},
	{"i1", __M2N_i1},
	{"i1S16", __M2N_i1S16},
	{"i1i1i1", __M2N_i1i1i1},
	{"i1i2", __M2N_i1i2},
	{"i1i4", __M2N_i1i4},
	{"i1i8", __M2N_i1i8},
	{"i1i8i4i8", __M2N_i1i8i4i8},
	{"i1i8i8", __M2N_i1i8i8},
	{"i1r4", __M2N_i1r4},
	{"i1r8", __M2N_i1r8},
	{"i1u1", __M2N_i1u1},
	{"i1u2", __M2N_i1u2},
	{"i1u4", __M2N_i1u4},
	{"i1u8", __M2N_i1u8},
	{"i2", __M2N_i2},
	{"i2S16", __M2N_i2S16},
	{"i2i1", __M2N_i2i1},
	{"i2i2i2", __M2N_i2i2i2},
	{"i2i4", __M2N_i2i4},
	{"i2i8", __M2N_i2i8},
	{"i2i8i4i8", __M2N_i2i8i4i8},
	{"i2i8i8", __M2N_i2i8i8},
	{"i2r4", __M2N_i2r4},
	{"i2r8", __M2N_i2r8},
	{"i2u1", __M2N_i2u1},
	{"i2u2", __M2N_i2u2},
	{"i2u4", __M2N_i2u4},
	{"i2u8", __M2N_i2u8},
	{"i4", __M2N_i4},
	{"i4S16", __M2N_i4S16},
	{"i4S16S16", __M2N_i4S16S16},
	{"i4S16i4i4i8", __M2N_i4S16i4i4i8},
	{"i4S16i8", __M2N_i4S16i8},
	{"i4S16u2", __M2N_i4S16u2},
	{"i4S16u8", __M2N_i4S16u8},
	{"i4S4", __M2N_i4S4},
	{"i4S52", __M2N_i4S52},
	{"i4S8S8", __M2N_i4S8S8},
	{"i4i2", __M2N_i4i2},
	{"i4i4", __M2N_i4i4},
	{"i4i4i4", __M2N_i4i4i4},
	{"i4i4i4i4", __M2N_i4i4i4i4},
	{"i4i4i4i8", __M2N_i4i4i4i8},
	{"i4i4u1", __M2N_i4i4u1},
	{"i4i8", __M2N_i4i8},
	{"i4i8S1", __M2N_i4i8S1},
	{"i4i8S12", __M2N_i4i8S12},
	{"i4i8S12S12", __M2N_i4i8S12S12},
	{"i4i8S12i4i4", __M2N_i4i8S12i4i4},
	{"i4i8S12i8", __M2N_i4i8S12i8},
	{"i4i8S16", __M2N_i4i8S16},
	{"i4i8S16S16", __M2N_i4i8S16S16},
	{"i4i8S16S16u1", __M2N_i4i8S16S16u1},
	{"i4i8S16i4i4", __M2N_i4i8S16i4i4},
	{"i4i8S16i8", __M2N_i4i8S16i8},
	{"i4i8S1S1", __M2N_i4i8S1S1},
	{"i4i8S24", __M2N_i4i8S24},
	{"i4i8S24S24", __M2N_i4i8S24S24},
	{"i4i8S24i4i4", __M2N_i4i8S24i4i4},
	{"i4i8S24i8", __M2N_i4i8S24i8},
	{"i4i8S28", __M2N_i4i8S28},
	{"i4i8S32", __M2N_i4i8S32},
	{"i4i8S4", __M2N_i4i8S4},
	{"i4i8S40", __M2N_i4i8S40},
	{"i4i8S48", __M2N_i4i8S48},
	{"i4i8S4S4", __M2N_i4i8S4S4},
	{"i4i8S4i4i4", __M2N_i4i8S4i4i4},
	{"i4i8S4i8", __M2N_i4i8S4i8},
	{"i4i8S64", __M2N_i4i8S64},
	{"i4i8S8", __M2N_i4i8S8},
	{"i4i8S8S8", __M2N_i4i8S8S8},
	{"i4i8S8i4i4", __M2N_i4i8S8i4i4},
	{"i4i8S8i8", __M2N_i4i8S8i8},
	{"i4i8S8i8i8", __M2N_i4i8S8i8i8},
	{"i4i8S8u1", __M2N_i4i8S8u1},
	{"i4i8i1", __M2N_i4i8i1},
	{"i4i8i2", __M2N_i4i8i2},
	{"i4i8i4", __M2N_i4i8i4},
	{"i4i8i4S28", __M2N_i4i8i4S28},
	{"i4i8i4i4", __M2N_i4i8i4i4},
	{"i4i8i4i4S12i8", __M2N_i4i8i4i4S12i8},
	{"i4i8i4i4S16i8", __M2N_i4i8i4i4S16i8},
	{"i4i8i4i4S24i8", __M2N_i4i8i4i4S24i8},
	{"i4i8i4i4S4i8", __M2N_i4i8i4i4S4i8},
	{"i4i8i4i4S8i8", __M2N_i4i8i4i4S8i8},
	{"i4i8i4i4i4", __M2N_i4i8i4i4i4},
	{"i4i8i4i4i4i8", __M2N_i4i8i4i4i4i8},
	{"i4i8i4i4i8", __M2N_i4i8i4i4i8},
	{"i4i8i4i4i8i8", __M2N_i4i8i4i4i8i8},
	{"i4i8i4i4r8i8", __M2N_i4i8i4i4r8i8},
	{"i4i8i4i4u8i8", __M2N_i4i8i4i4u8i8},
	{"i4i8i4i8", __M2N_i4i8i4i8},
	{"i4i8i4i8i4", __M2N_i4i8i4i8i4},
	{"i4i8i4i8i4i4", __M2N_i4i8i4i8i4i4},
	{"i4i8i4i8i4i4i4", __M2N_i4i8i4i8i4i4i4},
	{"i4i8i4u1", __M2N_i4i8i4u1},
	{"i4i8i4u8", __M2N_i4i8i4u8},
	{"i4i8i8", __M2N_i4i8i8},
	{"i4i8i8S12i4i4", __M2N_i4i8i8S12i4i4},
	{"i4i8i8S16i4i4", __M2N_i4i8i8S16i4i4},
	{"i4i8i8S24i4i4", __M2N_i4i8i8S24i4i4},
	{"i4i8i8S4i4i4", __M2N_i4i8i8S4i4i4},
	{"i4i8i8S8i4i4", __M2N_i4i8i8S8i4i4},
	{"i4i8i8i4", __M2N_i4i8i8i4},
	{"i4i8i8i4i4", __M2N_i4i8i8i4i4},
	{"i4i8i8i4i4S12i8", __M2N_i4i8i8i4i4S12i8},
	{"i4i8i8i4i4S16i8", __M2N_i4i8i8i4i4S16i8},
	{"i4i8i8i4i4S24i8", __M2N_i4i8i8i4i4S24i8},
	{"i4i8i8i4i4S4i8", __M2N_i4i8i8i4i4S4i8},
	{"i4i8i8i4i4S8i8", __M2N_i4i8i8i4i4S8i8},
	{"i4i8i8i4i4i4", __M2N_i4i8i8i4i4i4},
	{"i4i8i8i4i4i4i8", __M2N_i4i8i8i4i4i4i8},
	{"i4i8i8i4i4i8", __M2N_i4i8i8i4i4i8},
	{"i4i8i8i4i4i8i4", __M2N_i4i8i8i4i4i8i4},
	{"i4i8i8i4i4i8i4i4i4", __M2N_i4i8i8i4i4i8i4i4i4},
	{"i4i8i8i4i4i8i4u1", __M2N_i4i8i8i4i4i8i4u1},
	{"i4i8i8i4i4i8i8", __M2N_i4i8i8i4i4i8i8},
	{"i4i8i8i4i4r8i8", __M2N_i4i8i8i4i4r8i8},
	{"i4i8i8i4i4u1", __M2N_i4i8i8i4i4u1},
	{"i4i8i8i4i4u8i8", __M2N_i4i8i8i4i4u8i8},
	{"i4i8i8i4i8i4", __M2N_i4i8i8i4i8i4},
	{"i4i8i8i4i8i4u1", __M2N_i4i8i8i4i8i4u1},
	{"i4i8i8i4u1", __M2N_i4i8i8i4u1},
	{"i4i8i8i8", __M2N_i4i8i8i8},
	{"i4i8i8i8i4", __M2N_i4i8i8i8i4},
	{"i4i8i8i8i4i4", __M2N_i4i8i8i8i4i4},
	{"i4i8i8i8i4i4i4", __M2N_i4i8i8i8i4i4i4},
	{"i4i8i8i8i8", __M2N_i4i8i8i8i8},
	{"i4i8i8i8i8i8i8i8i8", __M2N_i4i8i8i8i8i8i8i8i8},
	{"i4i8i8i8i8i8i8u4u4u1i8u1", __M2N_i4i8i8i8i8i8i8u4u4u1i8u1},
	{"i4i8i8r8i4i4", __M2N_i4i8i8r8i4i4},
	{"i4i8i8u1i4", __M2N_i4i8i8u1i4},
	{"i4i8i8u1i8", __M2N_i4i8i8u1i8},
	{"i4i8r4", __M2N_i4i8r4},
	{"i4i8r4r4", __M2N_i4i8r4r4},
	{"i4i8r8", __M2N_i4i8r8},
	{"i4i8r8i4i4", __M2N_i4i8r8i4i4},
	{"i4i8r8i8", __M2N_i4i8r8i8},
	{"i4i8r8r8", __M2N_i4i8r8r8},
	{"i4i8u1", __M2N_i4i8u1},
	{"i4i8u1i4", __M2N_i4i8u1i4},
	{"i4i8u1i8i4", __M2N_i4i8u1i8i4},
	{"i4i8u1u1", __M2N_i4i8u1u1},
	{"i4i8u2", __M2N_i4i8u2},
	{"i4i8u2i4", __M2N_i4i8u2i4},
	{"i4i8u2i4i4", __M2N_i4i8u2i4i4},
	{"i4i8u4", __M2N_i4i8u4},
	{"i4i8u8", __M2N_i4i8u8},
	{"i4i8u8u8", __M2N_i4i8u8u8},
	{"i4r4", __M2N_i4r4},
	{"i4r8", __M2N_i4r8},
	{"i4u1", __M2N_i4u1},
	{"i4u2", __M2N_i4u2},
	{"i4u2i4", __M2N_i4u2i4},
	{"i4u2u2", __M2N_i4u2u2},
	{"i4u2u2u2u2", __M2N_i4u2u2u2u2},
	{"i4u4", __M2N_i4u4},
	{"i4u4i4", __M2N_i4u4i4},
	{"i4u8", __M2N_i4u8},
	{"i8", __M2N_i8},
	{"i8S16", __M2N_i8S16},
	{"i8S16S16", __M2N_i8S16S16},
	{"i8S16S16S16", __M2N_i8S16S16S16},
	{"i8S16S16i8", __M2N_i8S16S16i8},
	{"i8S16i4i4i8", __M2N_i8S16i4i4i8},
	{"i8S4", __M2N_i8S4},
	{"i8S52", __M2N_i8S52},
	{"i8S8", __M2N_i8S8},
	{"i8S8S8", __M2N_i8S8S8},
	{"i8i1", __M2N_i8i1},
	{"i8i2", __M2N_i8i2},
	{"i8i4", __M2N_i8i4},
	{"i8i4S16i8", __M2N_i8i4S16i8},
	{"i8i4S32i8", __M2N_i8i4S32i8},
	{"i8i4S48i8", __M2N_i8i4S48i8},
	{"i8i4S8", __M2N_i8i4S8},
	{"i8i4i4", __M2N_i8i4i4},
	{"i8i4i4i4i4", __M2N_i8i4i4i4i4},
	{"i8i4i4i4u2i4", __M2N_i8i4i4i4u2i4},
	{"i8i4i8", __M2N_i8i4i8},
	{"i8i4i8i8", __M2N_i8i4i8i8},
	{"i8i8", __M2N_i8i8},
	{"i8i8S12S16", __M2N_i8i8S12S16},
	{"i8i8S12S16i8", __M2N_i8i8S12S16i8},
	{"i8i8S16", __M2N_i8i8S16},
	{"i8i8S16S8", __M2N_i8i8S16S8},
	{"i8i8S16S8r4", __M2N_i8i8S16S8r4},
	{"i8i8S16S8r4u4", __M2N_i8i8S16S8r4u4},
	{"i8i8S16S8r4u4i4", __M2N_i8i8S16S8r4u4i4},
	{"i8i8S16S8r4u4i4S16", __M2N_i8i8S16S8r4u4i4S16},
	{"i8i8S16S8r4u4i4S16u1", __M2N_i8i8S16S8r4u4i4S16u1},
	{"i8i8S16S8r4u4i4S16u1i8", __M2N_i8i8S16S8r4u4i4S16u1i8},
	{"i8i8S16i8", __M2N_i8i8S16i8},
	{"i8i8S24", __M2N_i8i8S24},
	{"i8i8S8", __M2N_i8i8S8},
	{"i8i8S8i8i8", __M2N_i8i8S8i8i8},
	{"i8i8i1", __M2N_i8i8i1},
	{"i8i8i2", __M2N_i8i8i2},
	{"i8i8i4", __M2N_i8i8i4},
	{"i8i8i4S8", __M2N_i8i8i4S8},
	{"i8i8i4S8u1", __M2N_i8i8i4S8u1},
	{"i8i8i4i4", __M2N_i8i8i4i4},
	{"i8i8i4i4i4", __M2N_i8i8i4i4i4},
	{"i8i8i4i4i4i4i8", __M2N_i8i8i4i4i4i4i8},
	{"i8i8i4i4u2i4", __M2N_i8i8i4i4u2i4},
	{"i8i8i4i8", __M2N_i8i8i4i8},
	{"i8i8i4i8i4i8i8", __M2N_i8i8i4i8i4i8i8},
	{"i8i8i4i8i8", __M2N_i8i8i4i8i8},
	{"i8i8i4i8i8i8", __M2N_i8i8i4i8i8i8},
	{"i8i8i4i8i8i8i8", __M2N_i8i8i4i8i8i8i8},
	{"i8i8i4i8i8i8i8i8i8", __M2N_i8i8i4i8i8i8i8i8i8},
	{"i8i8i4u1", __M2N_i8i8i4u1},
	{"i8i8i4u1u1u1", __M2N_i8i8i4u1u1u1},
	{"i8i8i4u1u1u1u1i8i4", __M2N_i8i8i4u1u1u1u1i8i4},
	{"i8i8i4u2", __M2N_i8i8i4u2},
	{"i8i8i8", __M2N_i8i8i8},
	{"i8i8i8S16i8", __M2N_i8i8i8S16i8},
	{"i8i8i8i4", __M2N_i8i8i8i4},
	{"i8i8i8i4S8u1", __M2N_i8i8i8i4S8u1},
	{"i8i8i8i4i4", __M2N_i8i8i8i4i4},
	{"i8i8i8i4i4i4", __M2N_i8i8i8i4i4i4},
	{"i8i8i8i4i4i8i8", __M2N_i8i8i8i4i4i8i8},
	{"i8i8i8i4i8", __M2N_i8i8i8i4i8},
	{"i8i8i8i4i8i4", __M2N_i8i8i8i4i8i4},
	{"i8i8i8i4i8i4i8i8", __M2N_i8i8i8i4i8i4i8i8},
	{"i8i8i8i4i8i8i8", __M2N_i8i8i8i4i8i8i8},
	{"i8i8i8i4i8i8i8i8", __M2N_i8i8i8i4i8i8i8i8},
	{"i8i8i8i4i8i8i8i8i8i8", __M2N_i8i8i8i4i8i8i8i8i8i8},
	{"i8i8i8i8", __M2N_i8i8i8i8},
	{"i8i8i8i8S16i8", __M2N_i8i8i8i8S16i8},
	{"i8i8i8i8S8i4i8", __M2N_i8i8i8i8S8i4i8},
	{"i8i8i8i8S8u1", __M2N_i8i8i8i8S8u1},
	{"i8i8i8i8i4", __M2N_i8i8i8i8i4},
	{"i8i8i8i8i4S8", __M2N_i8i8i8i8i4S8},
	{"i8i8i8i8i4i4", __M2N_i8i8i8i8i4i4},
	{"i8i8i8i8i4i4i4i4u1S8", __M2N_i8i8i8i8i4i4i4i4u1S8},
	{"i8i8i8i8i4i8i4", __M2N_i8i8i8i8i4i8i4},
	{"i8i8i8i8i8", __M2N_i8i8i8i8i8},
	{"i8i8i8i8i8i8", __M2N_i8i8i8i8i8i8},
	{"i8i8i8i8u1", __M2N_i8i8i8i8u1},
	{"i8i8i8i8u1u1", __M2N_i8i8i8i8u1u1},
	{"i8i8i8u1", __M2N_i8i8i8u1},
	{"i8i8i8u1u1", __M2N_i8i8i8u1u1},
	{"i8i8i8u4u4", __M2N_i8i8i8u4u4},
	{"i8i8u1", __M2N_i8i8u1},
	{"i8i8u1i4i4", __M2N_i8i8u1i4i4},
	{"i8i8u1i4i4i4i8i4i4i4i4u1i8", __M2N_i8i8u1i4i4i4i8i4i4i4i4u1i8},
	{"i8i8u1u1", __M2N_i8i8u1u1},
	{"i8i8u1u1u1u1i8", __M2N_i8i8u1u1u1u1i8},
	{"i8i8u2", __M2N_i8i8u2},
	{"i8i8u2i4", __M2N_i8i8u2i4},
	{"i8i8u2u2", __M2N_i8i8u2u2},
	{"i8i8u2u2i4", __M2N_i8i8u2u2i4},
	{"i8i8u4", __M2N_i8i8u4},
	{"i8i8u4u4", __M2N_i8i8u4u4},
	{"i8i8u8", __M2N_i8i8u8},
	{"i8r4", __M2N_i8r4},
	{"i8r4i8i8", __M2N_i8r4i8i8},
	{"i8r4r4r4r4", __M2N_i8r4r4r4r4},
	{"i8r8", __M2N_i8r8},
	{"i8r8i8i8", __M2N_i8r8i8i8},
	{"i8u1", __M2N_i8u1},
	{"i8u1i4", __M2N_i8u1i4},
	{"i8u1u1i8i8", __M2N_i8u1u1i8i8},
	{"i8u2", __M2N_i8u2},
	{"i8u2i8", __M2N_i8u2i8},
	{"i8u4", __M2N_i8u4},
	{"i8u4S16i8", __M2N_i8u4S16i8},
	{"i8u8", __M2N_i8u8},
	{"i8u8S16i8", __M2N_i8u8S16i8},
	{"r4", __M2N_r4},
	{"r4S12", __M2N_r4S12},
	{"r4S12S12", __M2N_r4S12S12},
	{"r4S12S12S12", __M2N_r4S12S12S12},
	{"r4S16", __M2N_r4S16},
	{"r4S16S16", __M2N_r4S16S16},
	{"r4S8S8", __M2N_r4S8S8},
	{"r4i1", __M2N_r4i1},
	{"r4i2", __M2N_r4i2},
	{"r4i4", __M2N_r4i4},
	{"r4i8", __M2N_r4i8},
	{"r4i8i4", __M2N_r4i8i4},
	{"r4i8i4i4", __M2N_r4i8i4i4},
	{"r4i8i4i8", __M2N_r4i8i4i8},
	{"r4i8i8", __M2N_r4i8i8},
	{"r4i8r4", __M2N_r4i8r4},
	{"r4i8r4r4", __M2N_r4i8r4r4},
	{"r4r4", __M2N_r4r4},
	{"r4r4r4", __M2N_r4r4r4},
	{"r4r4r4i8r4r4r4", __M2N_r4r4r4i8r4r4r4},
	{"r4r4r4r4", __M2N_r4r4r4r4},
	{"r4r8", __M2N_r4r8},
	{"r4u1", __M2N_r4u1},
	{"r4u2", __M2N_r4u2},
	{"r4u4", __M2N_r4u4},
	{"r4u8", __M2N_r4u8},
	{"r8", __M2N_r8},
	{"r8S16", __M2N_r8S16},
	{"r8i1", __M2N_r8i1},
	{"r8i2", __M2N_r8i2},
	{"r8i4", __M2N_r8i4},
	{"r8i8", __M2N_r8i8},
	{"r8i8i4", __M2N_r8i8i4},
	{"r8i8i4i8", __M2N_r8i8i4i8},
	{"r8i8i8", __M2N_r8i8i8},
	{"r8i8r8", __M2N_r8i8r8},
	{"r8i8r8r8", __M2N_r8i8r8r8},
	{"r8r4", __M2N_r8r4},
	{"r8r8", __M2N_r8r8},
	{"r8r8i4", __M2N_r8r8i4},
	{"r8r8i4i4", __M2N_r8r8i4i4},
	{"r8r8r8", __M2N_r8r8r8},
	{"r8u1", __M2N_r8u1},
	{"r8u2", __M2N_r8u2},
	{"r8u4", __M2N_r8u4},
	{"r8u8", __M2N_r8u8},
	{"u1", __M2N_u1},
	{"u1S108S108", __M2N_u1S108S108},
	{"u1S120S120", __M2N_u1S120S120},
	{"u1S12S12", __M2N_u1S12S12},
	{"u1S16", __M2N_u1S16},
	{"u1S16S16", __M2N_u1S16S16},
	{"u1S16S16i4", __M2N_u1S16S16i4},
	{"u1S16S16i8", __M2N_u1S16S16i8},
	{"u1S16S16i8S16i8", __M2N_u1S16S16i8S16i8},
	{"u1S16S16u1", __M2N_u1S16S16u1},
	{"u1S16i4i8", __M2N_u1S16i4i8},
	{"u1S16i4i8i8", __M2N_u1S16i4i8i8},
	{"u1S16i8", __M2N_u1S16i8},
	{"u1S16u4", __M2N_u1S16u4},
	{"u1S196S196", __M2N_u1S196S196},
	{"u1S24S24", __M2N_u1S24S24},
	{"u1S4", __M2N_u1S4},
	{"u1S40S40", __M2N_u1S40S40},
	{"u1S48S48", __M2N_u1S48S48},
	{"u1S4S4", __M2N_u1S4S4},
	{"u1S64i8", __M2N_u1S64i8},
	{"u1S8S8", __M2N_u1S8S8},
	{"u1i1", __M2N_u1i1},
	{"u1i2", __M2N_u1i2},
	{"u1i4", __M2N_u1i4},
	{"u1i4S16i8S16i8", __M2N_u1i4S16i8S16i8},
	{"u1i4i4", __M2N_u1i4i4},
	{"u1i4u1", __M2N_u1i4u1},
	{"u1i8", __M2N_u1i8},
	{"u1i8S1", __M2N_u1i8S1},
	{"u1i8S108", __M2N_u1i8S108},
	{"u1i8S116", __M2N_u1i8S116},
	{"u1i8S12", __M2N_u1i8S12},
	{"u1i8S120", __M2N_u1i8S120},
	{"u1i8S12S12", __M2N_u1i8S12S12},
	{"u1i8S136", __M2N_u1i8S136},
	{"u1i8S1584", __M2N_u1i8S1584},
	{"u1i8S16", __M2N_u1i8S16},
	{"u1i8S16S16", __M2N_u1i8S16S16},
	{"u1i8S16i4", __M2N_u1i8S16i4},
	{"u1i8S16i4i8", __M2N_u1i8S16i4i8},
	{"u1i8S16i8", __M2N_u1i8S16i8},
	{"u1i8S16i8S16", __M2N_u1i8S16i8S16},
	{"u1i8S16i8S16i8", __M2N_u1i8S16i8S16i8},
	{"u1i8S16i8i4", __M2N_u1i8S16i8i4},
	{"u1i8S16u1", __M2N_u1i8S16u1},
	{"u1i8S196", __M2N_u1i8S196},
	{"u1i8S1S1", __M2N_u1i8S1S1},
	{"u1i8S2", __M2N_u1i8S2},
	{"u1i8S24", __M2N_u1i8S24},
	{"u1i8S24S24", __M2N_u1i8S24S24},
	{"u1i8S24i8", __M2N_u1i8S24i8},
	{"u1i8S252", __M2N_u1i8S252},
	{"u1i8S28", __M2N_u1i8S28},
	{"u1i8S288", __M2N_u1i8S288},
	{"u1i8S296", __M2N_u1i8S296},
	{"u1i8S32", __M2N_u1i8S32},
	{"u1i8S4", __M2N_u1i8S4},
	{"u1i8S40", __M2N_u1i8S40},
	{"u1i8S48", __M2N_u1i8S48},
	{"u1i8S4S4", __M2N_u1i8S4S4},
	{"u1i8S64", __M2N_u1i8S64},
	{"u1i8S64S64", __M2N_u1i8S64S64},
	{"u1i8S68", __M2N_u1i8S68},
	{"u1i8S8", __M2N_u1i8S8},
	{"u1i8S8S8", __M2N_u1i8S8S8},
	{"u1i8S96", __M2N_u1i8S96},
	{"u1i8S992", __M2N_u1i8S992},
	{"u1i8i1", __M2N_u1i8i1},
	{"u1i8i2", __M2N_u1i8i2},
	{"u1i8i4", __M2N_u1i8i4},
	{"u1i8i4S16", __M2N_u1i8i4S16},
	{"u1i8i4S8", __M2N_u1i8i4S8},
	{"u1i8i4i4", __M2N_u1i8i4i4},
	{"u1i8i4i4i4", __M2N_u1i8i4i4i4},
	{"u1i8i4i4i4S12i4r4i8i8i8", __M2N_u1i8i4i4i4S12i4r4i8i8i8},
	{"u1i8i4i4i4u1", __M2N_u1i8i4i4i4u1},
	{"u1i8i4i4r4i8i8i8", __M2N_u1i8i4i4r4i8i8i8},
	{"u1i8i4i8", __M2N_u1i8i4i8},
	{"u1i8i4i8i8", __M2N_u1i8i4i8i8},
	{"u1i8i4i8i8i8", __M2N_u1i8i4i8i8i8},
	{"u1i8i4u1", __M2N_u1i8i4u1},
	{"u1i8i8", __M2N_u1i8i8},
	{"u1i8i8S16", __M2N_u1i8i8S16},
	{"u1i8i8S64", __M2N_u1i8i8S64},
	{"u1i8i8i4", __M2N_u1i8i8i4},
	{"u1i8i8i4S8", __M2N_u1i8i8i4S8},
	{"u1i8i8i4i4", __M2N_u1i8i8i4i4},
	{"u1i8i8i4i4i4", __M2N_u1i8i8i4i4i4},
	{"u1i8i8i8", __M2N_u1i8i8i8},
	{"u1i8i8i8i4", __M2N_u1i8i8i8i4},
	{"u1i8i8i8i4i4i4", __M2N_u1i8i8i8i4i4i4},
	{"u1i8i8u1", __M2N_u1i8i8u1},
	{"u1i8i8u1i8", __M2N_u1i8i8u1i8},
	{"u1i8i8u8", __M2N_u1i8i8u8},
	{"u1i8r4", __M2N_u1i8r4},
	{"u1i8r8", __M2N_u1i8r8},
	{"u1i8r8r8", __M2N_u1i8r8r8},
	{"u1i8u1", __M2N_u1i8u1},
	{"u1i8u1i8", __M2N_u1i8u1i8},
	{"u1i8u1u1", __M2N_u1i8u1u1},
	{"u1i8u2", __M2N_u1i8u2},
	{"u1i8u2i4", __M2N_u1i8u2i4},
	{"u1i8u2u2i4", __M2N_u1i8u2u2i4},
	{"u1i8u4", __M2N_u1i8u4},
	{"u1i8u4i4i4i8", __M2N_u1i8u4i4i4i8},
	{"u1i8u4i8u4", __M2N_u1i8u4i8u4},
	{"u1i8u8", __M2N_u1i8u8},
	{"u1r4", __M2N_u1r4},
	{"u1r4S16i8S16i8", __M2N_u1r4S16i8S16i8},
	{"u1r4r4", __M2N_u1r4r4},
	{"u1r8", __M2N_u1r8},
	{"u1r8S16i8S16i8", __M2N_u1r8S16i8S16i8},
	{"u1u1", __M2N_u1u1},
	{"u1u1u1", __M2N_u1u1u1},
	{"u1u2", __M2N_u1u2},
	{"u1u2i8", __M2N_u1u2i8},
	{"u1u2u2", __M2N_u1u2u2},
	{"u1u4", __M2N_u1u4},
	{"u1u4S16i8S16i8", __M2N_u1u4S16i8S16i8},
	{"u1u8", __M2N_u1u8},
	{"u1u8S16i8S16i8", __M2N_u1u8S16i8S16i8},
	{"u1u8u8", __M2N_u1u8u8},
	{"u2", __M2N_u2},
	{"u2S16", __M2N_u2S16},
	{"u2S2", __M2N_u2S2},
	{"u2i1", __M2N_u2i1},
	{"u2i2", __M2N_u2i2},
	{"u2i4", __M2N_u2i4},
	{"u2i8", __M2N_u2i8},
	{"u2i8i4", __M2N_u2i8i4},
	{"u2i8i4i8", __M2N_u2i8i4i8},
	{"u2i8i8", __M2N_u2i8i8},
	{"u2i8u2", __M2N_u2i8u2},
	{"u2r4", __M2N_u2r4},
	{"u2r8", __M2N_u2r8},
	{"u2u1", __M2N_u2u1},
	{"u2u2", __M2N_u2u2},
	{"u2u2u2", __M2N_u2u2u2},
	{"u2u4", __M2N_u2u4},
	{"u2u8", __M2N_u2u8},
	{"u4", __M2N_u4},
	{"u4S16", __M2N_u4S16},
	{"u4i1", __M2N_u4i1},
	{"u4i2", __M2N_u4i2},
	{"u4i4", __M2N_u4i4},
	{"u4i8", __M2N_u4i8},
	{"u4i8i4", __M2N_u4i8i4},
	{"u4i8i4i8", __M2N_u4i8i4i8},
	{"u4i8i8", __M2N_u4i8i8},
	{"u4r4", __M2N_u4r4},
	{"u4r8", __M2N_u4r8},
	{"u4u1", __M2N_u4u1},
	{"u4u2", __M2N_u4u2},
	{"u4u4", __M2N_u4u4},
	{"u4u4i8", __M2N_u4u4i8},
	{"u4u4u4", __M2N_u4u4u4},
	{"u4u4u4u4u4", __M2N_u4u4u4u4u4},
	{"u4u8", __M2N_u4u8},
	{"u8", __M2N_u8},
	{"u8S16", __M2N_u8S16},
	{"u8i1", __M2N_u8i1},
	{"u8i2", __M2N_u8i2},
	{"u8i4", __M2N_u8i4},
	{"u8i8", __M2N_u8i8},
	{"u8i8i4", __M2N_u8i8i4},
	{"u8i8i4i8", __M2N_u8i8i4i8},
	{"u8i8i8", __M2N_u8i8i8},
	{"u8r4", __M2N_u8r4},
	{"u8r8", __M2N_u8r8},
	{"u8u1", __M2N_u8u1},
	{"u8u2", __M2N_u8u2},
	{"u8u4", __M2N_u8u4},
	{"u8u8", __M2N_u8u8},
	{"u8u8u8", __M2N_u8u8u8},
	{"v", __M2N_v},
	{"vS12S12", __M2N_vS12S12},
	{"vS12S12S16", __M2N_vS12S12S16},
	{"vS12S12S16r4", __M2N_vS12S12S16r4},
	{"vS12S12S16r4u1", __M2N_vS12S12S16r4u1},
	{"vS12i8u1S16", __M2N_vS12i8u1S16},
	{"vS16", __M2N_vS16},
	{"vS16S16", __M2N_vS16S16},
	{"vS16S16i4", __M2N_vS16S16i4},
	{"vS16i4S16i4i4", __M2N_vS16i4S16i4i4},
	{"vS16i4i8i4i4", __M2N_vS16i4i8i4i4},
	{"vS16i8", __M2N_vS16i8},
	{"vS16i8i4", __M2N_vS16i8i4},
	{"vS24i8", __M2N_vS24i8},
	{"vS64", __M2N_vS64},
	{"vS64i8", __M2N_vS64i8},
	{"vS8", __M2N_vS8},
	{"vS8i8", __M2N_vS8i8},
	{"vi4", __M2N_vi4},
	{"vi4S16", __M2N_vi4S16},
	{"vi4i4", __M2N_vi4i4},
	{"vi4i4i4", __M2N_vi4i4i4},
	{"vi4i4i4i4i4", __M2N_vi4i4i4i4i4},
	{"vi4i4i8", __M2N_vi4i4i8},
	{"vi4i4i8i8", __M2N_vi4i4i8i8},
	{"vi4i4i8i8i8", __M2N_vi4i4i8i8i8},
	{"vi4i8", __M2N_vi4i8},
	{"vi4i8i4", __M2N_vi4i8i4},
	{"vi4i8i4i4", __M2N_vi4i8i4i4},
	{"vi4i8i8u8", __M2N_vi4i8i8u8},
	{"vi4r4", __M2N_vi4r4},
	{"vi8", __M2N_vi8},
	{"vi8S108", __M2N_vi8S108},
	{"vi8S12", __M2N_vi8S12},
	{"vi8S12S12", __M2N_vi8S12S12},
	{"vi8S12i4u4i4", __M2N_vi8S12i4u4i4},
	{"vi8S12r4", __M2N_vi8S12r4},
	{"vi8S16", __M2N_vi8S16},
	{"vi8S16S16", __M2N_vi8S16S16},
	{"vi8S16S16S16S16", __M2N_vi8S16S16S16S16},
	{"vi8S16S16u1", __M2N_vi8S16S16u1},
	{"vi8S16S32", __M2N_vi8S16S32},
	{"vi8S16S48", __M2N_vi8S16S48},
	{"vi8S16S64", __M2N_vi8S16S64},
	{"vi8S16S64i8", __M2N_vi8S16S64i8},
	{"vi8S16i4", __M2N_vi8S16i4},
	{"vi8S16i4i4", __M2N_vi8S16i4i4},
	{"vi8S16i4i4i4", __M2N_vi8S16i4i4i4},
	{"vi8S16i4i4i4i4i4", __M2N_vi8S16i4i4i4i4i4},
	{"vi8S16i4i4i4i4u1i4", __M2N_vi8S16i4i4i4i4u1i4},
	{"vi8S16i4i4u1i4", __M2N_vi8S16i4i4u1i4},
	{"vi8S16i8", __M2N_vi8S16i8},
	{"vi8S16i8i4", __M2N_vi8S16i8i4},
	{"vi8S16i8i8", __M2N_vi8S16i8i8},
	{"vi8S16i8i8S4u1S16S16", __M2N_vi8S16i8i8S4u1S16S16},
	{"vi8S16i8i8i8", __M2N_vi8S16i8i8i8},
	{"vi8S16r4", __M2N_vi8S16r4},
	{"vi8S16r4u4", __M2N_vi8S16r4u4},
	{"vi8S16u1", __M2N_vi8S16u1},
	{"vi8S2", __M2N_vi8S2},
	{"vi8S24", __M2N_vi8S24},
	{"vi8S24i8", __M2N_vi8S24i8},
	{"vi8S24i8i8i8i8i4i8i8", __M2N_vi8S24i8i8i8i8i4i8i8},
	{"vi8S252", __M2N_vi8S252},
	{"vi8S2i8", __M2N_vi8S2i8},
	{"vi8S4", __M2N_vi8S4},
	{"vi8S40", __M2N_vi8S40},
	{"vi8S40S40", __M2N_vi8S40S40},
	{"vi8S40S40i4i4i4", __M2N_vi8S40S40i4i4i4},
	{"vi8S40S40i8i4", __M2N_vi8S40S40i8i4},
	{"vi8S40i4", __M2N_vi8S40i4},
	{"vi8S40i4i4", __M2N_vi8S40i4i4},
	{"vi8S40i4i4S40i4i4", __M2N_vi8S40i4i4S40i4i4},
	{"vi8S40i4i4i4", __M2N_vi8S40i4i4i4},
	{"vi8S40i4i4i4i4", __M2N_vi8S40i4i4i4i4},
	{"vi8S40i4r4u1", __M2N_vi8S40i4r4u1},
	{"vi8S40u1", __M2N_vi8S40u1},
	{"vi8S40u1u1", __M2N_vi8S40u1u1},
	{"vi8S48", __M2N_vi8S48},
	{"vi8S4S4", __M2N_vi8S4S4},
	{"vi8S4S96", __M2N_vi8S4S96},
	{"vi8S4i4", __M2N_vi8S4i4},
	{"vi8S52", __M2N_vi8S52},
	{"vi8S64", __M2N_vi8S64},
	{"vi8S64S64", __M2N_vi8S64S64},
	{"vi8S64i8i4i4i4i4", __M2N_vi8S64i8i4i4i4i4},
	{"vi8S64i8i4i4i4i4i8", __M2N_vi8S64i8i4i4i4i4i8},
	{"vi8S64i8i4i8i4i8", __M2N_vi8S64i8i4i8i4i8},
	{"vi8S64i8i4i8i4i8i4u1i8i4i8", __M2N_vi8S64i8i4i8i4i8i4u1i8i4i8},
	{"vi8S68", __M2N_vi8S68},
	{"vi8S8", __M2N_vi8S8},
	{"vi8S8S8", __M2N_vi8S8S8},
	{"vi8S8S8S8", __M2N_vi8S8S8S8},
	{"vi8S8i4", __M2N_vi8S8i4},
	{"vi8S8i4i4", __M2N_vi8S8i4i4},
	{"vi8S8i4i4i8", __M2N_vi8S8i4i4i8},
	{"vi8S8i8", __M2N_vi8S8i8},
	{"vi8S8i8i8", __M2N_vi8S8i8i8},
	{"vi8S96", __M2N_vi8S96},
	{"vi8i2", __M2N_vi8i2},
	{"vi8i2i2", __M2N_vi8i2i2},
	{"vi8i4", __M2N_vi8i4},
	{"vi8i4S108", __M2N_vi8i4S108},
	{"vi8i4S12", __M2N_vi8i4S12},
	{"vi8i4S120", __M2N_vi8i4S120},
	{"vi8i4S16", __M2N_vi8i4S16},
	{"vi8i4S16i4", __M2N_vi8i4S16i4},
	{"vi8i4S16r4u4", __M2N_vi8i4S16r4u4},
	{"vi8i4S24", __M2N_vi8i4S24},
	{"vi8i4S4", __M2N_vi8i4S4},
	{"vi8i4S40", __M2N_vi8i4S40},
	{"vi8i4S40i4", __M2N_vi8i4S40i4},
	{"vi8i4S48", __M2N_vi8i4S48},
	{"vi8i4S52i4", __M2N_vi8i4S52i4},
	{"vi8i4S64", __M2N_vi8i4S64},
	{"vi8i4S8", __M2N_vi8i4S8},
	{"vi8i4S8i8", __M2N_vi8i4S8i8},
	{"vi8i4S96", __M2N_vi8i4S96},
	{"vi8i4i2i2u1u1u1u1u1u1u1u1", __M2N_vi8i4i2i2u1u1u1u1u1u1u1u1},
	{"vi8i4i4", __M2N_vi8i4i4},
	{"vi8i4i4S16", __M2N_vi8i4i4S16},
	{"vi8i4i4i4", __M2N_vi8i4i4i4},
	{"vi8i4i4i4S16", __M2N_vi8i4i4i4S16},
	{"vi8i4i4i4S16i4", __M2N_vi8i4i4i4S16i4},
	{"vi8i4i4i4i4", __M2N_vi8i4i4i4i4},
	{"vi8i4i4i4i4i4", __M2N_vi8i4i4i4i4i4},
	{"vi8i4i4i4i4i4i4", __M2N_vi8i4i4i4i4i4i4},
	{"vi8i4i4i4i4i4i4i4", __M2N_vi8i4i4i4i4i4i4i4},
	{"vi8i4i4i4i4i4i4i8i4i4i4i4", __M2N_vi8i4i4i4i4i4i4i8i4i4i4i4},
	{"vi8i4i4i4i4i4i8", __M2N_vi8i4i4i4i4i4i8},
	{"vi8i4i4i4i4i4i8u1", __M2N_vi8i4i4i4i4i4i8u1},
	{"vi8i4i4i4i4i4u1", __M2N_vi8i4i4i4i4i4u1},
	{"vi8i4i4i4i4i4u1u1", __M2N_vi8i4i4i4i4i4u1u1},
	{"vi8i4i4i4i4i8i4", __M2N_vi8i4i4i4i4i8i4},
	{"vi8i4i4i4i4u1", __M2N_vi8i4i4i4i4u1},
	{"vi8i4i4i4i4u1i8", __M2N_vi8i4i4i4i4u1i8},
	{"vi8i4i4i4i4u1u1", __M2N_vi8i4i4i4i4u1u1},
	{"vi8i4i4i4i4u1u1u1", __M2N_vi8i4i4i4i4u1u1u1},
	{"vi8i4i4i4i8", __M2N_vi8i4i4i4i8},
	{"vi8i4i4i4i8i4i4i4", __M2N_vi8i4i4i4i8i4i4i4},
	{"vi8i4i4i4i8i4i4i4i4", __M2N_vi8i4i4i4i8i4i4i4i4},
	{"vi8i4i4i4u1", __M2N_vi8i4i4i4u1},
	{"vi8i4i4i4u1u1", __M2N_vi8i4i4i4u1u1},
	{"vi8i4i4i4u1u1u1", __M2N_vi8i4i4i4u1u1u1},
	{"vi8i4i4i8", __M2N_vi8i4i4i8},
	{"vi8i4i4i8i4i4", __M2N_vi8i4i4i8i4i4},
	{"vi8i4i4i8i8i8", __M2N_vi8i4i4i8i8i8},
	{"vi8i4i4r4", __M2N_vi8i4i4r4},
	{"vi8i4i4r4u1", __M2N_vi8i4i4r4u1},
	{"vi8i4i4u1", __M2N_vi8i4i4u1},
	{"vi8i4i4u1u1", __M2N_vi8i4i4u1u1},
	{"vi8i4i4u2", __M2N_vi8i4i4u2},
	{"vi8i4i8", __M2N_vi8i4i8},
	{"vi8i4i8i4", __M2N_vi8i4i8i4},
	{"vi8i4i8i4i4", __M2N_vi8i4i8i4i4},
	{"vi8i4i8i4i4i4", __M2N_vi8i4i8i4i4i4},
	{"vi8i4i8i8", __M2N_vi8i4i8i8},
	{"vi8i4i8i8i4", __M2N_vi8i4i8i8i4},
	{"vi8i4i8i8i4i8i4u1i4i8", __M2N_vi8i4i8i8i4i8i4u1i4i8},
	{"vi8i4i8i8i4i8i4u1i4i8i4i8", __M2N_vi8i4i8i8i4i8i4u1i4i8i4i8},
	{"vi8i4i8i8i8", __M2N_vi8i4i8i8i8},
	{"vi8i4i8i8i8i8i8", __M2N_vi8i4i8i8i8i8i8},
	{"vi8i4i8u1", __M2N_vi8i4i8u1},
	{"vi8i4r4", __M2N_vi8i4r4},
	{"vi8i4r4i8", __M2N_vi8i4r4i8},
	{"vi8i4r4i8i8", __M2N_vi8i4r4i8i8},
	{"vi8i4r8", __M2N_vi8i4r8},
	{"vi8i4u1", __M2N_vi8i4u1},
	{"vi8i4u2", __M2N_vi8i4u2},
	{"vi8i8", __M2N_vi8i8},
	{"vi8i8S16", __M2N_vi8i8S16},
	{"vi8i8S40", __M2N_vi8i8S40},
	{"vi8i8S40i4i4i4", __M2N_vi8i8S40i4i4i4},
	{"vi8i8S64", __M2N_vi8i8S64},
	{"vi8i8S64i8", __M2N_vi8i8S64i8},
	{"vi8i8S64i8i4", __M2N_vi8i8S64i8i4},
	{"vi8i8S64i8i4i4", __M2N_vi8i8S64i8i4i4},
	{"vi8i8S64i8i4i4i8", __M2N_vi8i8S64i8i4i4i8},
	{"vi8i8S8", __M2N_vi8i8S8},
	{"vi8i8S8S8", __M2N_vi8i8S8S8},
	{"vi8i8i4", __M2N_vi8i8i4},
	{"vi8i8i4S16", __M2N_vi8i8i4S16},
	{"vi8i8i4i4", __M2N_vi8i8i4i4},
	{"vi8i8i4i4S40", __M2N_vi8i8i4i4S40},
	{"vi8i8i4i4i4", __M2N_vi8i8i4i4i4},
	{"vi8i8i4i4i4i4", __M2N_vi8i8i4i4i4i4},
	{"vi8i8i4i4i4i4i4", __M2N_vi8i8i4i4i4i4i4},
	{"vi8i8i4i4i4i4u1i4", __M2N_vi8i8i4i4i4i4u1i4},
	{"vi8i8i4i4i4u1i4", __M2N_vi8i8i4i4i4u1i4},
	{"vi8i8i4i4i8", __M2N_vi8i8i4i4i8},
	{"vi8i8i4i4u1", __M2N_vi8i8i4i4u1},
	{"vi8i8i4i4u1i4", __M2N_vi8i8i4i4u1i4},
	{"vi8i8i4i8", __M2N_vi8i8i4i8},
	{"vi8i8i4i8S40", __M2N_vi8i8i4i8S40},
	{"vi8i8i4i8i4i4", __M2N_vi8i8i4i8i4i4},
	{"vi8i8i4i8i4i8i4i8", __M2N_vi8i8i4i8i4i8i4i8},
	{"vi8i8i4i8i4i8i4u1S1", __M2N_vi8i8i4i8i4i8i4u1S1},
	{"vi8i8i4i8i4u1", __M2N_vi8i8i4i8i4u1},
	{"vi8i8i4u1", __M2N_vi8i8i4u1},
	{"vi8i8i4u1i4", __M2N_vi8i8i4u1i4},
	{"vi8i8i4u1u1u1u1i8i4", __M2N_vi8i8i4u1u1u1u1i8i4},
	{"vi8i8i8", __M2N_vi8i8i8},
	{"vi8i8i8S16", __M2N_vi8i8i8S16},
	{"vi8i8i8S16i4", __M2N_vi8i8i8S16i4},
	{"vi8i8i8S8", __M2N_vi8i8i8S8},
	{"vi8i8i8S8S8", __M2N_vi8i8i8S8S8},
	{"vi8i8i8S8i4", __M2N_vi8i8i8S8i4},
	{"vi8i8i8i4", __M2N_vi8i8i8i4},
	{"vi8i8i8i4i4", __M2N_vi8i8i8i4i4},
	{"vi8i8i8i4i4i8", __M2N_vi8i8i8i4i4i8},
	{"vi8i8i8i4i8i4i8S24i4u1", __M2N_vi8i8i8i4i8i4i8S24i4u1},
	{"vi8i8i8i4i8i8", __M2N_vi8i8i8i4i8i8},
	{"vi8i8i8i4u1", __M2N_vi8i8i8i4u1},
	{"vi8i8i8i8", __M2N_vi8i8i8i8},
	{"vi8i8i8i8i4", __M2N_vi8i8i8i8i4},
	{"vi8i8i8i8i4i4", __M2N_vi8i8i8i8i4i4},
	{"vi8i8i8i8i4i4i8", __M2N_vi8i8i8i8i4i4i8},
	{"vi8i8i8i8i8", __M2N_vi8i8i8i8i8},
	{"vi8i8i8i8i8i4", __M2N_vi8i8i8i8i8i4},
	{"vi8i8i8i8i8i4i8", __M2N_vi8i8i8i8i8i4i8},
	{"vi8i8i8i8i8i8", __M2N_vi8i8i8i8i8i8},
	{"vi8i8i8i8i8i8i8", __M2N_vi8i8i8i8i8i8i8},
	{"vi8i8i8i8i8i8i8i4i8", __M2N_vi8i8i8i8i8i8i8i4i8},
	{"vi8i8i8i8i8i8i8i8i8", __M2N_vi8i8i8i8i8i8i8i8i8},
	{"vi8i8i8i8i8u1i4i4", __M2N_vi8i8i8i8i8u1i4i4},
	{"vi8i8i8i8u1", __M2N_vi8i8i8i8u1},
	{"vi8i8i8r4", __M2N_vi8i8i8r4},
	{"vi8i8i8u1", __M2N_vi8i8i8u1},
	{"vi8i8i8u1i4", __M2N_vi8i8i8u1i4},
	{"vi8i8i8u1i4u1", __M2N_vi8i8i8u1i4u1},
	{"vi8i8r4", __M2N_vi8i8r4},
	{"vi8i8r4r4", __M2N_vi8i8r4r4},
	{"vi8i8u1", __M2N_vi8i8u1},
	{"vi8i8u1S32", __M2N_vi8i8u1S32},
	{"vi8i8u1i4", __M2N_vi8i8u1i4},
	{"vi8i8u1i4u1", __M2N_vi8i8u1i4u1},
	{"vi8i8u1u1", __M2N_vi8i8u1u1},
	{"vi8i8u1u1i8", __M2N_vi8i8u1u1i8},
	{"vi8i8u4", __M2N_vi8i8u4},
	{"vi8i8u4i8", __M2N_vi8i8u4i8},
	{"vi8i8u8", __M2N_vi8i8u8},
	{"vi8r4", __M2N_vi8r4},
	{"vi8r4r4", __M2N_vi8r4r4},
	{"vi8r4r4r4", __M2N_vi8r4r4r4},
	{"vi8r4r4r4r4", __M2N_vi8r4r4r4r4},
	{"vi8r8", __M2N_vi8r8},
	{"vi8u1", __M2N_vi8u1},
	{"vi8u1i4", __M2N_vi8u1i4},
	{"vi8u1i4i4S8", __M2N_vi8u1i4i4S8},
	{"vi8u1i4i8", __M2N_vi8u1i4i8},
	{"vi8u1i8", __M2N_vi8u1i8},
	{"vi8u1i8i8i8", __M2N_vi8u1i8i8i8},
	{"vi8u1i8u1u1", __M2N_vi8u1i8u1u1},
	{"vi8u1u1", __M2N_vi8u1u1},
	{"vi8u1u1S16", __M2N_vi8u1u1S16},
	{"vi8u1u1i4S8", __M2N_vi8u1u1i4S8},
	{"vi8u1u1i4u1", __M2N_vi8u1u1i4u1},
	{"vi8u1u1i8", __M2N_vi8u1u1i8},
	{"vi8u1u1i8i8i8i8i4i4i8", __M2N_vi8u1u1i8i8i8i8i4i4i8},
	{"vi8u1u1u1", __M2N_vi8u1u1u1},
	{"vi8u1u1u1i4i4i4i4", __M2N_vi8u1u1u1i4i4i4i4},
	{"vi8u1u1u1i4i4i4i4i4i4i4i4", __M2N_vi8u1u1u1i4i4i4i4i4i4i4i4},
	{"vi8u1u1u1u1", __M2N_vi8u1u1u1u1},
	{"vi8u1u1u4u4u4", __M2N_vi8u1u1u4u4u4},
	{"vi8u2", __M2N_vi8u2},
	{"vi8u2i4", __M2N_vi8u2i4},
	{"vi8u2i4i4i4i4i4i4i4", __M2N_vi8u2i4i4i4i4i4i4i4},
	{"vi8u2i4u1u1u1", __M2N_vi8u2i4u1u1u1},
	{"vi8u2u1u1u1", __M2N_vi8u2u1u1u1},
	{"vi8u2u2", __M2N_vi8u2u2},
	{"vi8u4", __M2N_vi8u4},
	{"vi8u4i4i4i4", __M2N_vi8u4i4i4i4},
	{"vi8u4u4u4", __M2N_vi8u4u4u4},
	{"vi8u4u4u4u4", __M2N_vi8u4u4u4u4},
	{"vi8u8", __M2N_vi8u8},
	{"vi8u8i8", __M2N_vi8u8i8},
	{"vi8u8i8i8", __M2N_vi8u8i8i8},
	{"vi8u8u8", __M2N_vi8u8u8},
	{"vr4", __M2N_vr4},
	{"vr4r4", __M2N_vr4r4},
	{"vr4r4r4", __M2N_vr4r4r4},
	{"vr4r4r4r4", __M2N_vr4r4r4r4},
	{"vu1", __M2N_vu1},
	{"vu1i8", __M2N_vu1i8},
	{"vu1i8i8", __M2N_vu1i8i8},
	{"vu1i8i8i8", __M2N_vu1i8i8i8},
	{"vu1u1S16", __M2N_vu1u1S16},
	{"vu1u1S16r4", __M2N_vu1u1S16r4},
	{"vu4", __M2N_vu4},
	{nullptr, nullptr},
};

static ValueTypeSize<1> __N2M_S1(const MethodInfo* method)
{
    StackObject args[1] = { };
    StackObject* ret = args + 0;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<1>*)ret;
}


static ValueTypeSize<108> __N2M_S108i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[15] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<108>*)ret;
}


static ValueTypeSize<120> __N2M_S120i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[16] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<120>*)ret;
}


static ValueTypeSize<12> __N2M_S12i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<12>*)ret;
}


static ValueTypeSize<12> __N2M_S12i8i4(int64_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<12>*)ret;
}


static ValueTypeSize<12> __N2M_S12i8u1(int64_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<12>*)ret;
}


static ValueTypeSize<16> __N2M_S16S16i8(ValueTypeSize<16> __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<16>*)ret;
}


static ValueTypeSize<16> __N2M_S16i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<16>*)ret;
}


static ValueTypeSize<16> __N2M_S16i8S16i8(int64_t __arg0, ValueTypeSize<16> __arg1, int64_t __arg2, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<16>*)ret;
}


static ValueTypeSize<16> __N2M_S16i8S176S16i8(int64_t __arg0, ValueTypeSize<176> __arg1, ValueTypeSize<16> __arg2, int64_t __arg3, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, (uint64_t)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<16>*)ret;
}


static ValueTypeSize<16> __N2M_S16i8i4(int64_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<16>*)ret;
}


static ValueTypeSize<16> __N2M_S16i8i8(int64_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<16>*)ret;
}


static ValueTypeSize<16> __N2M_S16i8i8S176S16i8(int64_t __arg0, int64_t __arg1, ValueTypeSize<176> __arg2, ValueTypeSize<16> __arg3, int64_t __arg4, const MethodInfo* method)
{
    StackObject args[7] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, (uint64_t)&__arg2, (uint64_t)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<16>*)ret;
}


static ValueTypeSize<1> __N2M_S1i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<1>*)ret;
}


static ValueTypeSize<1> __N2M_S1i8i8(int64_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<1>*)ret;
}


static ValueTypeSize<20> __N2M_S20i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<20>*)ret;
}


static ValueTypeSize<24> __N2M_S24i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<24>*)ret;
}


static ValueTypeSize<24> __N2M_S24i8i4(int64_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<24>*)ret;
}


static ValueTypeSize<32> __N2M_S32i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<32>*)ret;
}


static ValueTypeSize<48> __N2M_S48i8i4(int64_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[8] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<48>*)ret;
}


static ValueTypeSize<4> __N2M_S4i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<4>*)ret;
}


static ValueTypeSize<4> __N2M_S4i8i4(int64_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<4>*)ret;
}


static ValueTypeSize<64> __N2M_S64i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[9] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<64>*)ret;
}


static ValueTypeSize<64> __N2M_S64i8i8(int64_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[10] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<64>*)ret;
}


static ValueTypeSize<72> __N2M_S72i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[10] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<72>*)ret;
}


static ValueTypeSize<8> __N2M_S8i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<8>*)ret;
}


static ValueTypeSize<8> __N2M_S8i8S8(int64_t __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<8>*)ret;
}


static ValueTypeSize<8> __N2M_S8i8i4(int64_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<8>*)ret;
}


static ValueTypeSize<8> __N2M_S8i8i4i4i4i4i4i4i4i4(int64_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, const MethodInfo* method)
{
    StackObject args[10] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6, *(uint64_t*)&__arg7, *(uint64_t*)&__arg8 };
    StackObject* ret = args + 9;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<8>*)ret;
}


static ValueTypeSize<8> __N2M_S8i8i8(int64_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<8>*)ret;
}


static ValueTypeSize<96> __N2M_S96i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[13] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<96>*)ret;
}


static int8_t __N2M_i1i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int8_t*)ret;
}


static int8_t __N2M_i1i8i8(int64_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int8_t*)ret;
}


static int16_t __N2M_i2i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int16_t*)ret;
}


static int16_t __N2M_i2i8i8(int64_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int16_t*)ret;
}


static int32_t __N2M_i4(const MethodInfo* method)
{
    StackObject args[1] = { };
    StackObject* ret = args + 0;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4S12S12(ValueTypeSize<12> __arg0, ValueTypeSize<12> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4S16S16(ValueTypeSize<16> __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4S24S24(ValueTypeSize<24> __arg0, ValueTypeSize<24> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4S4S4(ValueTypeSize<4> __arg0, ValueTypeSize<4> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4S8S8(ValueTypeSize<8> __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4i8S1(int64_t __arg0, ValueTypeSize<1> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4i8S12(int64_t __arg0, ValueTypeSize<12> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4i8S12S12(int64_t __arg0, ValueTypeSize<12> __arg1, ValueTypeSize<12> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4i8S16(int64_t __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4i8S16S16(int64_t __arg0, ValueTypeSize<16> __arg1, ValueTypeSize<16> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4i8S16S16u1(int64_t __arg0, ValueTypeSize<16> __arg1, ValueTypeSize<16> __arg2, uint8_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, (uint64_t)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4i8S1S1(int64_t __arg0, ValueTypeSize<1> __arg1, ValueTypeSize<1> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4i8S24(int64_t __arg0, ValueTypeSize<24> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4i8S24S24(int64_t __arg0, ValueTypeSize<24> __arg1, ValueTypeSize<24> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4i8S32(int64_t __arg0, ValueTypeSize<32> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4i8S4(int64_t __arg0, ValueTypeSize<4> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4i8S40(int64_t __arg0, ValueTypeSize<40> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4i8S48(int64_t __arg0, ValueTypeSize<48> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4i8S4S4(int64_t __arg0, ValueTypeSize<4> __arg1, ValueTypeSize<4> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4i8S64(int64_t __arg0, ValueTypeSize<64> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4i8S8(int64_t __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4i8S8S8(int64_t __arg0, ValueTypeSize<8> __arg1, ValueTypeSize<8> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4i8i1(int64_t __arg0, int8_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4i8i2(int64_t __arg0, int16_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4i8i4(int64_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4i8i4i4(int64_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4i8i4i4i4(int64_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4i8i8(int64_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4i8i8S12i4i4(int64_t __arg0, int64_t __arg1, ValueTypeSize<12> __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, (uint64_t)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4i8i8S16i4i4(int64_t __arg0, int64_t __arg1, ValueTypeSize<16> __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, (uint64_t)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4i8i8S24i4i4(int64_t __arg0, int64_t __arg1, ValueTypeSize<24> __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, (uint64_t)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4i8i8S4i4i4(int64_t __arg0, int64_t __arg1, ValueTypeSize<4> __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4i8i8S8i4i4(int64_t __arg0, int64_t __arg1, ValueTypeSize<8> __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4i8i8i4(int64_t __arg0, int64_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4i8i8i4i4(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4i8i8i4i4i4(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4i8i8i4i4i8i4(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, int64_t __arg4, int32_t __arg5, const MethodInfo* method)
{
    StackObject args[7] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5 };
    StackObject* ret = args + 6;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4i8i8i4i4i8i4i4i4(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, int64_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, const MethodInfo* method)
{
    StackObject args[9] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6, *(uint64_t*)&__arg7 };
    StackObject* ret = args + 8;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4i8i8i4i4i8i4u1(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, int64_t __arg4, int32_t __arg5, uint8_t __arg6, const MethodInfo* method)
{
    StackObject args[8] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6 };
    StackObject* ret = args + 7;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4i8i8i4i4u1(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, uint8_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4i8i8i4i8i4(int64_t __arg0, int64_t __arg1, int32_t __arg2, int64_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4i8i8i4i8i4u1(int64_t __arg0, int64_t __arg1, int32_t __arg2, int64_t __arg3, int32_t __arg4, uint8_t __arg5, const MethodInfo* method)
{
    StackObject args[7] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5 };
    StackObject* ret = args + 6;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4i8i8i4u1(int64_t __arg0, int64_t __arg1, int32_t __arg2, uint8_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4i8i8i8(int64_t __arg0, int64_t __arg1, int64_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4i8i8i8i4(int64_t __arg0, int64_t __arg1, int64_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4i8i8i8i4i4(int64_t __arg0, int64_t __arg1, int64_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4i8i8i8i4i4i4(int64_t __arg0, int64_t __arg1, int64_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method)
{
    StackObject args[7] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5 };
    StackObject* ret = args + 6;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4i8i8r8i4i4(int64_t __arg0, int64_t __arg1, double __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4i8i8u1i4(int64_t __arg0, int64_t __arg1, uint8_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4i8r4(int64_t __arg0, float __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4i8r8(int64_t __arg0, double __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4i8r8r8(int64_t __arg0, double __arg1, double __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4i8u1(int64_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4i8u1u1(int64_t __arg0, uint8_t __arg1, uint8_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4i8u2(int64_t __arg0, uint16_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4i8u4(int64_t __arg0, uint32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4i8u8(int64_t __arg0, uint64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4i8u8u8(int64_t __arg0, uint64_t __arg1, uint64_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4r8r8(double __arg0, double __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_i4u8u8(uint64_t __arg0, uint64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int64_t __N2M_i8(const MethodInfo* method)
{
    StackObject args[1] = { };
    StackObject* ret = args + 0;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


static int64_t __N2M_i8S16(ValueTypeSize<16> __arg0, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


static int64_t __N2M_i8i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


static int64_t __N2M_i8i8S16(int64_t __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


static int64_t __N2M_i8i8S24(int64_t __arg0, ValueTypeSize<24> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


static int64_t __N2M_i8i8i4(int64_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


static int64_t __N2M_i8i8i4i8i4i8i8(int64_t __arg0, int32_t __arg1, int64_t __arg2, int32_t __arg3, int64_t __arg4, int64_t __arg5, const MethodInfo* method)
{
    StackObject args[7] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5 };
    StackObject* ret = args + 6;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


static int64_t __N2M_i8i8i4i8i8(int64_t __arg0, int32_t __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


static int64_t __N2M_i8i8i4i8i8i8(int64_t __arg0, int32_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


static int64_t __N2M_i8i8i4i8i8i8i8(int64_t __arg0, int32_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, int64_t __arg5, const MethodInfo* method)
{
    StackObject args[7] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5 };
    StackObject* ret = args + 6;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


static int64_t __N2M_i8i8i4i8i8i8i8i8i8(int64_t __arg0, int32_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, int64_t __arg5, int64_t __arg6, int64_t __arg7, const MethodInfo* method)
{
    StackObject args[9] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6, *(uint64_t*)&__arg7 };
    StackObject* ret = args + 8;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


static int64_t __N2M_i8i8i8(int64_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


static int64_t __N2M_i8i8i8S16i8(int64_t __arg0, int64_t __arg1, ValueTypeSize<16> __arg2, int64_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, (uint64_t)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


static int64_t __N2M_i8i8i8i4(int64_t __arg0, int64_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


static int64_t __N2M_i8i8i8i4S8u1(int64_t __arg0, int64_t __arg1, int32_t __arg2, ValueTypeSize<8> __arg3, uint8_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


static int64_t __N2M_i8i8i8i4i4(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


static int64_t __N2M_i8i8i8i4i4i8i8(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, int64_t __arg4, int64_t __arg5, const MethodInfo* method)
{
    StackObject args[7] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5 };
    StackObject* ret = args + 6;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


static int64_t __N2M_i8i8i8i4i8i4i8i8(int64_t __arg0, int64_t __arg1, int32_t __arg2, int64_t __arg3, int32_t __arg4, int64_t __arg5, int64_t __arg6, const MethodInfo* method)
{
    StackObject args[8] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6 };
    StackObject* ret = args + 7;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


static int64_t __N2M_i8i8i8i4i8i8i8(int64_t __arg0, int64_t __arg1, int32_t __arg2, int64_t __arg3, int64_t __arg4, int64_t __arg5, const MethodInfo* method)
{
    StackObject args[7] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5 };
    StackObject* ret = args + 6;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


static int64_t __N2M_i8i8i8i4i8i8i8i8(int64_t __arg0, int64_t __arg1, int32_t __arg2, int64_t __arg3, int64_t __arg4, int64_t __arg5, int64_t __arg6, const MethodInfo* method)
{
    StackObject args[8] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6 };
    StackObject* ret = args + 7;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


static int64_t __N2M_i8i8i8i4i8i8i8i8i8i8(int64_t __arg0, int64_t __arg1, int32_t __arg2, int64_t __arg3, int64_t __arg4, int64_t __arg5, int64_t __arg6, int64_t __arg7, int64_t __arg8, const MethodInfo* method)
{
    StackObject args[10] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6, *(uint64_t*)&__arg7, *(uint64_t*)&__arg8 };
    StackObject* ret = args + 9;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


static int64_t __N2M_i8i8i8i8(int64_t __arg0, int64_t __arg1, int64_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


static int64_t __N2M_i8i8i8i8S16i8(int64_t __arg0, int64_t __arg1, int64_t __arg2, ValueTypeSize<16> __arg3, int64_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, (uint64_t)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


static int64_t __N2M_i8i8i8i8i4(int64_t __arg0, int64_t __arg1, int64_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


static int64_t __N2M_i8i8i8i8i8(int64_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


static int64_t __N2M_i8i8i8i8i8i8(int64_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


static int64_t __N2M_i8i8i8i8u1(int64_t __arg0, int64_t __arg1, int64_t __arg2, uint8_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


static int64_t __N2M_i8i8i8u1(int64_t __arg0, int64_t __arg1, uint8_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


static int64_t __N2M_i8i8i8u1u1(int64_t __arg0, int64_t __arg1, uint8_t __arg2, uint8_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


static int64_t __N2M_i8i8u1(int64_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


static float __N2M_r4i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(float*)ret;
}


static float __N2M_r4i8i8(int64_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(float*)ret;
}


static double __N2M_r8i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(double*)ret;
}


static double __N2M_r8i8i4(int64_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(double*)ret;
}


static double __N2M_r8i8i8(int64_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(double*)ret;
}


static uint8_t __N2M_u1(const MethodInfo* method)
{
    StackObject args[1] = { };
    StackObject* ret = args + 0;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1S12(ValueTypeSize<12> __arg0, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1S16(ValueTypeSize<16> __arg0, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1S24(ValueTypeSize<24> __arg0, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1S4(ValueTypeSize<4> __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1S8(ValueTypeSize<8> __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1i8S1(int64_t __arg0, ValueTypeSize<1> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1i8S108(int64_t __arg0, ValueTypeSize<108> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1i8S116(int64_t __arg0, ValueTypeSize<116> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1i8S12(int64_t __arg0, ValueTypeSize<12> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1i8S120(int64_t __arg0, ValueTypeSize<120> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1i8S12S12(int64_t __arg0, ValueTypeSize<12> __arg1, ValueTypeSize<12> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1i8S136(int64_t __arg0, ValueTypeSize<136> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1i8S1584(int64_t __arg0, ValueTypeSize<1584> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1i8S16(int64_t __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1i8S16S16(int64_t __arg0, ValueTypeSize<16> __arg1, ValueTypeSize<16> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1i8S16i8(int64_t __arg0, ValueTypeSize<16> __arg1, int64_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1i8S16i8S16i8(int64_t __arg0, ValueTypeSize<16> __arg1, int64_t __arg2, ValueTypeSize<16> __arg3, int64_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, *(uint64_t*)&__arg2, (uint64_t)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1i8S16i8i4(int64_t __arg0, ValueTypeSize<16> __arg1, int64_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1i8S196(int64_t __arg0, ValueTypeSize<196> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1i8S1S1(int64_t __arg0, ValueTypeSize<1> __arg1, ValueTypeSize<1> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1i8S2(int64_t __arg0, ValueTypeSize<2> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1i8S24(int64_t __arg0, ValueTypeSize<24> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1i8S24S24(int64_t __arg0, ValueTypeSize<24> __arg1, ValueTypeSize<24> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1i8S24i8(int64_t __arg0, ValueTypeSize<24> __arg1, int64_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1i8S252(int64_t __arg0, ValueTypeSize<252> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1i8S28(int64_t __arg0, ValueTypeSize<28> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1i8S288(int64_t __arg0, ValueTypeSize<288> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1i8S296(int64_t __arg0, ValueTypeSize<296> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1i8S32(int64_t __arg0, ValueTypeSize<32> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1i8S4(int64_t __arg0, ValueTypeSize<4> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1i8S40(int64_t __arg0, ValueTypeSize<40> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1i8S48(int64_t __arg0, ValueTypeSize<48> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1i8S4S4(int64_t __arg0, ValueTypeSize<4> __arg1, ValueTypeSize<4> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1i8S64(int64_t __arg0, ValueTypeSize<64> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1i8S64S64(int64_t __arg0, ValueTypeSize<64> __arg1, ValueTypeSize<64> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1i8S68(int64_t __arg0, ValueTypeSize<68> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1i8S8(int64_t __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1i8S8S8(int64_t __arg0, ValueTypeSize<8> __arg1, ValueTypeSize<8> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1i8S96(int64_t __arg0, ValueTypeSize<96> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1i8S992(int64_t __arg0, ValueTypeSize<992> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1i8i1(int64_t __arg0, int8_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1i8i2(int64_t __arg0, int16_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1i8i4(int64_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1i8i4i4(int64_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1i8i4i8(int64_t __arg0, int32_t __arg1, int64_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1i8i4u1(int64_t __arg0, int32_t __arg1, uint8_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1i8i8(int64_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1i8i8i4(int64_t __arg0, int64_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1i8i8i8(int64_t __arg0, int64_t __arg1, int64_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1i8i8i8i4(int64_t __arg0, int64_t __arg1, int64_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1i8i8u1(int64_t __arg0, int64_t __arg1, uint8_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1i8r4(int64_t __arg0, float __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1i8r8(int64_t __arg0, double __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1i8r8r8(int64_t __arg0, double __arg1, double __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1i8u1(int64_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1i8u1u1(int64_t __arg0, uint8_t __arg1, uint8_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1i8u2(int64_t __arg0, uint16_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1i8u2i4(int64_t __arg0, uint16_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1i8u2u2i4(int64_t __arg0, uint16_t __arg1, uint16_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1i8u4(int64_t __arg0, uint32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1i8u8(int64_t __arg0, uint64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_u1r8(double __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint16_t __N2M_u2i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint16_t*)ret;
}


static uint16_t __N2M_u2i8i8(int64_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint16_t*)ret;
}


static uint16_t __N2M_u2i8u2(int64_t __arg0, uint16_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint16_t*)ret;
}


static uint32_t __N2M_u4i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint32_t*)ret;
}


static uint32_t __N2M_u4i8i8(int64_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint32_t*)ret;
}


static uint64_t __N2M_u8i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint64_t*)ret;
}


static uint64_t __N2M_u8i8i8(int64_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint64_t*)ret;
}


static void __N2M_v(const MethodInfo* method)
{
    StackObject args[1] = { };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vS12(ValueTypeSize<12> __arg0, const MethodInfo* method)
{
    StackObject args[1] = {(uint64_t)&__arg0 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vS16(ValueTypeSize<16> __arg0, const MethodInfo* method)
{
    StackObject args[1] = {(uint64_t)&__arg0 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vS16S16(ValueTypeSize<16> __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vS16S32(ValueTypeSize<16> __arg0, ValueTypeSize<32> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vS16S48(ValueTypeSize<16> __arg0, ValueTypeSize<48> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vS16i8(ValueTypeSize<16> __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vS24(ValueTypeSize<24> __arg0, const MethodInfo* method)
{
    StackObject args[1] = {(uint64_t)&__arg0 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vS4(ValueTypeSize<4> __arg0, const MethodInfo* method)
{
    StackObject args[1] = {*(uint64_t*)&__arg0 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vS40(ValueTypeSize<40> __arg0, const MethodInfo* method)
{
    StackObject args[1] = {(uint64_t)&__arg0 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vS4S4(ValueTypeSize<4> __arg0, ValueTypeSize<4> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vS4i4(ValueTypeSize<4> __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vS8(ValueTypeSize<8> __arg0, const MethodInfo* method)
{
    StackObject args[1] = {*(uint64_t*)&__arg0 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vS8i8(ValueTypeSize<8> __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vS96(ValueTypeSize<96> __arg0, const MethodInfo* method)
{
    StackObject args[1] = {(uint64_t)&__arg0 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[1] = {*(uint64_t*)&__arg0 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[1] = {*(uint64_t*)&__arg0 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8S12(int64_t __arg0, ValueTypeSize<12> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8S16(int64_t __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8S16S16(int64_t __arg0, ValueTypeSize<16> __arg1, ValueTypeSize<16> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8S16S32(int64_t __arg0, ValueTypeSize<16> __arg1, ValueTypeSize<32> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8S16S48(int64_t __arg0, ValueTypeSize<16> __arg1, ValueTypeSize<48> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8S16S64(int64_t __arg0, ValueTypeSize<16> __arg1, ValueTypeSize<64> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8S16S64i8(int64_t __arg0, ValueTypeSize<16> __arg1, ValueTypeSize<64> __arg2, int64_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, (uint64_t)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8S16i8(int64_t __arg0, ValueTypeSize<16> __arg1, int64_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8S16i8i4(int64_t __arg0, ValueTypeSize<16> __arg1, int64_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8S16i8i8(int64_t __arg0, ValueTypeSize<16> __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8S24(int64_t __arg0, ValueTypeSize<24> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8S24i8(int64_t __arg0, ValueTypeSize<24> __arg1, int64_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8S4(int64_t __arg0, ValueTypeSize<4> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8S40(int64_t __arg0, ValueTypeSize<40> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8S48(int64_t __arg0, ValueTypeSize<48> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8S4S4(int64_t __arg0, ValueTypeSize<4> __arg1, ValueTypeSize<4> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8S4i4(int64_t __arg0, ValueTypeSize<4> __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8S8(int64_t __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8S8i8(int64_t __arg0, ValueTypeSize<8> __arg1, int64_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8S8i8i8(int64_t __arg0, ValueTypeSize<8> __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8S96(int64_t __arg0, ValueTypeSize<96> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8i2(int64_t __arg0, int16_t __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8i4(int64_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8i4S12(int64_t __arg0, int32_t __arg1, ValueTypeSize<12> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8i4S16(int64_t __arg0, int32_t __arg1, ValueTypeSize<16> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8i4S24(int64_t __arg0, int32_t __arg1, ValueTypeSize<24> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8i4S4(int64_t __arg0, int32_t __arg1, ValueTypeSize<4> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8i4S48(int64_t __arg0, int32_t __arg1, ValueTypeSize<48> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8i4S8(int64_t __arg0, int32_t __arg1, ValueTypeSize<8> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8i4i4(int64_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8i4i4i4(int64_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8i4i4i4i4i4(int64_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8i4i8(int64_t __arg0, int32_t __arg1, int64_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8i4i8i8(int64_t __arg0, int32_t __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8i4i8i8i8(int64_t __arg0, int32_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8i4r8(int64_t __arg0, int32_t __arg1, double __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8i8(int64_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8i8S16(int64_t __arg0, int64_t __arg1, ValueTypeSize<16> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8i8S64(int64_t __arg0, int64_t __arg1, ValueTypeSize<64> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8i8i4(int64_t __arg0, int64_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8i8i4i4(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8i8i8(int64_t __arg0, int64_t __arg1, int64_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8i8i8S16(int64_t __arg0, int64_t __arg1, int64_t __arg2, ValueTypeSize<16> __arg3, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, (uint64_t)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8i8i8i4(int64_t __arg0, int64_t __arg1, int64_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8i8i8i4i4i8(int64_t __arg0, int64_t __arg1, int64_t __arg2, int32_t __arg3, int32_t __arg4, int64_t __arg5, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8i8i8i4i8i8(int64_t __arg0, int64_t __arg1, int64_t __arg2, int32_t __arg3, int64_t __arg4, int64_t __arg5, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8i8i8i8(int64_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8i8i8i8i4(int64_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8i8i8i8i4i4i8(int64_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, int32_t __arg4, int32_t __arg5, int64_t __arg6, const MethodInfo* method)
{
    StackObject args[7] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8i8i8i8i8(int64_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8i8i8i8i8i4(int64_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, int32_t __arg5, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8i8i8i8i8i8(int64_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, int64_t __arg5, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8i8i8i8i8i8i4i8(int64_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, int64_t __arg5, int32_t __arg6, int64_t __arg7, const MethodInfo* method)
{
    StackObject args[8] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6, *(uint64_t*)&__arg7 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8i8i8i8i8i8i8(int64_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, int64_t __arg5, int64_t __arg6, const MethodInfo* method)
{
    StackObject args[7] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8i8i8i8i8i8i8i4i8(int64_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, int64_t __arg5, int64_t __arg6, int32_t __arg7, int64_t __arg8, const MethodInfo* method)
{
    StackObject args[9] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6, *(uint64_t*)&__arg7, *(uint64_t*)&__arg8 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8i8i8i8i8i8i8i8(int64_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, int64_t __arg5, int64_t __arg6, int64_t __arg7, const MethodInfo* method)
{
    StackObject args[8] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6, *(uint64_t*)&__arg7 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8i8i8i8i8i8i8i8i8(int64_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, int64_t __arg5, int64_t __arg6, int64_t __arg7, int64_t __arg8, const MethodInfo* method)
{
    StackObject args[9] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6, *(uint64_t*)&__arg7, *(uint64_t*)&__arg8 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8i8i8u1(int64_t __arg0, int64_t __arg1, int64_t __arg2, uint8_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8i8u1(int64_t __arg0, int64_t __arg1, uint8_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8i8u1S32(int64_t __arg0, int64_t __arg1, uint8_t __arg2, ValueTypeSize<32> __arg3, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, (uint64_t)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8i8u1u1(int64_t __arg0, int64_t __arg1, uint8_t __arg2, uint8_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8r4(int64_t __arg0, float __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8r8(int64_t __arg0, double __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8u1(int64_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8u1S32(int64_t __arg0, uint8_t __arg1, ValueTypeSize<32> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8u2(int64_t __arg0, uint16_t __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8u4(int64_t __arg0, uint32_t __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vi8u8(int64_t __arg0, uint64_t __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vr4(float __arg0, const MethodInfo* method)
{
    StackObject args[1] = {*(uint64_t*)&__arg0 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vr8(double __arg0, const MethodInfo* method)
{
    StackObject args[1] = {*(uint64_t*)&__arg0 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_vu1(uint8_t __arg0, const MethodInfo* method)
{
    StackObject args[1] = {*(uint64_t*)&__arg0 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


Native2ManagedMethodInfo hybridclr::interpreter::g_native2managedStub[] = 
{

	{"S1", (Il2CppMethodPointer)__N2M_S1},
	{"S108i8", (Il2CppMethodPointer)__N2M_S108i8},
	{"S120i8", (Il2CppMethodPointer)__N2M_S120i8},
	{"S12i8", (Il2CppMethodPointer)__N2M_S12i8},
	{"S12i8i4", (Il2CppMethodPointer)__N2M_S12i8i4},
	{"S12i8u1", (Il2CppMethodPointer)__N2M_S12i8u1},
	{"S16S16i8", (Il2CppMethodPointer)__N2M_S16S16i8},
	{"S16i8", (Il2CppMethodPointer)__N2M_S16i8},
	{"S16i8S16i8", (Il2CppMethodPointer)__N2M_S16i8S16i8},
	{"S16i8S176S16i8", (Il2CppMethodPointer)__N2M_S16i8S176S16i8},
	{"S16i8i4", (Il2CppMethodPointer)__N2M_S16i8i4},
	{"S16i8i8", (Il2CppMethodPointer)__N2M_S16i8i8},
	{"S16i8i8S176S16i8", (Il2CppMethodPointer)__N2M_S16i8i8S176S16i8},
	{"S1i8", (Il2CppMethodPointer)__N2M_S1i8},
	{"S1i8i8", (Il2CppMethodPointer)__N2M_S1i8i8},
	{"S20i8", (Il2CppMethodPointer)__N2M_S20i8},
	{"S24i8", (Il2CppMethodPointer)__N2M_S24i8},
	{"S24i8i4", (Il2CppMethodPointer)__N2M_S24i8i4},
	{"S32i8", (Il2CppMethodPointer)__N2M_S32i8},
	{"S48i8i4", (Il2CppMethodPointer)__N2M_S48i8i4},
	{"S4i8", (Il2CppMethodPointer)__N2M_S4i8},
	{"S4i8i4", (Il2CppMethodPointer)__N2M_S4i8i4},
	{"S64i8", (Il2CppMethodPointer)__N2M_S64i8},
	{"S64i8i8", (Il2CppMethodPointer)__N2M_S64i8i8},
	{"S72i8", (Il2CppMethodPointer)__N2M_S72i8},
	{"S8i8", (Il2CppMethodPointer)__N2M_S8i8},
	{"S8i8S8", (Il2CppMethodPointer)__N2M_S8i8S8},
	{"S8i8i4", (Il2CppMethodPointer)__N2M_S8i8i4},
	{"S8i8i4i4i4i4i4i4i4i4", (Il2CppMethodPointer)__N2M_S8i8i4i4i4i4i4i4i4i4},
	{"S8i8i8", (Il2CppMethodPointer)__N2M_S8i8i8},
	{"S96i8", (Il2CppMethodPointer)__N2M_S96i8},
	{"i1i8", (Il2CppMethodPointer)__N2M_i1i8},
	{"i1i8i8", (Il2CppMethodPointer)__N2M_i1i8i8},
	{"i2i8", (Il2CppMethodPointer)__N2M_i2i8},
	{"i2i8i8", (Il2CppMethodPointer)__N2M_i2i8i8},
	{"i4", (Il2CppMethodPointer)__N2M_i4},
	{"i4S12S12", (Il2CppMethodPointer)__N2M_i4S12S12},
	{"i4S16S16", (Il2CppMethodPointer)__N2M_i4S16S16},
	{"i4S24S24", (Il2CppMethodPointer)__N2M_i4S24S24},
	{"i4S4S4", (Il2CppMethodPointer)__N2M_i4S4S4},
	{"i4S8S8", (Il2CppMethodPointer)__N2M_i4S8S8},
	{"i4i4i4", (Il2CppMethodPointer)__N2M_i4i4i4},
	{"i4i8", (Il2CppMethodPointer)__N2M_i4i8},
	{"i4i8S1", (Il2CppMethodPointer)__N2M_i4i8S1},
	{"i4i8S12", (Il2CppMethodPointer)__N2M_i4i8S12},
	{"i4i8S12S12", (Il2CppMethodPointer)__N2M_i4i8S12S12},
	{"i4i8S16", (Il2CppMethodPointer)__N2M_i4i8S16},
	{"i4i8S16S16", (Il2CppMethodPointer)__N2M_i4i8S16S16},
	{"i4i8S16S16u1", (Il2CppMethodPointer)__N2M_i4i8S16S16u1},
	{"i4i8S1S1", (Il2CppMethodPointer)__N2M_i4i8S1S1},
	{"i4i8S24", (Il2CppMethodPointer)__N2M_i4i8S24},
	{"i4i8S24S24", (Il2CppMethodPointer)__N2M_i4i8S24S24},
	{"i4i8S32", (Il2CppMethodPointer)__N2M_i4i8S32},
	{"i4i8S4", (Il2CppMethodPointer)__N2M_i4i8S4},
	{"i4i8S40", (Il2CppMethodPointer)__N2M_i4i8S40},
	{"i4i8S48", (Il2CppMethodPointer)__N2M_i4i8S48},
	{"i4i8S4S4", (Il2CppMethodPointer)__N2M_i4i8S4S4},
	{"i4i8S64", (Il2CppMethodPointer)__N2M_i4i8S64},
	{"i4i8S8", (Il2CppMethodPointer)__N2M_i4i8S8},
	{"i4i8S8S8", (Il2CppMethodPointer)__N2M_i4i8S8S8},
	{"i4i8i1", (Il2CppMethodPointer)__N2M_i4i8i1},
	{"i4i8i2", (Il2CppMethodPointer)__N2M_i4i8i2},
	{"i4i8i4", (Il2CppMethodPointer)__N2M_i4i8i4},
	{"i4i8i4i4", (Il2CppMethodPointer)__N2M_i4i8i4i4},
	{"i4i8i4i4i4", (Il2CppMethodPointer)__N2M_i4i8i4i4i4},
	{"i4i8i8", (Il2CppMethodPointer)__N2M_i4i8i8},
	{"i4i8i8S12i4i4", (Il2CppMethodPointer)__N2M_i4i8i8S12i4i4},
	{"i4i8i8S16i4i4", (Il2CppMethodPointer)__N2M_i4i8i8S16i4i4},
	{"i4i8i8S24i4i4", (Il2CppMethodPointer)__N2M_i4i8i8S24i4i4},
	{"i4i8i8S4i4i4", (Il2CppMethodPointer)__N2M_i4i8i8S4i4i4},
	{"i4i8i8S8i4i4", (Il2CppMethodPointer)__N2M_i4i8i8S8i4i4},
	{"i4i8i8i4", (Il2CppMethodPointer)__N2M_i4i8i8i4},
	{"i4i8i8i4i4", (Il2CppMethodPointer)__N2M_i4i8i8i4i4},
	{"i4i8i8i4i4i4", (Il2CppMethodPointer)__N2M_i4i8i8i4i4i4},
	{"i4i8i8i4i4i8i4", (Il2CppMethodPointer)__N2M_i4i8i8i4i4i8i4},
	{"i4i8i8i4i4i8i4i4i4", (Il2CppMethodPointer)__N2M_i4i8i8i4i4i8i4i4i4},
	{"i4i8i8i4i4i8i4u1", (Il2CppMethodPointer)__N2M_i4i8i8i4i4i8i4u1},
	{"i4i8i8i4i4u1", (Il2CppMethodPointer)__N2M_i4i8i8i4i4u1},
	{"i4i8i8i4i8i4", (Il2CppMethodPointer)__N2M_i4i8i8i4i8i4},
	{"i4i8i8i4i8i4u1", (Il2CppMethodPointer)__N2M_i4i8i8i4i8i4u1},
	{"i4i8i8i4u1", (Il2CppMethodPointer)__N2M_i4i8i8i4u1},
	{"i4i8i8i8", (Il2CppMethodPointer)__N2M_i4i8i8i8},
	{"i4i8i8i8i4", (Il2CppMethodPointer)__N2M_i4i8i8i8i4},
	{"i4i8i8i8i4i4", (Il2CppMethodPointer)__N2M_i4i8i8i8i4i4},
	{"i4i8i8i8i4i4i4", (Il2CppMethodPointer)__N2M_i4i8i8i8i4i4i4},
	{"i4i8i8r8i4i4", (Il2CppMethodPointer)__N2M_i4i8i8r8i4i4},
	{"i4i8i8u1i4", (Il2CppMethodPointer)__N2M_i4i8i8u1i4},
	{"i4i8r4", (Il2CppMethodPointer)__N2M_i4i8r4},
	{"i4i8r8", (Il2CppMethodPointer)__N2M_i4i8r8},
	{"i4i8r8r8", (Il2CppMethodPointer)__N2M_i4i8r8r8},
	{"i4i8u1", (Il2CppMethodPointer)__N2M_i4i8u1},
	{"i4i8u1u1", (Il2CppMethodPointer)__N2M_i4i8u1u1},
	{"i4i8u2", (Il2CppMethodPointer)__N2M_i4i8u2},
	{"i4i8u4", (Il2CppMethodPointer)__N2M_i4i8u4},
	{"i4i8u8", (Il2CppMethodPointer)__N2M_i4i8u8},
	{"i4i8u8u8", (Il2CppMethodPointer)__N2M_i4i8u8u8},
	{"i4r8r8", (Il2CppMethodPointer)__N2M_i4r8r8},
	{"i4u8u8", (Il2CppMethodPointer)__N2M_i4u8u8},
	{"i8", (Il2CppMethodPointer)__N2M_i8},
	{"i8S16", (Il2CppMethodPointer)__N2M_i8S16},
	{"i8i8", (Il2CppMethodPointer)__N2M_i8i8},
	{"i8i8S16", (Il2CppMethodPointer)__N2M_i8i8S16},
	{"i8i8S24", (Il2CppMethodPointer)__N2M_i8i8S24},
	{"i8i8i4", (Il2CppMethodPointer)__N2M_i8i8i4},
	{"i8i8i4i8i4i8i8", (Il2CppMethodPointer)__N2M_i8i8i4i8i4i8i8},
	{"i8i8i4i8i8", (Il2CppMethodPointer)__N2M_i8i8i4i8i8},
	{"i8i8i4i8i8i8", (Il2CppMethodPointer)__N2M_i8i8i4i8i8i8},
	{"i8i8i4i8i8i8i8", (Il2CppMethodPointer)__N2M_i8i8i4i8i8i8i8},
	{"i8i8i4i8i8i8i8i8i8", (Il2CppMethodPointer)__N2M_i8i8i4i8i8i8i8i8i8},
	{"i8i8i8", (Il2CppMethodPointer)__N2M_i8i8i8},
	{"i8i8i8S16i8", (Il2CppMethodPointer)__N2M_i8i8i8S16i8},
	{"i8i8i8i4", (Il2CppMethodPointer)__N2M_i8i8i8i4},
	{"i8i8i8i4S8u1", (Il2CppMethodPointer)__N2M_i8i8i8i4S8u1},
	{"i8i8i8i4i4", (Il2CppMethodPointer)__N2M_i8i8i8i4i4},
	{"i8i8i8i4i4i8i8", (Il2CppMethodPointer)__N2M_i8i8i8i4i4i8i8},
	{"i8i8i8i4i8i4i8i8", (Il2CppMethodPointer)__N2M_i8i8i8i4i8i4i8i8},
	{"i8i8i8i4i8i8i8", (Il2CppMethodPointer)__N2M_i8i8i8i4i8i8i8},
	{"i8i8i8i4i8i8i8i8", (Il2CppMethodPointer)__N2M_i8i8i8i4i8i8i8i8},
	{"i8i8i8i4i8i8i8i8i8i8", (Il2CppMethodPointer)__N2M_i8i8i8i4i8i8i8i8i8i8},
	{"i8i8i8i8", (Il2CppMethodPointer)__N2M_i8i8i8i8},
	{"i8i8i8i8S16i8", (Il2CppMethodPointer)__N2M_i8i8i8i8S16i8},
	{"i8i8i8i8i4", (Il2CppMethodPointer)__N2M_i8i8i8i8i4},
	{"i8i8i8i8i8", (Il2CppMethodPointer)__N2M_i8i8i8i8i8},
	{"i8i8i8i8i8i8", (Il2CppMethodPointer)__N2M_i8i8i8i8i8i8},
	{"i8i8i8i8u1", (Il2CppMethodPointer)__N2M_i8i8i8i8u1},
	{"i8i8i8u1", (Il2CppMethodPointer)__N2M_i8i8i8u1},
	{"i8i8i8u1u1", (Il2CppMethodPointer)__N2M_i8i8i8u1u1},
	{"i8i8u1", (Il2CppMethodPointer)__N2M_i8i8u1},
	{"r4i8", (Il2CppMethodPointer)__N2M_r4i8},
	{"r4i8i8", (Il2CppMethodPointer)__N2M_r4i8i8},
	{"r8i8", (Il2CppMethodPointer)__N2M_r8i8},
	{"r8i8i4", (Il2CppMethodPointer)__N2M_r8i8i4},
	{"r8i8i8", (Il2CppMethodPointer)__N2M_r8i8i8},
	{"u1", (Il2CppMethodPointer)__N2M_u1},
	{"u1S12", (Il2CppMethodPointer)__N2M_u1S12},
	{"u1S16", (Il2CppMethodPointer)__N2M_u1S16},
	{"u1S24", (Il2CppMethodPointer)__N2M_u1S24},
	{"u1S4", (Il2CppMethodPointer)__N2M_u1S4},
	{"u1S8", (Il2CppMethodPointer)__N2M_u1S8},
	{"u1i4", (Il2CppMethodPointer)__N2M_u1i4},
	{"u1i8", (Il2CppMethodPointer)__N2M_u1i8},
	{"u1i8S1", (Il2CppMethodPointer)__N2M_u1i8S1},
	{"u1i8S108", (Il2CppMethodPointer)__N2M_u1i8S108},
	{"u1i8S116", (Il2CppMethodPointer)__N2M_u1i8S116},
	{"u1i8S12", (Il2CppMethodPointer)__N2M_u1i8S12},
	{"u1i8S120", (Il2CppMethodPointer)__N2M_u1i8S120},
	{"u1i8S12S12", (Il2CppMethodPointer)__N2M_u1i8S12S12},
	{"u1i8S136", (Il2CppMethodPointer)__N2M_u1i8S136},
	{"u1i8S1584", (Il2CppMethodPointer)__N2M_u1i8S1584},
	{"u1i8S16", (Il2CppMethodPointer)__N2M_u1i8S16},
	{"u1i8S16S16", (Il2CppMethodPointer)__N2M_u1i8S16S16},
	{"u1i8S16i8", (Il2CppMethodPointer)__N2M_u1i8S16i8},
	{"u1i8S16i8S16i8", (Il2CppMethodPointer)__N2M_u1i8S16i8S16i8},
	{"u1i8S16i8i4", (Il2CppMethodPointer)__N2M_u1i8S16i8i4},
	{"u1i8S196", (Il2CppMethodPointer)__N2M_u1i8S196},
	{"u1i8S1S1", (Il2CppMethodPointer)__N2M_u1i8S1S1},
	{"u1i8S2", (Il2CppMethodPointer)__N2M_u1i8S2},
	{"u1i8S24", (Il2CppMethodPointer)__N2M_u1i8S24},
	{"u1i8S24S24", (Il2CppMethodPointer)__N2M_u1i8S24S24},
	{"u1i8S24i8", (Il2CppMethodPointer)__N2M_u1i8S24i8},
	{"u1i8S252", (Il2CppMethodPointer)__N2M_u1i8S252},
	{"u1i8S28", (Il2CppMethodPointer)__N2M_u1i8S28},
	{"u1i8S288", (Il2CppMethodPointer)__N2M_u1i8S288},
	{"u1i8S296", (Il2CppMethodPointer)__N2M_u1i8S296},
	{"u1i8S32", (Il2CppMethodPointer)__N2M_u1i8S32},
	{"u1i8S4", (Il2CppMethodPointer)__N2M_u1i8S4},
	{"u1i8S40", (Il2CppMethodPointer)__N2M_u1i8S40},
	{"u1i8S48", (Il2CppMethodPointer)__N2M_u1i8S48},
	{"u1i8S4S4", (Il2CppMethodPointer)__N2M_u1i8S4S4},
	{"u1i8S64", (Il2CppMethodPointer)__N2M_u1i8S64},
	{"u1i8S64S64", (Il2CppMethodPointer)__N2M_u1i8S64S64},
	{"u1i8S68", (Il2CppMethodPointer)__N2M_u1i8S68},
	{"u1i8S8", (Il2CppMethodPointer)__N2M_u1i8S8},
	{"u1i8S8S8", (Il2CppMethodPointer)__N2M_u1i8S8S8},
	{"u1i8S96", (Il2CppMethodPointer)__N2M_u1i8S96},
	{"u1i8S992", (Il2CppMethodPointer)__N2M_u1i8S992},
	{"u1i8i1", (Il2CppMethodPointer)__N2M_u1i8i1},
	{"u1i8i2", (Il2CppMethodPointer)__N2M_u1i8i2},
	{"u1i8i4", (Il2CppMethodPointer)__N2M_u1i8i4},
	{"u1i8i4i4", (Il2CppMethodPointer)__N2M_u1i8i4i4},
	{"u1i8i4i8", (Il2CppMethodPointer)__N2M_u1i8i4i8},
	{"u1i8i4u1", (Il2CppMethodPointer)__N2M_u1i8i4u1},
	{"u1i8i8", (Il2CppMethodPointer)__N2M_u1i8i8},
	{"u1i8i8i4", (Il2CppMethodPointer)__N2M_u1i8i8i4},
	{"u1i8i8i8", (Il2CppMethodPointer)__N2M_u1i8i8i8},
	{"u1i8i8i8i4", (Il2CppMethodPointer)__N2M_u1i8i8i8i4},
	{"u1i8i8u1", (Il2CppMethodPointer)__N2M_u1i8i8u1},
	{"u1i8r4", (Il2CppMethodPointer)__N2M_u1i8r4},
	{"u1i8r8", (Il2CppMethodPointer)__N2M_u1i8r8},
	{"u1i8r8r8", (Il2CppMethodPointer)__N2M_u1i8r8r8},
	{"u1i8u1", (Il2CppMethodPointer)__N2M_u1i8u1},
	{"u1i8u1u1", (Il2CppMethodPointer)__N2M_u1i8u1u1},
	{"u1i8u2", (Il2CppMethodPointer)__N2M_u1i8u2},
	{"u1i8u2i4", (Il2CppMethodPointer)__N2M_u1i8u2i4},
	{"u1i8u2u2i4", (Il2CppMethodPointer)__N2M_u1i8u2u2i4},
	{"u1i8u4", (Il2CppMethodPointer)__N2M_u1i8u4},
	{"u1i8u8", (Il2CppMethodPointer)__N2M_u1i8u8},
	{"u1r8", (Il2CppMethodPointer)__N2M_u1r8},
	{"u2i8", (Il2CppMethodPointer)__N2M_u2i8},
	{"u2i8i8", (Il2CppMethodPointer)__N2M_u2i8i8},
	{"u2i8u2", (Il2CppMethodPointer)__N2M_u2i8u2},
	{"u4i8", (Il2CppMethodPointer)__N2M_u4i8},
	{"u4i8i8", (Il2CppMethodPointer)__N2M_u4i8i8},
	{"u8i8", (Il2CppMethodPointer)__N2M_u8i8},
	{"u8i8i8", (Il2CppMethodPointer)__N2M_u8i8i8},
	{"v", (Il2CppMethodPointer)__N2M_v},
	{"vS12", (Il2CppMethodPointer)__N2M_vS12},
	{"vS16", (Il2CppMethodPointer)__N2M_vS16},
	{"vS16S16", (Il2CppMethodPointer)__N2M_vS16S16},
	{"vS16S32", (Il2CppMethodPointer)__N2M_vS16S32},
	{"vS16S48", (Il2CppMethodPointer)__N2M_vS16S48},
	{"vS16i8", (Il2CppMethodPointer)__N2M_vS16i8},
	{"vS24", (Il2CppMethodPointer)__N2M_vS24},
	{"vS4", (Il2CppMethodPointer)__N2M_vS4},
	{"vS40", (Il2CppMethodPointer)__N2M_vS40},
	{"vS4S4", (Il2CppMethodPointer)__N2M_vS4S4},
	{"vS4i4", (Il2CppMethodPointer)__N2M_vS4i4},
	{"vS8", (Il2CppMethodPointer)__N2M_vS8},
	{"vS8i8", (Il2CppMethodPointer)__N2M_vS8i8},
	{"vS96", (Il2CppMethodPointer)__N2M_vS96},
	{"vi4", (Il2CppMethodPointer)__N2M_vi4},
	{"vi4i4", (Il2CppMethodPointer)__N2M_vi4i4},
	{"vi8", (Il2CppMethodPointer)__N2M_vi8},
	{"vi8S12", (Il2CppMethodPointer)__N2M_vi8S12},
	{"vi8S16", (Il2CppMethodPointer)__N2M_vi8S16},
	{"vi8S16S16", (Il2CppMethodPointer)__N2M_vi8S16S16},
	{"vi8S16S32", (Il2CppMethodPointer)__N2M_vi8S16S32},
	{"vi8S16S48", (Il2CppMethodPointer)__N2M_vi8S16S48},
	{"vi8S16S64", (Il2CppMethodPointer)__N2M_vi8S16S64},
	{"vi8S16S64i8", (Il2CppMethodPointer)__N2M_vi8S16S64i8},
	{"vi8S16i8", (Il2CppMethodPointer)__N2M_vi8S16i8},
	{"vi8S16i8i4", (Il2CppMethodPointer)__N2M_vi8S16i8i4},
	{"vi8S16i8i8", (Il2CppMethodPointer)__N2M_vi8S16i8i8},
	{"vi8S24", (Il2CppMethodPointer)__N2M_vi8S24},
	{"vi8S24i8", (Il2CppMethodPointer)__N2M_vi8S24i8},
	{"vi8S4", (Il2CppMethodPointer)__N2M_vi8S4},
	{"vi8S40", (Il2CppMethodPointer)__N2M_vi8S40},
	{"vi8S48", (Il2CppMethodPointer)__N2M_vi8S48},
	{"vi8S4S4", (Il2CppMethodPointer)__N2M_vi8S4S4},
	{"vi8S4i4", (Il2CppMethodPointer)__N2M_vi8S4i4},
	{"vi8S8", (Il2CppMethodPointer)__N2M_vi8S8},
	{"vi8S8i8", (Il2CppMethodPointer)__N2M_vi8S8i8},
	{"vi8S8i8i8", (Il2CppMethodPointer)__N2M_vi8S8i8i8},
	{"vi8S96", (Il2CppMethodPointer)__N2M_vi8S96},
	{"vi8i2", (Il2CppMethodPointer)__N2M_vi8i2},
	{"vi8i4", (Il2CppMethodPointer)__N2M_vi8i4},
	{"vi8i4S12", (Il2CppMethodPointer)__N2M_vi8i4S12},
	{"vi8i4S16", (Il2CppMethodPointer)__N2M_vi8i4S16},
	{"vi8i4S24", (Il2CppMethodPointer)__N2M_vi8i4S24},
	{"vi8i4S4", (Il2CppMethodPointer)__N2M_vi8i4S4},
	{"vi8i4S48", (Il2CppMethodPointer)__N2M_vi8i4S48},
	{"vi8i4S8", (Il2CppMethodPointer)__N2M_vi8i4S8},
	{"vi8i4i4", (Il2CppMethodPointer)__N2M_vi8i4i4},
	{"vi8i4i4i4", (Il2CppMethodPointer)__N2M_vi8i4i4i4},
	{"vi8i4i4i4i4i4", (Il2CppMethodPointer)__N2M_vi8i4i4i4i4i4},
	{"vi8i4i8", (Il2CppMethodPointer)__N2M_vi8i4i8},
	{"vi8i4i8i8", (Il2CppMethodPointer)__N2M_vi8i4i8i8},
	{"vi8i4i8i8i8", (Il2CppMethodPointer)__N2M_vi8i4i8i8i8},
	{"vi8i4r8", (Il2CppMethodPointer)__N2M_vi8i4r8},
	{"vi8i8", (Il2CppMethodPointer)__N2M_vi8i8},
	{"vi8i8S16", (Il2CppMethodPointer)__N2M_vi8i8S16},
	{"vi8i8S64", (Il2CppMethodPointer)__N2M_vi8i8S64},
	{"vi8i8i4", (Il2CppMethodPointer)__N2M_vi8i8i4},
	{"vi8i8i4i4", (Il2CppMethodPointer)__N2M_vi8i8i4i4},
	{"vi8i8i8", (Il2CppMethodPointer)__N2M_vi8i8i8},
	{"vi8i8i8S16", (Il2CppMethodPointer)__N2M_vi8i8i8S16},
	{"vi8i8i8i4", (Il2CppMethodPointer)__N2M_vi8i8i8i4},
	{"vi8i8i8i4i4i8", (Il2CppMethodPointer)__N2M_vi8i8i8i4i4i8},
	{"vi8i8i8i4i8i8", (Il2CppMethodPointer)__N2M_vi8i8i8i4i8i8},
	{"vi8i8i8i8", (Il2CppMethodPointer)__N2M_vi8i8i8i8},
	{"vi8i8i8i8i4", (Il2CppMethodPointer)__N2M_vi8i8i8i8i4},
	{"vi8i8i8i8i4i4i8", (Il2CppMethodPointer)__N2M_vi8i8i8i8i4i4i8},
	{"vi8i8i8i8i8", (Il2CppMethodPointer)__N2M_vi8i8i8i8i8},
	{"vi8i8i8i8i8i4", (Il2CppMethodPointer)__N2M_vi8i8i8i8i8i4},
	{"vi8i8i8i8i8i8", (Il2CppMethodPointer)__N2M_vi8i8i8i8i8i8},
	{"vi8i8i8i8i8i8i4i8", (Il2CppMethodPointer)__N2M_vi8i8i8i8i8i8i4i8},
	{"vi8i8i8i8i8i8i8", (Il2CppMethodPointer)__N2M_vi8i8i8i8i8i8i8},
	{"vi8i8i8i8i8i8i8i4i8", (Il2CppMethodPointer)__N2M_vi8i8i8i8i8i8i8i4i8},
	{"vi8i8i8i8i8i8i8i8", (Il2CppMethodPointer)__N2M_vi8i8i8i8i8i8i8i8},
	{"vi8i8i8i8i8i8i8i8i8", (Il2CppMethodPointer)__N2M_vi8i8i8i8i8i8i8i8i8},
	{"vi8i8i8u1", (Il2CppMethodPointer)__N2M_vi8i8i8u1},
	{"vi8i8u1", (Il2CppMethodPointer)__N2M_vi8i8u1},
	{"vi8i8u1S32", (Il2CppMethodPointer)__N2M_vi8i8u1S32},
	{"vi8i8u1u1", (Il2CppMethodPointer)__N2M_vi8i8u1u1},
	{"vi8r4", (Il2CppMethodPointer)__N2M_vi8r4},
	{"vi8r8", (Il2CppMethodPointer)__N2M_vi8r8},
	{"vi8u1", (Il2CppMethodPointer)__N2M_vi8u1},
	{"vi8u1S32", (Il2CppMethodPointer)__N2M_vi8u1S32},
	{"vi8u2", (Il2CppMethodPointer)__N2M_vi8u2},
	{"vi8u4", (Il2CppMethodPointer)__N2M_vi8u4},
	{"vi8u8", (Il2CppMethodPointer)__N2M_vi8u8},
	{"vr4", (Il2CppMethodPointer)__N2M_vr4},
	{"vr8", (Il2CppMethodPointer)__N2M_vr8},
	{"vu1", (Il2CppMethodPointer)__N2M_vu1},
	{nullptr, nullptr},
};

static ValueTypeSize<12> __N2M_AdjustorThunk_S12i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)) };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<12>*)ret;
}


static ValueTypeSize<12> __N2M_AdjustorThunk_S12i8i4(int64_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<12>*)ret;
}


static ValueTypeSize<12> __N2M_AdjustorThunk_S12i8u1(int64_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<12>*)ret;
}


static ValueTypeSize<16> __N2M_AdjustorThunk_S16i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)) };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<16>*)ret;
}


static ValueTypeSize<16> __N2M_AdjustorThunk_S16i8i4(int64_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<16>*)ret;
}


static ValueTypeSize<16> __N2M_AdjustorThunk_S16i8i8(int64_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<16>*)ret;
}


static ValueTypeSize<24> __N2M_AdjustorThunk_S24i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)) };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<24>*)ret;
}


static ValueTypeSize<24> __N2M_AdjustorThunk_S24i8i4(int64_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[5] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<24>*)ret;
}


static ValueTypeSize<48> __N2M_AdjustorThunk_S48i8i4(int64_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[8] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<48>*)ret;
}


static ValueTypeSize<4> __N2M_AdjustorThunk_S4i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)) };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<4>*)ret;
}


static ValueTypeSize<4> __N2M_AdjustorThunk_S4i8i4(int64_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<4>*)ret;
}


static ValueTypeSize<8> __N2M_AdjustorThunk_S8i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)) };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<8>*)ret;
}


static ValueTypeSize<8> __N2M_AdjustorThunk_S8i8S8(int64_t __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<8>*)ret;
}


static ValueTypeSize<8> __N2M_AdjustorThunk_S8i8i4(int64_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<8>*)ret;
}


static ValueTypeSize<8> __N2M_AdjustorThunk_S8i8i8(int64_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<8>*)ret;
}


static int8_t __N2M_AdjustorThunk_i1i8i8(int64_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int8_t*)ret;
}


static int16_t __N2M_AdjustorThunk_i2i8i8(int64_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int16_t*)ret;
}


static int32_t __N2M_AdjustorThunk_i4i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)) };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_AdjustorThunk_i4i8S1(int64_t __arg0, ValueTypeSize<1> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_AdjustorThunk_i4i8S12(int64_t __arg0, ValueTypeSize<12> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_AdjustorThunk_i4i8S12S12(int64_t __arg0, ValueTypeSize<12> __arg1, ValueTypeSize<12> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_AdjustorThunk_i4i8S16(int64_t __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_AdjustorThunk_i4i8S16S16(int64_t __arg0, ValueTypeSize<16> __arg1, ValueTypeSize<16> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_AdjustorThunk_i4i8S24(int64_t __arg0, ValueTypeSize<24> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_AdjustorThunk_i4i8S24S24(int64_t __arg0, ValueTypeSize<24> __arg1, ValueTypeSize<24> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_AdjustorThunk_i4i8S4(int64_t __arg0, ValueTypeSize<4> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_AdjustorThunk_i4i8S48(int64_t __arg0, ValueTypeSize<48> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_AdjustorThunk_i4i8S4S4(int64_t __arg0, ValueTypeSize<4> __arg1, ValueTypeSize<4> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_AdjustorThunk_i4i8S8(int64_t __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_AdjustorThunk_i4i8S8S8(int64_t __arg0, ValueTypeSize<8> __arg1, ValueTypeSize<8> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_AdjustorThunk_i4i8i1(int64_t __arg0, int8_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_AdjustorThunk_i4i8i2(int64_t __arg0, int16_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_AdjustorThunk_i4i8i4(int64_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_AdjustorThunk_i4i8i4i4(int64_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_AdjustorThunk_i4i8i8(int64_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_AdjustorThunk_i4i8i8i4i4i8i4i4i4(int64_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, int64_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, const MethodInfo* method)
{
    StackObject args[9] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6, *(uint64_t*)&__arg7 };
    StackObject* ret = args + 8;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_AdjustorThunk_i4i8i8i8(int64_t __arg0, int64_t __arg1, int64_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_AdjustorThunk_i4i8i8i8i4i4i4(int64_t __arg0, int64_t __arg1, int64_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method)
{
    StackObject args[7] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5 };
    StackObject* ret = args + 6;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_AdjustorThunk_i4i8r4(int64_t __arg0, float __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_AdjustorThunk_i4i8r8(int64_t __arg0, double __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_AdjustorThunk_i4i8r8r8(int64_t __arg0, double __arg1, double __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_AdjustorThunk_i4i8u1(int64_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_AdjustorThunk_i4i8u2(int64_t __arg0, uint16_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_AdjustorThunk_i4i8u4(int64_t __arg0, uint32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_AdjustorThunk_i4i8u8(int64_t __arg0, uint64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int32_t __N2M_AdjustorThunk_i4i8u8u8(int64_t __arg0, uint64_t __arg1, uint64_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


static int64_t __N2M_AdjustorThunk_i8i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)) };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


static int64_t __N2M_AdjustorThunk_i8i8S16(int64_t __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


static int64_t __N2M_AdjustorThunk_i8i8i4(int64_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


static int64_t __N2M_AdjustorThunk_i8i8i8(int64_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


static int64_t __N2M_AdjustorThunk_i8i8i8S16i8(int64_t __arg0, int64_t __arg1, ValueTypeSize<16> __arg2, int64_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, (uint64_t)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


static int64_t __N2M_AdjustorThunk_i8i8i8i4(int64_t __arg0, int64_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


static int64_t __N2M_AdjustorThunk_i8i8i8i8(int64_t __arg0, int64_t __arg1, int64_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


static int64_t __N2M_AdjustorThunk_i8i8i8i8S16i8(int64_t __arg0, int64_t __arg1, int64_t __arg2, ValueTypeSize<16> __arg3, int64_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, (uint64_t)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


static int64_t __N2M_AdjustorThunk_i8i8i8i8i8(int64_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


static int64_t __N2M_AdjustorThunk_i8i8i8i8u1(int64_t __arg0, int64_t __arg1, int64_t __arg2, uint8_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


static int64_t __N2M_AdjustorThunk_i8i8i8u1(int64_t __arg0, int64_t __arg1, uint8_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


static float __N2M_AdjustorThunk_r4i8i8(int64_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(float*)ret;
}


static double __N2M_AdjustorThunk_r8i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)) };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(double*)ret;
}


static double __N2M_AdjustorThunk_r8i8i4(int64_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(double*)ret;
}


static double __N2M_AdjustorThunk_r8i8i8(int64_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(double*)ret;
}


static uint8_t __N2M_AdjustorThunk_u1i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)) };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_AdjustorThunk_u1i8S1(int64_t __arg0, ValueTypeSize<1> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_AdjustorThunk_u1i8S108(int64_t __arg0, ValueTypeSize<108> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_AdjustorThunk_u1i8S116(int64_t __arg0, ValueTypeSize<116> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_AdjustorThunk_u1i8S12(int64_t __arg0, ValueTypeSize<12> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_AdjustorThunk_u1i8S120(int64_t __arg0, ValueTypeSize<120> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_AdjustorThunk_u1i8S136(int64_t __arg0, ValueTypeSize<136> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_AdjustorThunk_u1i8S1584(int64_t __arg0, ValueTypeSize<1584> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_AdjustorThunk_u1i8S16(int64_t __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_AdjustorThunk_u1i8S16S16(int64_t __arg0, ValueTypeSize<16> __arg1, ValueTypeSize<16> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_AdjustorThunk_u1i8S16i8S16i8(int64_t __arg0, ValueTypeSize<16> __arg1, int64_t __arg2, ValueTypeSize<16> __arg3, int64_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1, *(uint64_t*)&__arg2, (uint64_t)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_AdjustorThunk_u1i8S16i8i4(int64_t __arg0, ValueTypeSize<16> __arg1, int64_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_AdjustorThunk_u1i8S196(int64_t __arg0, ValueTypeSize<196> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_AdjustorThunk_u1i8S2(int64_t __arg0, ValueTypeSize<2> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_AdjustorThunk_u1i8S24(int64_t __arg0, ValueTypeSize<24> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_AdjustorThunk_u1i8S24S24(int64_t __arg0, ValueTypeSize<24> __arg1, ValueTypeSize<24> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_AdjustorThunk_u1i8S252(int64_t __arg0, ValueTypeSize<252> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_AdjustorThunk_u1i8S28(int64_t __arg0, ValueTypeSize<28> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_AdjustorThunk_u1i8S288(int64_t __arg0, ValueTypeSize<288> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_AdjustorThunk_u1i8S296(int64_t __arg0, ValueTypeSize<296> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_AdjustorThunk_u1i8S32(int64_t __arg0, ValueTypeSize<32> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_AdjustorThunk_u1i8S4(int64_t __arg0, ValueTypeSize<4> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_AdjustorThunk_u1i8S40(int64_t __arg0, ValueTypeSize<40> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_AdjustorThunk_u1i8S48(int64_t __arg0, ValueTypeSize<48> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_AdjustorThunk_u1i8S64(int64_t __arg0, ValueTypeSize<64> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_AdjustorThunk_u1i8S68(int64_t __arg0, ValueTypeSize<68> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_AdjustorThunk_u1i8S8(int64_t __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_AdjustorThunk_u1i8S96(int64_t __arg0, ValueTypeSize<96> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_AdjustorThunk_u1i8S992(int64_t __arg0, ValueTypeSize<992> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_AdjustorThunk_u1i8i1(int64_t __arg0, int8_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_AdjustorThunk_u1i8i2(int64_t __arg0, int16_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_AdjustorThunk_u1i8i4(int64_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_AdjustorThunk_u1i8i4i4(int64_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_AdjustorThunk_u1i8i8(int64_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_AdjustorThunk_u1i8i8i8(int64_t __arg0, int64_t __arg1, int64_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_AdjustorThunk_u1i8i8i8i4(int64_t __arg0, int64_t __arg1, int64_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_AdjustorThunk_u1i8i8u1(int64_t __arg0, int64_t __arg1, uint8_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_AdjustorThunk_u1i8r4(int64_t __arg0, float __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_AdjustorThunk_u1i8r8(int64_t __arg0, double __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_AdjustorThunk_u1i8u1(int64_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_AdjustorThunk_u1i8u2(int64_t __arg0, uint16_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_AdjustorThunk_u1i8u4(int64_t __arg0, uint32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint8_t __N2M_AdjustorThunk_u1i8u8(int64_t __arg0, uint64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


static uint16_t __N2M_AdjustorThunk_u2i8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)) };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint16_t*)ret;
}


static uint16_t __N2M_AdjustorThunk_u2i8i8(int64_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint16_t*)ret;
}


static uint32_t __N2M_AdjustorThunk_u4i8i8(int64_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint32_t*)ret;
}


static uint64_t __N2M_AdjustorThunk_u8i8i8(int64_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint64_t*)ret;
}


static void __N2M_AdjustorThunk_vi8(int64_t __arg0, const MethodInfo* method)
{
    StackObject args[1] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)) };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_AdjustorThunk_vi8S12(int64_t __arg0, ValueTypeSize<12> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_AdjustorThunk_vi8S16(int64_t __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_AdjustorThunk_vi8S16S64(int64_t __arg0, ValueTypeSize<16> __arg1, ValueTypeSize<64> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_AdjustorThunk_vi8S16S64i8(int64_t __arg0, ValueTypeSize<16> __arg1, ValueTypeSize<64> __arg2, int64_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1, (uint64_t)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_AdjustorThunk_vi8S16i8i4(int64_t __arg0, ValueTypeSize<16> __arg1, int64_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_AdjustorThunk_vi8S16i8i8(int64_t __arg0, ValueTypeSize<16> __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_AdjustorThunk_vi8S24(int64_t __arg0, ValueTypeSize<24> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_AdjustorThunk_vi8S4(int64_t __arg0, ValueTypeSize<4> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_AdjustorThunk_vi8S48(int64_t __arg0, ValueTypeSize<48> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_AdjustorThunk_vi8S8(int64_t __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_AdjustorThunk_vi8i4(int64_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_AdjustorThunk_vi8i4S12(int64_t __arg0, int32_t __arg1, ValueTypeSize<12> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_AdjustorThunk_vi8i4S16(int64_t __arg0, int32_t __arg1, ValueTypeSize<16> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_AdjustorThunk_vi8i4S24(int64_t __arg0, int32_t __arg1, ValueTypeSize<24> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_AdjustorThunk_vi8i4S4(int64_t __arg0, int32_t __arg1, ValueTypeSize<4> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_AdjustorThunk_vi8i4S48(int64_t __arg0, int32_t __arg1, ValueTypeSize<48> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_AdjustorThunk_vi8i4S8(int64_t __arg0, int32_t __arg1, ValueTypeSize<8> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_AdjustorThunk_vi8i4i4(int64_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_AdjustorThunk_vi8i4i8(int64_t __arg0, int32_t __arg1, int64_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_AdjustorThunk_vi8i4i8i8(int64_t __arg0, int32_t __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_AdjustorThunk_vi8i4i8i8i8(int64_t __arg0, int32_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method)
{
    StackObject args[5] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_AdjustorThunk_vi8i4r8(int64_t __arg0, int32_t __arg1, double __arg2, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_AdjustorThunk_vi8i8(int64_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_AdjustorThunk_vi8i8S16(int64_t __arg0, int64_t __arg1, ValueTypeSize<16> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_AdjustorThunk_vi8i8i4(int64_t __arg0, int64_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_AdjustorThunk_vi8i8i8(int64_t __arg0, int64_t __arg1, int64_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_AdjustorThunk_vi8i8i8S16(int64_t __arg0, int64_t __arg1, int64_t __arg2, ValueTypeSize<16> __arg3, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, (uint64_t)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_AdjustorThunk_vi8i8i8u1(int64_t __arg0, int64_t __arg1, int64_t __arg2, uint8_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_AdjustorThunk_vi8i8u1u1(int64_t __arg0, int64_t __arg1, uint8_t __arg2, uint8_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_AdjustorThunk_vi8r8(int64_t __arg0, double __arg1, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


static void __N2M_AdjustorThunk_vi8u1(int64_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


NativeAdjustThunkMethodInfo hybridclr::interpreter::g_adjustThunkStub[] = 
{

	{"S12i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_S12i8},
	{"S12i8i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_S12i8i4},
	{"S12i8u1", (Il2CppMethodPointer)__N2M_AdjustorThunk_S12i8u1},
	{"S16i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_S16i8},
	{"S16i8i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_S16i8i4},
	{"S16i8i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_S16i8i8},
	{"S24i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_S24i8},
	{"S24i8i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_S24i8i4},
	{"S48i8i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_S48i8i4},
	{"S4i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_S4i8},
	{"S4i8i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_S4i8i4},
	{"S8i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_S8i8},
	{"S8i8S8", (Il2CppMethodPointer)__N2M_AdjustorThunk_S8i8S8},
	{"S8i8i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_S8i8i4},
	{"S8i8i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_S8i8i8},
	{"i1i8i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_i1i8i8},
	{"i2i8i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_i2i8i8},
	{"i4i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i8},
	{"i4i8S1", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i8S1},
	{"i4i8S12", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i8S12},
	{"i4i8S12S12", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i8S12S12},
	{"i4i8S16", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i8S16},
	{"i4i8S16S16", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i8S16S16},
	{"i4i8S24", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i8S24},
	{"i4i8S24S24", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i8S24S24},
	{"i4i8S4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i8S4},
	{"i4i8S48", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i8S48},
	{"i4i8S4S4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i8S4S4},
	{"i4i8S8", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i8S8},
	{"i4i8S8S8", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i8S8S8},
	{"i4i8i1", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i8i1},
	{"i4i8i2", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i8i2},
	{"i4i8i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i8i4},
	{"i4i8i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i8i4i4},
	{"i4i8i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i8i8},
	{"i4i8i8i4i4i8i4i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i8i8i4i4i8i4i4i4},
	{"i4i8i8i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i8i8i8},
	{"i4i8i8i8i4i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i8i8i8i4i4i4},
	{"i4i8r4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i8r4},
	{"i4i8r8", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i8r8},
	{"i4i8r8r8", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i8r8r8},
	{"i4i8u1", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i8u1},
	{"i4i8u2", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i8u2},
	{"i4i8u4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i8u4},
	{"i4i8u8", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i8u8},
	{"i4i8u8u8", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i8u8u8},
	{"i8i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_i8i8},
	{"i8i8S16", (Il2CppMethodPointer)__N2M_AdjustorThunk_i8i8S16},
	{"i8i8i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i8i8i4},
	{"i8i8i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_i8i8i8},
	{"i8i8i8S16i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_i8i8i8S16i8},
	{"i8i8i8i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i8i8i8i4},
	{"i8i8i8i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_i8i8i8i8},
	{"i8i8i8i8S16i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_i8i8i8i8S16i8},
	{"i8i8i8i8i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_i8i8i8i8i8},
	{"i8i8i8i8u1", (Il2CppMethodPointer)__N2M_AdjustorThunk_i8i8i8i8u1},
	{"i8i8i8u1", (Il2CppMethodPointer)__N2M_AdjustorThunk_i8i8i8u1},
	{"r4i8i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_r4i8i8},
	{"r8i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_r8i8},
	{"r8i8i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_r8i8i4},
	{"r8i8i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_r8i8i8},
	{"u1i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8},
	{"u1i8S1", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8S1},
	{"u1i8S108", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8S108},
	{"u1i8S116", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8S116},
	{"u1i8S12", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8S12},
	{"u1i8S120", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8S120},
	{"u1i8S136", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8S136},
	{"u1i8S1584", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8S1584},
	{"u1i8S16", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8S16},
	{"u1i8S16S16", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8S16S16},
	{"u1i8S16i8S16i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8S16i8S16i8},
	{"u1i8S16i8i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8S16i8i4},
	{"u1i8S196", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8S196},
	{"u1i8S2", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8S2},
	{"u1i8S24", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8S24},
	{"u1i8S24S24", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8S24S24},
	{"u1i8S252", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8S252},
	{"u1i8S28", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8S28},
	{"u1i8S288", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8S288},
	{"u1i8S296", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8S296},
	{"u1i8S32", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8S32},
	{"u1i8S4", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8S4},
	{"u1i8S40", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8S40},
	{"u1i8S48", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8S48},
	{"u1i8S64", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8S64},
	{"u1i8S68", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8S68},
	{"u1i8S8", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8S8},
	{"u1i8S96", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8S96},
	{"u1i8S992", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8S992},
	{"u1i8i1", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8i1},
	{"u1i8i2", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8i2},
	{"u1i8i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8i4},
	{"u1i8i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8i4i4},
	{"u1i8i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8i8},
	{"u1i8i8i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8i8i8},
	{"u1i8i8i8i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8i8i8i4},
	{"u1i8i8u1", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8i8u1},
	{"u1i8r4", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8r4},
	{"u1i8r8", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8r8},
	{"u1i8u1", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8u1},
	{"u1i8u2", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8u2},
	{"u1i8u4", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8u4},
	{"u1i8u8", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i8u8},
	{"u2i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_u2i8},
	{"u2i8i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_u2i8i8},
	{"u4i8i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_u4i8i8},
	{"u8i8i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_u8i8i8},
	{"vi8", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8},
	{"vi8S12", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8S12},
	{"vi8S16", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8S16},
	{"vi8S16S64", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8S16S64},
	{"vi8S16S64i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8S16S64i8},
	{"vi8S16i8i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8S16i8i4},
	{"vi8S16i8i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8S16i8i8},
	{"vi8S24", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8S24},
	{"vi8S4", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8S4},
	{"vi8S48", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8S48},
	{"vi8S8", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8S8},
	{"vi8i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8i4},
	{"vi8i4S12", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8i4S12},
	{"vi8i4S16", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8i4S16},
	{"vi8i4S24", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8i4S24},
	{"vi8i4S4", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8i4S4},
	{"vi8i4S48", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8i4S48},
	{"vi8i4S8", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8i4S8},
	{"vi8i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8i4i4},
	{"vi8i4i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8i4i8},
	{"vi8i4i8i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8i4i8i8},
	{"vi8i4i8i8i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8i4i8i8i8},
	{"vi8i4r8", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8i4r8},
	{"vi8i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8i8},
	{"vi8i8S16", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8i8S16},
	{"vi8i8i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8i8i4},
	{"vi8i8i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8i8i8},
	{"vi8i8i8S16", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8i8i8S16},
	{"vi8i8i8u1", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8i8i8u1},
	{"vi8i8u1u1", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8i8u1u1},
	{"vi8r8", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8r8},
	{"vi8u1", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi8u1},
	{nullptr, nullptr},
};

//!!!}}CODE
#endif
