#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USplineMeshComponent()
{
    py::class_< USplineMeshComponent,  UStaticMeshComponent   >("USplineMeshComponent")
        .def_readwrite("SplineParams", &USplineMeshComponent::SplineParams)
        .def_readwrite("SplineXDir", &USplineMeshComponent::SplineXDir)
        .def("StaticClass", &USplineMeshComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}