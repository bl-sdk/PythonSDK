#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowPreviewComponent()
{
    py::class_< UWillowPreviewComponent,  USkeletalMeshComponent   >("UWillowPreviewComponent")
        .def_readwrite("CurrentPawn", &UWillowPreviewComponent::CurrentPawn)
        .def("StaticClass", &UWillowPreviewComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}