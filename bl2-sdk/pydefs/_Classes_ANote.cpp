#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ANote(py::module &m)
{
    py::class_< ANote,  AActor   >(m, "ANote")
		.def_static("StaticClass", &ANote::StaticClass, py::return_value_policy::reference)
          ;
}