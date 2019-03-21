#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPopulationSpawnedActorTagDefinition(py::object m)
{
    py::class_< UPopulationSpawnedActorTagDefinition,  UGBXDefinition   >(m, "UPopulationSpawnedActorTagDefinition")
        .def("StaticClass", &UPopulationSpawnedActorTagDefinition::StaticClass, py::return_value_policy::reference)
          ;
}