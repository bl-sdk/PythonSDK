#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPhysicalMaterialTireModel()
{
    class_< FPhysicalMaterialTireModel >("FPhysicalMaterialTireModel", no_init)
        .def_readwrite("PhysMaterial", &FPhysicalMaterialTireModel::PhysMaterial)
        .def_readwrite("LongGripScaler", &FPhysicalMaterialTireModel::LongGripScaler)
        .def_readwrite("LatGripScaler", &FPhysicalMaterialTireModel::LatGripScaler)
  ;
}