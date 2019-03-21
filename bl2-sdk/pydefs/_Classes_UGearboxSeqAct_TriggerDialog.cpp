#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGearboxSeqAct_TriggerDialog()
{
    class_< UGearboxSeqAct_TriggerDialog, bases< USeqAct_Latent >  , boost::noncopyable>("UGearboxSeqAct_TriggerDialog", no_init)
        .def_readwrite("Other", &UGearboxSeqAct_TriggerDialog::Other)
        .def_readwrite("EventTag", &UGearboxSeqAct_TriggerDialog::EventTag)
        .def_readwrite("NameTag", &UGearboxSeqAct_TriggerDialog::NameTag)
        .def_readwrite("EventData", &UGearboxSeqAct_TriggerDialog::EventData)
        .def_readwrite("MyDataUseCount", &UGearboxSeqAct_TriggerDialog::MyDataUseCount)
        .def("StaticClass", &UGearboxSeqAct_TriggerDialog::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}