#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPerchPreviewComponent(py::module &m)
{
    py::class_< UPerchPreviewComponent,  USkeletalMeshComponent   >(m, "UPerchPreviewComponent")
		.def_static("StaticClass", &UPerchPreviewComponent::StaticClass, py::return_value_policy::reference)
        .def_readwrite("PerchDef", &UPerchPreviewComponent::PerchDef)
        .def_readwrite("CurrentPawn", &UWillowPreviewComponent::CurrentPawn)
          ;
}