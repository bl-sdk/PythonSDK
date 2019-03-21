#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTriangleSortSettings()
{
    py::class_< FTriangleSortSettings >("FTriangleSortSettings")
        .def_readwrite("TriangleSorting", &FTriangleSortSettings::TriangleSorting)
        .def_readwrite("CustomLeftRightAxis", &FTriangleSortSettings::CustomLeftRightAxis)
        .def_readwrite("CustomLeftRightBoneName", &FTriangleSortSettings::CustomLeftRightBoneName)
  ;
}