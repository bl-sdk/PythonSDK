#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FClanMaterialData()
{
    py::class_< FClanMaterialData >("FClanMaterialData")
        .def_readwrite("SourceMaterial", &FClanMaterialData::SourceMaterial)
        .def_readwrite("ReplacementMaterial", &FClanMaterialData::ReplacementMaterial)
  ;
}