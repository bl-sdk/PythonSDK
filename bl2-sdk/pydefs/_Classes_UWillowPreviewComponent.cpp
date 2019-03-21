#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowPreviewComponent(py::object m)
{
    py::class_< UWillowPreviewComponent,  USkeletalMeshComponent   >(m, "UWillowPreviewComponent")
        .def_readwrite("CurrentPawn", &UWillowPreviewComponent::CurrentPawn)
        .def("StaticClass", &UWillowPreviewComponent::StaticClass, py::return_value_policy::reference)
          ;
}