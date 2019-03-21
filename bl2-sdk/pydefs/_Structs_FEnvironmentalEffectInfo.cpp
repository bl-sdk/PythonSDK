#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FEnvironmentalEffectInfo()
{
    class_< FEnvironmentalEffectInfo >("FEnvironmentalEffectInfo", no_init)
        .def_readwrite("EffectID", &FEnvironmentalEffectInfo::EffectID)
        .def_readwrite("Volume", &FEnvironmentalEffectInfo::Volume)
  ;
}