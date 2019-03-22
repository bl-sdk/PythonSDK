#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULevelLandmarkAnchorRenderingComponent(py::module &m)
{
    py::class_< ULevelLandmarkAnchorRenderingComponent,  UPrimitiveComponent   >(m, "ULevelLandmarkAnchorRenderingComponent")
        .def("StaticClass", &ULevelLandmarkAnchorRenderingComponent::StaticClass, py::return_value_policy::reference)
          ;
}