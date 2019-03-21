#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AMaterialInstanceTimeVaryingActor()
{
    py::class_< AMaterialInstanceTimeVaryingActor,  AActor   >("AMaterialInstanceTimeVaryingActor")
        .def_readwrite("MatInst", &AMaterialInstanceTimeVaryingActor::MatInst)
        .def("StaticClass", &AMaterialInstanceTimeVaryingActor::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}