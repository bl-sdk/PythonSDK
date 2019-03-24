#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryArchetype(py::module &m)
{
    py::class_< UActorFactoryArchetype,  UActorFactory   >(m, "UActorFactoryArchetype")
		.def_static("StaticClass", &UActorFactoryArchetype::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ArchetypeActor", &UActorFactoryArchetype::ArchetypeActor)
          ;
}