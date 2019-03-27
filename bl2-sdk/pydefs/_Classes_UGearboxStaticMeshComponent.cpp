#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxStaticMeshComponent(py::module &m)
{
    py::class_< UGearboxStaticMeshComponent,  UStaticMeshComponent   >(m, "UGearboxStaticMeshComponent")
		.def_static("StaticClass", &UGearboxStaticMeshComponent::StaticClass, py::return_value_policy::reference)
        .def_readwrite("FOV", &UGearboxStaticMeshComponent::FOV)
          ;
}