#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowVendingMachineDefinition(py::module &m)
{
    py::class_< UWillowVendingMachineDefinition,  UInteractiveObjectDefinition   >(m, "UWillowVendingMachineDefinition")
        .def("OnFeaturedItemSet", &UWillowVendingMachineDefinition::OnFeaturedItemSet)
          ;
}