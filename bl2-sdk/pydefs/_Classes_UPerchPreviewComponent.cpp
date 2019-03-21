#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPerchPreviewComponent()
{
    py::class_< UPerchPreviewComponent,  USkeletalMeshComponent   >("UPerchPreviewComponent")
        .def_readwrite("PerchDef", &UPerchPreviewComponent::PerchDef)
        .def_readwrite("CurrentPawn", &UWillowPreviewComponent::CurrentPawn)
        .def("StaticClass", &UPerchPreviewComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}