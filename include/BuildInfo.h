#pragma once

#include "Version.h"

struct BuildInfo
{
    const char* name;

    const char* version;

    const char* build;

    const char* date;

    const char* time;
};

inline BuildInfo BUILD_INFO
{
    FW_NAME,
    FW_VERSION,
    FW_BUILD,
    FW_DATE,
    FW_TIME
};