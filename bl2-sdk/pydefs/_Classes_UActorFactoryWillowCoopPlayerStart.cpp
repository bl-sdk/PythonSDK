#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryWillowCoopPlayerStart()
{
    py::class_< UActorFactoryWillowCoopPlayerStart,  UActorFactory   >("UActorFactoryWillowCoopPlayerStart")
        .def("StaticClass", &UActorFactoryWillowCoopPlayerStart::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}