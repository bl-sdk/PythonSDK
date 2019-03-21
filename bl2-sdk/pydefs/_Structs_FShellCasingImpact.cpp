#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FShellCasingImpact(py::object m)
{
    py::class_< FShellCasingImpact >(m, "FShellCasingImpact")
        .def_readwrite("ImpactTime", &FShellCasingImpact::ImpactTime)
        .def_readwrite("ImpactLocation", &FShellCasingImpact::ImpactLocation)
  ;
}