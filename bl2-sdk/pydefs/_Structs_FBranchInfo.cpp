#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBranchInfo()
{
    class_< FBranchInfo >("FBranchInfo", no_init)
        .def_readwrite("BoneName", &FBranchInfo::BoneName)
        .def_readwrite("PerBoneWeightIncrease", &FBranchInfo::PerBoneWeightIncrease)
  ;
}