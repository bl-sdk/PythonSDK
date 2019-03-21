#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URotationArrowComponent()
{
    py::class_< URotationArrowComponent,  UArrowComponent   >("URotationArrowComponent")
        .def("StaticClass", &URotationArrowComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}