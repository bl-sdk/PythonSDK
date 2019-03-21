#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USearchOrigin_ScriptedMoveTarget()
{
    py::class_< USearchOrigin_ScriptedMoveTarget,  USearchOrigin   >("USearchOrigin_ScriptedMoveTarget")
        .def("StaticClass", &USearchOrigin_ScriptedMoveTarget::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}