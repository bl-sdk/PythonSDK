#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCollisionImpactData()
{
    class_< FCollisionImpactData >("FCollisionImpactData", no_init)
        .def_readwrite("ContactInfos", &FCollisionImpactData::ContactInfos)
        .def_readwrite("TotalNormalForceVector", &FCollisionImpactData::TotalNormalForceVector)
        .def_readwrite("TotalFrictionForceVector", &FCollisionImpactData::TotalFrictionForceVector)
  ;
}