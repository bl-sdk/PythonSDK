#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCameraConeComponent()
{
    py::class_< UCameraConeComponent,  UPrimitiveComponent   >("UCameraConeComponent")
        .def("StaticClass", &UCameraConeComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}