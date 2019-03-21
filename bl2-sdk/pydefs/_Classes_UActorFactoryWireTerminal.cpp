#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryWireTerminal()
{
    py::class_< UActorFactoryWireTerminal,  UActorFactory   >("UActorFactoryWireTerminal")
        .def("StaticClass", &UActorFactoryWireTerminal::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}