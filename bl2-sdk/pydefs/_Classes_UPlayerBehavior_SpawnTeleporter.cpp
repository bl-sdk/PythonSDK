#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPlayerBehavior_SpawnTeleporter()
{
    py::class_< UPlayerBehavior_SpawnTeleporter,  UPlayerBehaviorBase   >("UPlayerBehavior_SpawnTeleporter")
        .def_readwrite("PersonalTeleporterDefinition", &UPlayerBehavior_SpawnTeleporter::PersonalTeleporterDefinition)
        .def("StaticClass", &UPlayerBehavior_SpawnTeleporter::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UPlayerBehavior_SpawnTeleporter::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}