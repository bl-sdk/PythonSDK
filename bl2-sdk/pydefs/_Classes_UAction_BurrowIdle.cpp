#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAction_BurrowIdle(py::object m)
{
    py::class_< UAction_BurrowIdle,  UAction_Idle   >(m, "UAction_BurrowIdle")
        .def("StaticClass", &UAction_BurrowIdle::StaticClass, py::return_value_policy::reference)
          ;
}