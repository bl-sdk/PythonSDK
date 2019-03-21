#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AKeypoint(py::object m)
{
    py::class_< AKeypoint,  AActor   >(m, "AKeypoint")
        .def_readwrite("SpriteComp", &AKeypoint::SpriteComp)
        .def("StaticClass", &AKeypoint::StaticClass, py::return_value_policy::reference)
          ;
}