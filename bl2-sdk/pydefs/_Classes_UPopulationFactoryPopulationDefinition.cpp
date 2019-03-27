#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPopulationFactoryPopulationDefinition(py::module &m)
{
    py::class_< UPopulationFactoryPopulationDefinition,  UPopulationFactory   >(m, "UPopulationFactoryPopulationDefinition")
		.def_static("StaticClass", &UPopulationFactoryPopulationDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("PopulationDef", &UPopulationFactoryPopulationDefinition::PopulationDef)
        .def("GetSpawnFactory", &UPopulationFactoryPopulationDefinition::GetSpawnFactory, py::return_value_policy::reference)
        .def("GetActorAllegiance", &UPopulationFactoryPopulationDefinition::GetActorAllegiance, py::return_value_policy::reference)
        .def("IsFactoryWithin", &UPopulationFactoryPopulationDefinition::IsFactoryWithin)
          ;
}