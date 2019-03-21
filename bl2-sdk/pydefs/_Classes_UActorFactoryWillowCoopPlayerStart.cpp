#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryWillowCoopPlayerStart(py::object m)
{
    py::class_< UActorFactoryWillowCoopPlayerStart,  UActorFactory   >(m, "UActorFactoryWillowCoopPlayerStart")
        .def("StaticClass", &UActorFactoryWillowCoopPlayerStart::StaticClass, py::return_value_policy::reference)
          ;
}