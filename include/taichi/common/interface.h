/*******************************************************************************
    Taichi - Physically based Computer Graphics Library

    Copyright (c) 2016 Yuanming Hu <yuanmhu@gmail.com>

    All rights reserved. Use of this source code is governed by
    the MIT license as written in the LICENSE file.
*******************************************************************************/

#pragma once

#include <taichi/common/config.h>

TC_NAMESPACE_BEGIN

    class Simulator {
    public:
        virtual void initialize(const Config &config) {};
        virtual void step(float delta_t) {};
    };

TC_NAMESPACE_END
