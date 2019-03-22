#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URegionDefinition(py::module &m)
{
    py::class_< URegionDefinition,  UGBXDefinition   >(m, "URegionDefinition")
        .def("GetDefaultRegionGameStage", &URegionDefinition::GetDefaultRegionGameStage)
        .def("TestRegionGameStage", &URegionDefinition::TestRegionGameStage)
        .def("GetRegionGameStage", &URegionDefinition::GetRegionGameStage)
          ;
}