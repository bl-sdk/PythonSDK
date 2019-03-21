#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCoverGroupRenderingComponent()
{
    py::class_< UCoverGroupRenderingComponent,  UPrimitiveComponent   >("UCoverGroupRenderingComponent")
        .def("StaticClass", &UCoverGroupRenderingComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}