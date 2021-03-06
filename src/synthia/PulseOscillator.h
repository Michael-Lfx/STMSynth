//
//  PulseOscillator.h
//  Callisto
//
//  Created by Andy Best on 16/06/2014.
//  Copyright (c) 2014 Andy Best. All rights reserved.
//

#pragma once

#include "Generator.h"

namespace Synthia {
    class PulseOscillator : PitchedGenerator
    {
    public:
        void init(SynthContext *ctx);
        void setFrequency(float freq);
        float tick(int channel);
        void setPulseWidth(float pulseWidth);
        
    private:
        float _phase;
        float _tickStep;
        float _pulseWidth;

    };
}
