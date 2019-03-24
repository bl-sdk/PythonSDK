#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AKeypoint(py::module &m)
{
    py::class_< AKeypoint,  AActor   >(m, "AKeypoint")
		.def_static("StaticClass", &AKeypoint::StaticClass, py::return_value_policy::reference)
        .def_readwrite("SpriteComp", &AKeypoint::SpriteComp)
          ;
}