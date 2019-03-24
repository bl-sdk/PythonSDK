#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryWillowPawn(py::module &m)
{
    py::class_< UActorFactoryWillowPawn,  UActorFactory   >(m, "UActorFactoryWillowPawn")
		.def_static("StaticClass", &UActorFactoryWillowPawn::StaticClass, py::return_value_policy::reference)
        .def_readwrite("PawnArchetype", &UActorFactoryWillowPawn::PawnArchetype)
          ;
}