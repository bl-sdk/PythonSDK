#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowCoverStanceDefinition(py::module &m)
{
    py::class_< UWillowCoverStanceDefinition,  UGBXDefinition   >(m, "UWillowCoverStanceDefinition")
        .def_readwrite("AimProfile", &UWillowCoverStanceDefinition::AimProfile)
        .def_readwrite("Enter", &UWillowCoverStanceDefinition::Enter)
        .def_readwrite("Exit", &UWillowCoverStanceDefinition::Exit)
        .def_readwrite("Idle", &UWillowCoverStanceDefinition::Idle)
        .def_readwrite("FireEnter", &UWillowCoverStanceDefinition::FireEnter)
        .def_readwrite("FireExit", &UWillowCoverStanceDefinition::FireExit)
        .def_readwrite("FireIdle", &UWillowCoverStanceDefinition::FireIdle)
        .def("StaticClass", &UWillowCoverStanceDefinition::StaticClass, py::return_value_policy::reference)
          ;
}