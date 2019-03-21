#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FContentState()
{
    py::class_< FContentState >("FContentState")
        .def_readwrite("LicensedMask", &FContentState::LicensedMask)
        .def_readwrite("InstalledMask", &FContentState::InstalledMask)
  ;
}