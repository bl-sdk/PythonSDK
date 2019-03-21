#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqCond_CheckLockout()
{
    py::class_< UWillowSeqCond_CheckLockout,  USequenceCondition   >("UWillowSeqCond_CheckLockout")
        .def_readwrite("LockoutDef", &UWillowSeqCond_CheckLockout::LockoutDef)
        .def("StaticClass", &UWillowSeqCond_CheckLockout::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}