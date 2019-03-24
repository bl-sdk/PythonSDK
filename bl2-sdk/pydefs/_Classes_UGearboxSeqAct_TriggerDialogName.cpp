#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxSeqAct_TriggerDialogName(py::module &m)
{
    py::class_< UGearboxSeqAct_TriggerDialogName,  UGearboxSeqAct_TriggerDialog   >(m, "UGearboxSeqAct_TriggerDialogName")
		.def_static("StaticClass", &UGearboxSeqAct_TriggerDialogName::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Group", &UGearboxSeqAct_TriggerDialogName::Group)
          ;
}