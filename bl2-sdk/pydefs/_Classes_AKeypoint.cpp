#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AKeypoint()
{
    py::class_< AKeypoint,  AActor   >("AKeypoint")
        .def_readwrite("SpriteComp", &AKeypoint::SpriteComp)
        .def("StaticClass", &AKeypoint::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}