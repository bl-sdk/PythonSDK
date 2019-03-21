#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPhysicalMaterialTireModel()
{
    py::class_< FPhysicalMaterialTireModel >("FPhysicalMaterialTireModel")
        .def_readwrite("PhysMaterial", &FPhysicalMaterialTireModel::PhysMaterial)
        .def_readwrite("LongGripScaler", &FPhysicalMaterialTireModel::LongGripScaler)
        .def_readwrite("LatGripScaler", &FPhysicalMaterialTireModel::LatGripScaler)
  ;
}