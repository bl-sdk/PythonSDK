#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FClanMaterialData()
{
    class_< FClanMaterialData >("FClanMaterialData", no_init)
        .def_readwrite("SourceMaterial", &FClanMaterialData::SourceMaterial)
        .def_readwrite("ReplacementMaterial", &FClanMaterialData::ReplacementMaterial)
  ;
}