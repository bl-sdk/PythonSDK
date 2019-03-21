#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSeasonPassPackageCount(py::object m)
{
    py::class_< FSeasonPassPackageCount >(m, "FSeasonPassPackageCount")
        .def_readwrite("SeasonPassId", &FSeasonPassPackageCount::SeasonPassId)
        .def_readwrite("PackageCount", &FSeasonPassPackageCount::PackageCount)
  ;
}