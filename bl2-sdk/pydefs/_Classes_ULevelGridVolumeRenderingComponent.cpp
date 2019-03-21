#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULevelGridVolumeRenderingComponent()
{
    py::class_< ULevelGridVolumeRenderingComponent,  UPrimitiveComponent   >("ULevelGridVolumeRenderingComponent")
        .def("StaticClass", &ULevelGridVolumeRenderingComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}