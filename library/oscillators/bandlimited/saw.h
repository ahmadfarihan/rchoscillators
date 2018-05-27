#pragma once
#ifndef RCHOSC_OSCILLATORS_BANDLIMITED_SAW_H_INCLUDED
#define RCHOSC_OSCILLATORS_BANDLIMITED_SAW_H_INCLUDED
// ---- MODULE CODE STARTS BELOW ---- //


// Convenience definitions for this oscillator
#define OSCILLATOR_TYPE     Oscillators::Templates::Bandlimited::Saw
#define OSCILLATOR_WRAPPER  Helpers::Wrapper


/** Creates a multi-channel capable band-limited sawtooth generator.
    This will generate a MONO oscillator wave and duplicate
    it to all channels of a passed sample buffer. */
class Saw : private OSCILLATOR_WRAPPER<OSCILLATOR_TYPE>
{
public:
    
    Saw  () {}
    ~Saw () {}
    
    using OSCILLATOR_WRAPPER<OSCILLATOR_TYPE>::reset;
    using OSCILLATOR_WRAPPER<OSCILLATOR_TYPE>::setup;
    
    using OSCILLATOR_WRAPPER<OSCILLATOR_TYPE>::setDirection;
    using OSCILLATOR_WRAPPER<OSCILLATOR_TYPE>::setAccuracy;
    
    using OSCILLATOR_WRAPPER<OSCILLATOR_TYPE>::fill;
    using OSCILLATOR_WRAPPER<OSCILLATOR_TYPE>::add;
    
}; // end class RCH::Oscillators::Bandlimited::Saw


// Just cleaning up
#undef OSCILLATOR_WRAPPER
#undef OSCILLATOR_TYPE


// ---- MODULE CODE ENDS ABOVE ---- //
#endif // #ifndef RCHOSC_OSCILLATORS_BANDLIMITED_SAW_H_INCLUDED
