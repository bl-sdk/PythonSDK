#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryWillowPawn(py::object m)
{
    py::class_< UActorFactoryWillowPawn,  UActorFactory   >(m, "UActorFactoryWillowPawn")
        .def_readwrite("PawnArchetype", &UActorFactoryWillowPawn::PawnArchetype)
        .def("StaticClass", &UActorFactoryWillowPawn::StaticClass, py::return_value_policy::reference)
          ;
}