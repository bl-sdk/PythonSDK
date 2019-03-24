#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URotationArrowComponent(py::module &m)
{
    py::class_< URotationArrowComponent,  UArrowComponent   >(m, "URotationArrowComponent")
		.def_static("StaticClass", &URotationArrowComponent::StaticClass, py::return_value_policy::reference)
          ;
}