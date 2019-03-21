#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryInteractiveSwitch(py::object m)
{
    py::class_< UActorFactoryInteractiveSwitch,  UActorFactoryInteractiveObject   >(m, "UActorFactoryInteractiveSwitch")
        .def("StaticClass", &UActorFactoryInteractiveSwitch::StaticClass, py::return_value_policy::reference)
          ;
}