#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryArchetype(py::module &m)
{
    py::class_< UActorFactoryArchetype,  UActorFactory   >(m, "UActorFactoryArchetype")
        .def_readwrite("ArchetypeActor", &UActorFactoryArchetype::ArchetypeActor)
          ;
}