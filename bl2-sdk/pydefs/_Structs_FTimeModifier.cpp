#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTimeModifier()
{
    class_< FTimeModifier >("FTimeModifier", no_init)
        .def_readwrite("Time", &FTimeModifier::Time)
        .def_readwrite("TargetStrength", &FTimeModifier::TargetStrength)
  ;
}