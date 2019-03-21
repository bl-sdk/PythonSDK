#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWiringActor()
{
    py::class_< AWiringActor,  AStaticMeshActor   >("AWiringActor")
        .def("StaticClass", &AWiringActor::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}