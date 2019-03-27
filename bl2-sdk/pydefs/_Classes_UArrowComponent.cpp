#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UArrowComponent(py::module &m)
{
    py::class_< UArrowComponent,  UPrimitiveComponent   >(m, "UArrowComponent")
		.def_static("StaticClass", &UArrowComponent::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ArrowColor", &UArrowComponent::ArrowColor)
        .def_readwrite("ArrowSize", &UArrowComponent::ArrowSize)
          ;
}