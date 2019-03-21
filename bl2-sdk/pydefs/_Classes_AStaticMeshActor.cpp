#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AStaticMeshActor(py::object m)
{
    py::class_< AStaticMeshActor,  AActor   >(m, "AStaticMeshActor")
        .def_readwrite("StaticMeshComponent", &AStaticMeshActor::StaticMeshComponent)
        .def("StaticClass", &AStaticMeshActor::StaticClass, py::return_value_policy::reference)
          ;
}