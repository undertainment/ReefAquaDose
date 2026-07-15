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

    virtual const char* name() const = 0;

    virtual bool begin() = 0;

    virtual void loop() = 0;

    virtual bool healthy() const = 0;
};