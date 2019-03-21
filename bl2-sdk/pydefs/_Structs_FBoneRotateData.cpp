#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBoneRotateData()
{
    class_< FBoneRotateData >("FBoneRotateData", no_init)
        .def_readwrite("Index", &FBoneRotateData::Index)
        .def_readwrite("Rotation", &FBoneRotateData::Rotation)
  ;
}