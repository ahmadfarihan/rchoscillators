#ifndef RCHOSC_OSCILLATORS_SQUAREPULSE_H_INCLUDED
#define RCHOSC_OSCILLATORS_SQUAREPULSE_H_INCLUDED
// ---- MODULE CODE STARTS BELOW ---- //


// Convenience definitions for this oscillator
#define OSCILLATOR_TYPE     Oscillators::Templates::SquarePulse
#define OSCILLATOR_WRAPPER  Helpers::Wrapper


/** Creates a multi-channel capable square pulse wave oscillator.
    This will generate a MONO oscillator wave and duplicate
    it to all channels of a passed sample buffer. */
class SquarePulse : private OSCILLATOR_WRAPPER<OSCILLATOR_TYPE>
{
public:
    
    SquarePulse  () {}
    ~SquarePulse () {}
    
    using OSCILLATOR_WRAPPER<OSCILLATOR_TYPE>::reset;
    using OSCILLATOR_WRAPPER<OSCILLATOR_TYPE>::setup;
    using OSCILLATOR_WRAPPER<OSCILLATOR_TYPE>::setWidth;
    
    using OSCILLATOR_WRAPPER<OSCILLATOR_TYPE>::fill;
    using OSCILLATOR_WRAPPER<OSCILLATOR_TYPE>::add;
    
}; // end class RCH::Oscillators::SquarePulse


// Just cleaning up
#ifdef OSCILLATOR_WRAPPER
#undef OSCILLATOR_WRAPPER
#endif

// Just cleaning up
#ifdef OSCILLATOR_TYPE
#undef OSCILLATOR_TYPE
#endif


// ---- MODULE CODE ENDS ABOVE ---- //
#endif // #ifndef RCHOSC_OSCILLATORS_SQUAREPULSE_H_INCLUDED