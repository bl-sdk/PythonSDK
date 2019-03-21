#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryWillowWaypoint(py::object m)
{
    py::class_< UActorFactoryWillowWaypoint,  UActorFactory   >(m, "UActorFactoryWillowWaypoint")
        .def("StaticClass", &UActorFactoryWillowWaypoint::StaticClass, py::return_value_policy::reference)
          ;
}