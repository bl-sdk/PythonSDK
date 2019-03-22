#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowRegionDefinition(py::module &m)
{
    py::class_< UWillowRegionDefinition,  URegionDefinition   >(m, "UWillowRegionDefinition")
        .def_readwrite("DlcExpansion", &UWillowRegionDefinition::DlcExpansion)
        .def("StaticClass", &UWillowRegionDefinition::StaticClass, py::return_value_policy::reference)
        .def("SetAwesomeLevelOverride", &UWillowRegionDefinition::SetAwesomeLevelOverride)
        .def("SetGameStageOverride", &UWillowRegionDefinition::SetGameStageOverride)
        .def("GetDefaultRegionGameStage", &UWillowRegionDefinition::GetDefaultRegionGameStage)
        .def("TestRegionGameStage", &UWillowRegionDefinition::TestRegionGameStage)
        .def("GetRegionGameStage", &UWillowRegionDefinition::GetRegionGameStage)
          ;
}