#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryWillowWaypoint(py::module &m)
{
    py::class_< UActorFactoryWillowWaypoint,  UActorFactory   >(m, "UActorFactoryWillowWaypoint")
		.def_static("StaticClass", &UActorFactoryWillowWaypoint::StaticClass, py::return_value_policy::reference)
          ;
}