#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FScaleformPortraitData()
{
    class_< FScaleformPortraitData >("FScaleformPortraitData", no_init)
        .def_readwrite("ScaleformName", &FScaleformPortraitData::ScaleformName)
        .def_readwrite("PortraitMovie", &FScaleformPortraitData::PortraitMovie)
  ;
}