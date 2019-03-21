#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCollisionImpactData(py::object m)
{
    py::class_< FCollisionImpactData >(m, "FCollisionImpactData")
        .def_readwrite("ContactInfos", &FCollisionImpactData::ContactInfos)
        .def_readwrite("TotalNormalForceVector", &FCollisionImpactData::TotalNormalForceVector)
        .def_readwrite("TotalFrictionForceVector", &FCollisionImpactData::TotalFrictionForceVector)
  ;
}