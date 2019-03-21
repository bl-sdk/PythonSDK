#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTriangleSortSettings()
{
    class_< FTriangleSortSettings >("FTriangleSortSettings", no_init)
        .def_readwrite("TriangleSorting", &FTriangleSortSettings::TriangleSorting)
        .def_readwrite("CustomLeftRightAxis", &FTriangleSortSettings::CustomLeftRightAxis)
        .def_readwrite("CustomLeftRightBoneName", &FTriangleSortSettings::CustomLeftRightBoneName)
  ;
}