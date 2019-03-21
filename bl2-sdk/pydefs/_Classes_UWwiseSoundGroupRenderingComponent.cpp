#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWwiseSoundGroupRenderingComponent()
{
    py::class_< UWwiseSoundGroupRenderingComponent,  UPrimitiveComponent   >("UWwiseSoundGroupRenderingComponent")
        .def("StaticClass", &UWwiseSoundGroupRenderingComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}