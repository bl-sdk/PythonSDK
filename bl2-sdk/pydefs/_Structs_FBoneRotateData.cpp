#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBoneRotateData()
{
    py::class_< FBoneRotateData >("FBoneRotateData")
        .def_readwrite("Index", &FBoneRotateData::Index)
        .def_readwrite("Rotation", &FBoneRotateData::Rotation)
  ;
}