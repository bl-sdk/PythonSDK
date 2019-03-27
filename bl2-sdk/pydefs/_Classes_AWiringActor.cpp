#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWiringActor(py::module &m)
{
    py::class_< AWiringActor,  AStaticMeshActor   >(m, "AWiringActor")
		.def_static("StaticClass", &AWiringActor::StaticClass, py::return_value_policy::reference)
          ;
}