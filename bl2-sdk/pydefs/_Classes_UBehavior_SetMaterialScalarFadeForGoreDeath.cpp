#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetMaterialScalarFadeForGoreDeath(py::module &m)
{
    py::class_< UBehavior_SetMaterialScalarFadeForGoreDeath,  UBehavior_SetMaterialScalarFade   >(m, "UBehavior_SetMaterialScalarFadeForGoreDeath")
		.def_static("StaticClass", &UBehavior_SetMaterialScalarFadeForGoreDeath::StaticClass, py::return_value_policy::reference)
        .def("StartFade", &UBehavior_SetMaterialScalarFadeForGoreDeath::StartFade)
          ;
}