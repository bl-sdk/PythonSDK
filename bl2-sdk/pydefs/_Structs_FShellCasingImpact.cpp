#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FShellCasingImpact()
{
    class_< FShellCasingImpact >("FShellCasingImpact", no_init)
        .def_readwrite("ImpactTime", &FShellCasingImpact::ImpactTime)
        .def_readwrite("ImpactLocation", &FShellCasingImpact::ImpactLocation)
  ;
}