#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FUnloadableDlcLockoutData(py::object m)
{
    py::class_< FUnloadableDlcLockoutData >(m, "FUnloadableDlcLockoutData")
        .def_readwrite("LockoutDefName", &FUnloadableDlcLockoutData::LockoutDefName)
        .def_readwrite("LockoutTime", &FUnloadableDlcLockoutData::LockoutTime)
        .def_readwrite("DlcPackageId", &FUnloadableDlcLockoutData::DlcPackageId)
  ;
}