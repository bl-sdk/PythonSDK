#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AStaticMeshActor(py::module &m)
{
    py::class_< AStaticMeshActor,  AActor   >(m, "AStaticMeshActor")
        .def_readwrite("StaticMeshComponent", &AStaticMeshActor::StaticMeshComponent)
          ;
}