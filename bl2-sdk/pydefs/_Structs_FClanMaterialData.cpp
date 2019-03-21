#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FClanMaterialData(py::object m)
{
    py::class_< FClanMaterialData >(m, "FClanMaterialData")
        .def_readwrite("SourceMaterial", &FClanMaterialData::SourceMaterial)
        .def_readwrite("ReplacementMaterial", &FClanMaterialData::ReplacementMaterial)
  ;
}