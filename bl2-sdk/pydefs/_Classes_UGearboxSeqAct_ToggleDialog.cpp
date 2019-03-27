#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxSeqAct_ToggleDialog(py::module &m)
{
    py::class_< UGearboxSeqAct_ToggleDialog,  USequenceAction   >(m, "UGearboxSeqAct_ToggleDialog")
		.def_static("StaticClass", &UGearboxSeqAct_ToggleDialog::StaticClass, py::return_value_policy::reference)
          ;
}