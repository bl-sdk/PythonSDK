#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPopulationSpawnedActorTagDefinition()
{
    py::class_< UPopulationSpawnedActorTagDefinition,  UGBXDefinition   >("UPopulationSpawnedActorTagDefinition")
        .def("StaticClass", &UPopulationSpawnedActorTagDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}