#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USplineMeshComponent(py::module &m)
{
    py::class_< USplineMeshComponent,  UStaticMeshComponent   >(m, "USplineMeshComponent")
        .def_readwrite("SplineParams", &USplineMeshComponent::SplineParams)
        .def_readwrite("SplineXDir", &USplineMeshComponent::SplineXDir)
          ;
}