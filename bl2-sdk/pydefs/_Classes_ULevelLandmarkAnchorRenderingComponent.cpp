#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULevelLandmarkAnchorRenderingComponent()
{
    py::class_< ULevelLandmarkAnchorRenderingComponent,  UPrimitiveComponent   >("ULevelLandmarkAnchorRenderingComponent")
        .def("StaticClass", &ULevelLandmarkAnchorRenderingComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}