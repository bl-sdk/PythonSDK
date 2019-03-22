#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AMaterialInstanceTimeVaryingActor(py::module &m)
{
    py::class_< AMaterialInstanceTimeVaryingActor,  AActor   >(m, "AMaterialInstanceTimeVaryingActor")
        .def_readwrite("MatInst", &AMaterialInstanceTimeVaryingActor::MatInst)
        .def("StaticClass", &AMaterialInstanceTimeVaryingActor::StaticClass, py::return_value_policy::reference)
          ;
}