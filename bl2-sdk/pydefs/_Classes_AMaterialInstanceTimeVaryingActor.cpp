#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AMaterialInstanceTimeVaryingActor(py::module &m)
{
    py::class_< AMaterialInstanceTimeVaryingActor,  AActor   >(m, "AMaterialInstanceTimeVaryingActor")
		.def_static("StaticClass", &AMaterialInstanceTimeVaryingActor::StaticClass, py::return_value_policy::reference)
        .def_readwrite("MatInst", &AMaterialInstanceTimeVaryingActor::MatInst)
          ;
}