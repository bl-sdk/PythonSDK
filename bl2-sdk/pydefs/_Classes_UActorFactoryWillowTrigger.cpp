#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryWillowTrigger()
{
    py::class_< UActorFactoryWillowTrigger,  UActorFactory   >("UActorFactoryWillowTrigger")
        .def("StaticClass", &UActorFactoryWillowTrigger::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}