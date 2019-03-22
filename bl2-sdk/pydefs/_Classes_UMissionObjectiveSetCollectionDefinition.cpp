#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMissionObjectiveSetCollectionDefinition(py::module &m)
{
    py::class_< UMissionObjectiveSetCollectionDefinition,  UMissionObjectiveSetDefinition   >(m, "UMissionObjectiveSetCollectionDefinition")
        .def_readwrite("ObjectiveSetDefinitions", &UMissionObjectiveSetCollectionDefinition::ObjectiveSetDefinitions)
        .def("ContainsObjective", &UMissionObjectiveSetCollectionDefinition::ContainsObjective)
          ;
}