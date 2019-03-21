#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPathSizeInfo()
{
    class_< FPathSizeInfo >("FPathSizeInfo", no_init)
        .def_readwrite("Desc", &FPathSizeInfo::Desc)
        .def_readwrite("Radius", &FPathSizeInfo::Radius)
        .def_readwrite("Height", &FPathSizeInfo::Height)
        .def_readwrite("CrouchHeight", &FPathSizeInfo::CrouchHeight)
        .def_readwrite("PathColor", &FPathSizeInfo::PathColor)
  ;
}