#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ANote(py::object m)
{
    py::class_< ANote,  AActor   >(m, "ANote")
        .def("StaticClass", &ANote::StaticClass, py::return_value_policy::reference)
          ;
}