#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryWillowElevator(py::module &m)
{
    py::class_< UActorFactoryWillowElevator,  UActorFactoryMover   >(m, "UActorFactoryWillowElevator")
		.def_static("StaticClass", &UActorFactoryWillowElevator::StaticClass, py::return_value_policy::reference)
          ;
}