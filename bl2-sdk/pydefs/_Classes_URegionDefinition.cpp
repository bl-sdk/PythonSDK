#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URegionDefinition(py::module &m)
{
    py::class_< URegionDefinition,  UGBXDefinition   >(m, "URegionDefinition")
		.def_static("StaticClass", &URegionDefinition::StaticClass, py::return_value_policy::reference)
        .def("GetDefaultRegionGameStage", &URegionDefinition::GetDefaultRegionGameStage)
        .def("TestRegionGameStage", &URegionDefinition::TestRegionGameStage)
        .def("GetRegionGameStage", &URegionDefinition::GetRegionGameStage)
          ;
}