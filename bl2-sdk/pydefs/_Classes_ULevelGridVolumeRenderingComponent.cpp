#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULevelGridVolumeRenderingComponent(py::object m)
{
    py::class_< ULevelGridVolumeRenderingComponent,  UPrimitiveComponent   >(m, "ULevelGridVolumeRenderingComponent")
        .def("StaticClass", &ULevelGridVolumeRenderingComponent::StaticClass, py::return_value_policy::reference)
          ;
}