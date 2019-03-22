#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqCond_CheckLockout(py::module &m)
{
    py::class_< UWillowSeqCond_CheckLockout,  USequenceCondition   >(m, "UWillowSeqCond_CheckLockout")
        .def_readwrite("LockoutDef", &UWillowSeqCond_CheckLockout::LockoutDef)
          ;
}