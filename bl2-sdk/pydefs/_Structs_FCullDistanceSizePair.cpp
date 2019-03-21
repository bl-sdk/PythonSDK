#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCullDistanceSizePair()
{
    class_< FCullDistanceSizePair >("FCullDistanceSizePair", no_init)
        .def_readwrite("Size", &FCullDistanceSizePair::Size)
        .def_readwrite("CullDistance", &FCullDistanceSizePair::CullDistance)
  ;
}