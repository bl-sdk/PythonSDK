#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPathRenderingComponent()
{
    py::class_< UPathRenderingComponent,  UPrimitiveComponent   >("UPathRenderingComponent")
        .def("StaticClass", &UPathRenderingComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}