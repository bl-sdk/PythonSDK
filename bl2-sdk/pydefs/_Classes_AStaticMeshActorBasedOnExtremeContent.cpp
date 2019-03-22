#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AStaticMeshActorBasedOnExtremeContent(py::module &m)
{
    py::class_< AStaticMeshActorBasedOnExtremeContent,  AActor   >(m, "AStaticMeshActorBasedOnExtremeContent")
        .def_readwrite("StaticMeshComponent", &AStaticMeshActorBasedOnExtremeContent::StaticMeshComponent)
        .def_readwrite("ExtremeContent", &AStaticMeshActorBasedOnExtremeContent::ExtremeContent)
        .def_readwrite("NonExtremeContent", &AStaticMeshActorBasedOnExtremeContent::NonExtremeContent)
        .def("SetMaterialBasedOnExtremeContent", &AStaticMeshActorBasedOnExtremeContent::SetMaterialBasedOnExtremeContent)
        .def("eventPostBeginPlay", &AStaticMeshActorBasedOnExtremeContent::eventPostBeginPlay)
          ;
}