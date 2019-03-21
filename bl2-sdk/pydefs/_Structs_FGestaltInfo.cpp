#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGestaltInfo()
{
    class_< FGestaltInfo >("FGestaltInfo", no_init)
        .def_readwrite("Parts", &FGestaltInfo::Parts)
  ;
}