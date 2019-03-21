#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowVendingMachineDefinition()
{
    py::class_< UWillowVendingMachineDefinition,  UInteractiveObjectDefinition   >("UWillowVendingMachineDefinition")
        .def("StaticClass", &UWillowVendingMachineDefinition::StaticClass, py::return_value_policy::reference)
        .def("OnFeaturedItemSet", &UWillowVendingMachineDefinition::OnFeaturedItemSet)
        .staticmethod("StaticClass")
  ;
}