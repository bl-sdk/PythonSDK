#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FExtraMuzzleEffect()
{
    class_< FExtraMuzzleEffect >("FExtraMuzzleEffect", no_init)
        .def_readwrite("Particles", &FExtraMuzzleEffect::Particles)
        .def_readwrite("Sound", &FExtraMuzzleEffect::Sound)
  ;
}