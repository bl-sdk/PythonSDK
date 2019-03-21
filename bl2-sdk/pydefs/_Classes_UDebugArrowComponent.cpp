#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDebugArrowComponent(py::object m)
{
    py::class_< UDebugArrowComponent,  UArrowComponent   >(m, "UDebugArrowComponent")
        .def("StaticClass", &UDebugArrowComponent::StaticClass, py::return_value_policy::reference)
          ;
}