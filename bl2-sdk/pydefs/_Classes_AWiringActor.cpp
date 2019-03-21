#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWiringActor(py::object m)
{
    py::class_< AWiringActor,  AStaticMeshActor   >(m, "AWiringActor")
        .def("StaticClass", &AWiringActor::StaticClass, py::return_value_policy::reference)
          ;
}