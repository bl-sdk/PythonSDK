#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryTrigger(py::object m)
{
    py::class_< UActorFactoryTrigger,  UActorFactory   >(m, "UActorFactoryTrigger")
        .def("StaticClass", &UActorFactoryTrigger::StaticClass, py::return_value_policy::reference)
          ;
}