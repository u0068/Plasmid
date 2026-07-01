#pragma once
#include <cstdint>
#include <MinHook.h>

constexpr uintptr_t BASE = 0;

template<typename T>
constexpr T RVA(uintptr_t rva)
{
    return reinterpret_cast<T>(
        reinterpret_cast<uintptr_t>(GetModuleHandle(nullptr)) + rva);
}

template<typename T>
bool Hook(T& original, T hook)
{
    void* target = reinterpret_cast<void*>(original);

    auto status = MH_CreateHook(
        target,
        reinterpret_cast<void*>(hook),
        reinterpret_cast<void**>(&original));

    if (status != MH_OK)
    {
        printf("MH_CreateHook failed: %d\n", status);
        return false;
    }

    status = MH_EnableHook(target);

    if (status != MH_OK)
    {
        printf("MH_EnableHook failed: %d\n", status);
        return false;
    }

    return true;
}

// This needs to be after RVA def
#include "data_types.h"
//#include "data_exports.h""
#include "function_exports.h"

//inline auto set_lava_walls_6F7D0 = RVA<void(*)()>(0x6F7D0);
//inline auto give_mutation_6FC80 = RVA<void(*)(body*, int, int*, int, bool)>(0x6FC80);
