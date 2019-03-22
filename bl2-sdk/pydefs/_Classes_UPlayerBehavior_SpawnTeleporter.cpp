#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPlayerBehavior_SpawnTeleporter(py::module &m)
{
    py::class_< UPlayerBehavior_SpawnTeleporter,  UPlayerBehaviorBase   >(m, "UPlayerBehavior_SpawnTeleporter")
        .def_readwrite("PersonalTeleporterDefinition", &UPlayerBehavior_SpawnTeleporter::PersonalTeleporterDefinition)
        .def("ApplyBehaviorToContext", &UPlayerBehavior_SpawnTeleporter::ApplyBehaviorToContext)
          ;
}