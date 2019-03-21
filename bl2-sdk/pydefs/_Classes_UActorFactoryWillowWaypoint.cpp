#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryWillowWaypoint()
{
    py::class_< UActorFactoryWillowWaypoint,  UActorFactory   >("UActorFactoryWillowWaypoint")
        .def("StaticClass", &UActorFactoryWillowWaypoint::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}