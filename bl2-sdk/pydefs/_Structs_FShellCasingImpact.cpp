#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FShellCasingImpact()
{
    py::class_< FShellCasingImpact >("FShellCasingImpact")
        .def_readwrite("ImpactTime", &FShellCasingImpact::ImpactTime)
        .def_readwrite("ImpactLocation", &FShellCasingImpact::ImpactLocation)
  ;
}