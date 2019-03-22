#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowPawnInteractionDefinition(py::module &m)
{
    py::class_< UWillowPawnInteractionDefinition,  UPawnInteractionDefinition   >(m, "UWillowPawnInteractionDefinition")
        .def_readwrite("HUDIcon", &UWillowPawnInteractionDefinition::HUDIcon)
        .def_readwrite("HUDIconDef", &UWillowPawnInteractionDefinition::HUDIconDef)
        .def_readwrite("HUDIconDefSecondary", &UWillowPawnInteractionDefinition::HUDIconDefSecondary)
        .def("StaticClass", &UWillowPawnInteractionDefinition::StaticClass, py::return_value_policy::reference)
          ;
}