#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNxFootForceFieldComponent(py::module &m)
{
    py::class_< UNxFootForceFieldComponent,  UNxForceFieldRadialComponent   >(m, "UNxFootForceFieldComponent")
		.def_static("StaticClass", &UNxFootForceFieldComponent::StaticClass, py::return_value_policy::reference)
          ;
}