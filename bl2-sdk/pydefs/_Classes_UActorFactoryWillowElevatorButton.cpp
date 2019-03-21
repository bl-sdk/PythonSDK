#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryWillowElevatorButton()
{
    py::class_< UActorFactoryWillowElevatorButton,  UActorFactoryInteractiveObject   >("UActorFactoryWillowElevatorButton")
        .def("StaticClass", &UActorFactoryWillowElevatorButton::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}