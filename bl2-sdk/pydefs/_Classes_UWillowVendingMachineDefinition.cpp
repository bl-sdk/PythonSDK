#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowVendingMachineDefinition(py::module &m)
{
    py::class_< UWillowVendingMachineDefinition,  UInteractiveObjectDefinition   >(m, "UWillowVendingMachineDefinition")
		.def_static("StaticClass", &UWillowVendingMachineDefinition::StaticClass, py::return_value_policy::reference)
        .def("OnFeaturedItemSet", &UWillowVendingMachineDefinition::OnFeaturedItemSet)
          ;
}