/*
========================================================

Reef AquaDose

SystemState.h

Purpose:
Defines the overall firmware operating state.

========================================================
*/

#pragma once

#include <Arduino.h>

struct SystemState
{
    bool initialized = false;

    bool safeMode = false;

    bool wifiConnected = false;

    bool storageReady = false;

    bool configReady = false;

    bool pumpsReady = false;

    bool schedulerReady = false;

    bool webServerReady = false;

    bool timeSynchronized = false;

    uint32_t uptimeSeconds = 0;
};