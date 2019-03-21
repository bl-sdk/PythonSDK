#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryWillowPawn()
{
    py::class_< UActorFactoryWillowPawn,  UActorFactory   >("UActorFactoryWillowPawn")
        .def_readwrite("PawnArchetype", &UActorFactoryWillowPawn::PawnArchetype)
        .def("StaticClass", &UActorFactoryWillowPawn::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}