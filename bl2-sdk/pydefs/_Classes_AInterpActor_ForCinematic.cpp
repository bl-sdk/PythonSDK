#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AInterpActor_ForCinematic()
{
    py::class_< AInterpActor_ForCinematic,  AInterpActor   >("AInterpActor_ForCinematic")
        .def("StaticClass", &AInterpActor_ForCinematic::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}