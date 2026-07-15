/*
========================================================

Reef AquaDose

SystemState.h

Purpose:
Defines the overall firmware operating state.

========================================================
*/

#pragma once

enum class SystemState
{
    Booting,
    Ready,
    Maintenance,
    Error
};