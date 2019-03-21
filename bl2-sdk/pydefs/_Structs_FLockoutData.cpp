#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLockoutData()
{
    py::class_< FLockoutData >("FLockoutData")
        .def_readwrite("LockoutDef", &FLockoutData::LockoutDef)
        .def_readwrite("LockoutTime", &FLockoutData::LockoutTime)
  ;
}