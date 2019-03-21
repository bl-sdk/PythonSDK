#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCoverGroupRenderingComponent(py::object m)
{
    py::class_< UCoverGroupRenderingComponent,  UPrimitiveComponent   >(m, "UCoverGroupRenderingComponent")
        .def("StaticClass", &UCoverGroupRenderingComponent::StaticClass, py::return_value_policy::reference)
          ;
}