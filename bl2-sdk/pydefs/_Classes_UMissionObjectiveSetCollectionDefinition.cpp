#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMissionObjectiveSetCollectionDefinition()
{
    py::class_< UMissionObjectiveSetCollectionDefinition,  UMissionObjectiveSetDefinition   >("UMissionObjectiveSetCollectionDefinition")
        .def_readwrite("ObjectiveSetDefinitions", &UMissionObjectiveSetCollectionDefinition::ObjectiveSetDefinitions)
        .def("StaticClass", &UMissionObjectiveSetCollectionDefinition::StaticClass, py::return_value_policy::reference)
        .def("ContainsObjective", &UMissionObjectiveSetCollectionDefinition::ContainsObjective)
        .staticmethod("StaticClass")
  ;
}