#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWwiseSoundGroupRenderingComponent(py::object m)
{
    py::class_< UWwiseSoundGroupRenderingComponent,  UPrimitiveComponent   >(m, "UWwiseSoundGroupRenderingComponent")
        .def("StaticClass", &UWwiseSoundGroupRenderingComponent::StaticClass, py::return_value_policy::reference)
          ;
}