#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AStaticMeshActorBase()
{
    py::class_< AStaticMeshActorBase,  AActor   >("AStaticMeshActorBase")
        .def("StaticClass", &AStaticMeshActorBase::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}