#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryArchetype()
{
    py::class_< UActorFactoryArchetype,  UActorFactory   >("UActorFactoryArchetype")
        .def_readwrite("ArchetypeActor", &UActorFactoryArchetype::ArchetypeActor)
        .def("StaticClass", &UActorFactoryArchetype::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}