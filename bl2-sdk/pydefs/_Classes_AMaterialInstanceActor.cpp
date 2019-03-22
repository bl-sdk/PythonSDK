#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AMaterialInstanceActor(py::module &m)
{
    py::class_< AMaterialInstanceActor,  AActor   >(m, "AMaterialInstanceActor")
        .def_readwrite("MatInst", &AMaterialInstanceActor::MatInst)
          ;
}