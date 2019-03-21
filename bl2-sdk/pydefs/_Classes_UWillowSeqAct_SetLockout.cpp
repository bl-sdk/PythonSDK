#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_SetLockout()
{
    py::class_< UWillowSeqAct_SetLockout,  USequenceAction   >("UWillowSeqAct_SetLockout")
        .def_readwrite("LockoutDef", &UWillowSeqAct_SetLockout::LockoutDef)
        .def("StaticClass", &UWillowSeqAct_SetLockout::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}