#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AMaterialInstanceActor()
{
    py::class_< AMaterialInstanceActor,  AActor   >("AMaterialInstanceActor")
        .def_readwrite("MatInst", &AMaterialInstanceActor::MatInst)
        .def("StaticClass", &AMaterialInstanceActor::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}