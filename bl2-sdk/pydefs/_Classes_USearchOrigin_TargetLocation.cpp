#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USearchOrigin_TargetLocation(py::module &m)
{
    py::class_< USearchOrigin_TargetLocation,  USearchOrigin   >(m, "USearchOrigin_TargetLocation")
		.def_static("StaticClass", &USearchOrigin_TargetLocation::StaticClass, py::return_value_policy::reference)
          ;
}