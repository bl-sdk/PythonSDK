#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMaterialReferenceList()
{
    py::class_< FMaterialReferenceList >("FMaterialReferenceList")
        .def_readwrite("TargetMaterial", &FMaterialReferenceList::TargetMaterial)
        .def_readwrite("AffectedMaterialRefs", &FMaterialReferenceList::AffectedMaterialRefs)
        .def_readwrite("AffectedPPChainMaterialRefs", &FMaterialReferenceList::AffectedPPChainMaterialRefs)
  ;
}