#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AMaterialInstanceActor(py::object m)
{
    py::class_< AMaterialInstanceActor,  AActor   >(m, "AMaterialInstanceActor")
        .def_readwrite("MatInst", &AMaterialInstanceActor::MatInst)
        .def("StaticClass", &AMaterialInstanceActor::StaticClass, py::return_value_policy::reference)
          ;
}