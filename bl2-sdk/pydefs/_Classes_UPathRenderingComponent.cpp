#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPathRenderingComponent(py::object m)
{
    py::class_< UPathRenderingComponent,  UPrimitiveComponent   >(m, "UPathRenderingComponent")
        .def("StaticClass", &UPathRenderingComponent::StaticClass, py::return_value_policy::reference)
          ;
}