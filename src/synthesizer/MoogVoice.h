//
//  MoogVoice.h
//  TestTool
//
//  Created by Andy Best on 25/02/2015.
//  Copyright (c) 2015 Andy Best. All rights reserved.
//

#pragma once

#include <stdio.h>

#include "Synthia.h"


namespace Synthia
{
    enum
    {
        kMoogVoiceParameter_OSC1_Waveform,
        kMoogVoiceParameter_OSC1_Volume,
        kMoogVoiceParameter_OSC1_Tune,
        kMoogVoiceParameter_OSC1_FineTune,
        
        kMoogVoiceParameter_OSC2_Waveform,
        kMoogVoiceParameter_OSC2_Volume,
        kMoogVoiceParameter_OSC2_Tune,
        kMoogVoiceParameter_OSC2_FineTune,
        
        kMoogVoiceParameter_OSC3_Waveform,
        kMoogVoiceParameter_OSC3_Volume,
        kMoogVoiceParameter_OSC3_Tune,
        kMoogVoiceParameter_OSC3_FineTune,
        
        kMoogVoiceParameter_Envelope_Attack,
        kMoogVoiceParameter_Envelope_Decay,
        kMoogVoiceParameter_Envelope_Sustain,
        kMoogVoiceParameter_Envelope_Release,
        
        kMoogVoiceParameter_Filter_Cutoff,
        kMoogVoiceParameter_Filter_Resonance,
        
        kMoogVoiceParameter_FilterEnvelope_Attack,
        kMoogVoiceParameter_FilterEnvelope_Decay,
        kMoogVoiceParameter_FilterEnvelope_Sustain,
        kMoogVoiceParameter_FilterEnvelope_Release
    };
    
    class MoogVoice : public SynthVoice, public Controllable
    {
    public:
        void init(SynthContext *ctx);
        
        void setFrequency(float freq);
        float tick(int channel);
        
        void keyOn();
        void keyOff();
        
        void changeValueForEntry(ControlEntry entry, float value);
        void setupControlEntries();
        
    private:
        SwitchableWavetableOscillator _osc1;
        SwitchableWavetableOscillator _osc2;
        SwitchableWavetableOscillator _osc3;
        
        float _osc1Volume;
        float _osc1Tune;
        float _osc1FineTune;
        
        float _osc2Volume;
        float _osc2Tune;
        float _osc2FineTune;
        
        float _osc3Volume;
        float _osc3Tune;
        float _osc3FineTune;
        
        Envelope _envelope;
        Envelope _filterEnvelope;
        
        Lowpass _lowpassFilter;
    };
}
