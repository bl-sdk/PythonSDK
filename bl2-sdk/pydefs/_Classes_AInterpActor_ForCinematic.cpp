#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AInterpActor_ForCinematic(py::module &m)
{
    py::class_< AInterpActor_ForCinematic,  AInterpActor   >(m, "AInterpActor_ForCinematic")
        .def("StaticClass", &AInterpActor_ForCinematic::StaticClass, py::return_value_policy::reference)
          ;
}