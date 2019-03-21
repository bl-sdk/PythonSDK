#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FMaterialReferenceList()
{
    class_< FMaterialReferenceList >("FMaterialReferenceList", no_init)
        .def_readwrite("TargetMaterial", &FMaterialReferenceList::TargetMaterial)
        .def_readwrite("AffectedMaterialRefs", &FMaterialReferenceList::AffectedMaterialRefs)
        .def_readwrite("AffectedPPChainMaterialRefs", &FMaterialReferenceList::AffectedPPChainMaterialRefs)
  ;
}