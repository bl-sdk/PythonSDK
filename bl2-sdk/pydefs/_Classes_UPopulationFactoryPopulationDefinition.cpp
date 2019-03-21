#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPopulationFactoryPopulationDefinition()
{
    py::class_< UPopulationFactoryPopulationDefinition,  UPopulationFactory   >("UPopulationFactoryPopulationDefinition")
        .def_readwrite("PopulationDef", &UPopulationFactoryPopulationDefinition::PopulationDef)
        .def("StaticClass", &UPopulationFactoryPopulationDefinition::StaticClass, py::return_value_policy::reference)
        .def("GetSpawnFactory", &UPopulationFactoryPopulationDefinition::GetSpawnFactory, py::return_value_policy::reference)
        .def("GetActorAllegiance", &UPopulationFactoryPopulationDefinition::GetActorAllegiance, py::return_value_policy::reference)
        .def("IsFactoryWithin", &UPopulationFactoryPopulationDefinition::IsFactoryWithin)
        .staticmethod("StaticClass")
  ;
}