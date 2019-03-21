#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FStaggeredRecoveryRotationData()
{
    class_< FStaggeredRecoveryRotationData >("FStaggeredRecoveryRotationData", no_init)
        .def_readwrite("BoneName", &FStaggeredRecoveryRotationData::BoneName)
        .def_readwrite("BoneAxis", &FStaggeredRecoveryRotationData::BoneAxis)
  ;
}