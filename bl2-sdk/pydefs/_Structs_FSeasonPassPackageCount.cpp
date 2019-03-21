#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSeasonPassPackageCount()
{
    class_< FSeasonPassPackageCount >("FSeasonPassPackageCount", no_init)
        .def_readwrite("SeasonPassId", &FSeasonPassPackageCount::SeasonPassId)
        .def_readwrite("PackageCount", &FSeasonPassPackageCount::PackageCount)
  ;
}