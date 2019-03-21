#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URotationArrowComponent(py::object m)
{
    py::class_< URotationArrowComponent,  UArrowComponent   >(m, "URotationArrowComponent")
        .def("StaticClass", &URotationArrowComponent::StaticClass, py::return_value_policy::reference)
          ;
}