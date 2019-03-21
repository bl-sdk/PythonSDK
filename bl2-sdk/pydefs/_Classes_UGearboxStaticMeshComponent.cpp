#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxStaticMeshComponent()
{
    py::class_< UGearboxStaticMeshComponent,  UStaticMeshComponent   >("UGearboxStaticMeshComponent")
        .def_readwrite("FOV", &UGearboxStaticMeshComponent::FOV)
        .def("StaticClass", &UGearboxStaticMeshComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}