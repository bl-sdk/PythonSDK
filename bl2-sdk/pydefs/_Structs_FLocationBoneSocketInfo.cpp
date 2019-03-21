#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FLocationBoneSocketInfo()
{
    class_< FLocationBoneSocketInfo >("FLocationBoneSocketInfo", no_init)
        .def_readwrite("BoneSocketName", &FLocationBoneSocketInfo::BoneSocketName)
        .def_readwrite("Offset", &FLocationBoneSocketInfo::Offset)
  ;
}