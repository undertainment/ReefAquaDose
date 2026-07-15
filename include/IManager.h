/*
========================================================

Reef AquaDose

IManager.h

Purpose:
Base interface implemented by every system manager.

========================================================
*/

#pragma once

class IManager
{
public:
    virtual ~IManager() = default;

    /// Initialize the manager.
    virtual bool begin() = 0;

    /// Called repeatedly from the main application loop.
    virtual void loop() = 0;
};