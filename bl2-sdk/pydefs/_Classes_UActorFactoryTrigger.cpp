#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryTrigger()
{
    py::class_< UActorFactoryTrigger,  UActorFactory   >("UActorFactoryTrigger")
        .def("StaticClass", &UActorFactoryTrigger::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}