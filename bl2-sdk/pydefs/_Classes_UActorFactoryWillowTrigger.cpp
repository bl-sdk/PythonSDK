#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryWillowTrigger(py::object m)
{
    py::class_< UActorFactoryWillowTrigger,  UActorFactory   >(m, "UActorFactoryWillowTrigger")
        .def("StaticClass", &UActorFactoryWillowTrigger::StaticClass, py::return_value_policy::reference)
          ;
}