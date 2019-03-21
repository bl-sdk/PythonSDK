#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowAIMoveNodePathComponent(py::object m)
{
    py::class_< UWillowAIMoveNodePathComponent,  UPrimitiveComponent   >(m, "UWillowAIMoveNodePathComponent")
        .def("StaticClass", &UWillowAIMoveNodePathComponent::StaticClass, py::return_value_policy::reference)
          ;
}