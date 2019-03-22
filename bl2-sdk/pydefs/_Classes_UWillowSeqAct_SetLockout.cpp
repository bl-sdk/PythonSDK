#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_SetLockout(py::module &m)
{
    py::class_< UWillowSeqAct_SetLockout,  USequenceAction   >(m, "UWillowSeqAct_SetLockout")
        .def_readwrite("LockoutDef", &UWillowSeqAct_SetLockout::LockoutDef)
          ;
}