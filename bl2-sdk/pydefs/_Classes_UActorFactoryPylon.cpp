#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryPylon()
{
    py::class_< UActorFactoryPylon,  UActorFactory   >("UActorFactoryPylon")
        .def("StaticClass", &UActorFactoryPylon::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}