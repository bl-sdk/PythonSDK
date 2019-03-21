#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryInteractiveSwitch()
{
    py::class_< UActorFactoryInteractiveSwitch,  UActorFactoryInteractiveObject   >("UActorFactoryInteractiveSwitch")
        .def("StaticClass", &UActorFactoryInteractiveSwitch::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}