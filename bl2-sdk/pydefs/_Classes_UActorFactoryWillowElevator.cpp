#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryWillowElevator()
{
    py::class_< UActorFactoryWillowElevator,  UActorFactoryMover   >("UActorFactoryWillowElevator")
        .def("StaticClass", &UActorFactoryWillowElevator::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}