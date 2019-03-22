#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryWireTerminal(py::module &m)
{
    py::class_< UActorFactoryWireTerminal,  UActorFactory   >(m, "UActorFactoryWireTerminal")
        .def("StaticClass", &UActorFactoryWireTerminal::StaticClass, py::return_value_policy::reference)
          ;
}