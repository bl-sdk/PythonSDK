#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxSeqAct_ToggleDialog()
{
    py::class_< UGearboxSeqAct_ToggleDialog,  USequenceAction   >("UGearboxSeqAct_ToggleDialog")
        .def("StaticClass", &UGearboxSeqAct_ToggleDialog::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}