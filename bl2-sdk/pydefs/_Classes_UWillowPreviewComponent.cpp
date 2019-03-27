#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowPreviewComponent(py::module &m)
{
    py::class_< UWillowPreviewComponent,  USkeletalMeshComponent   >(m, "UWillowPreviewComponent")
		.def_static("StaticClass", &UWillowPreviewComponent::StaticClass, py::return_value_policy::reference)
        .def_readwrite("CurrentPawn", &UWillowPreviewComponent::CurrentPawn)
          ;
}