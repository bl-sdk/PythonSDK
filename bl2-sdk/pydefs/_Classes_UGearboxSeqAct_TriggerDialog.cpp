#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxSeqAct_TriggerDialog(py::module &m)
{
    py::class_< UGearboxSeqAct_TriggerDialog,  USeqAct_Latent   >(m, "UGearboxSeqAct_TriggerDialog")
        .def_readwrite("Other", &UGearboxSeqAct_TriggerDialog::Other)
        .def_readwrite("EventTag", &UGearboxSeqAct_TriggerDialog::EventTag)
        .def_readwrite("NameTag", &UGearboxSeqAct_TriggerDialog::NameTag)
        .def_readwrite("EventData", &UGearboxSeqAct_TriggerDialog::EventData)
        .def_readwrite("MyDataUseCount", &UGearboxSeqAct_TriggerDialog::MyDataUseCount)
          ;
}