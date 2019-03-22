#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FContentState(py::module &m)
{
    py::class_< FContentState >(m, "FContentState")
        .def_readwrite("LicensedMask", &FContentState::LicensedMask)
        .def_readwrite("InstalledMask", &FContentState::InstalledMask)
  ;
}