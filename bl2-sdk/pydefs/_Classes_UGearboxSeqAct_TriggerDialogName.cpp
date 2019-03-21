#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGearboxSeqAct_TriggerDialogName()
{
    class_< UGearboxSeqAct_TriggerDialogName, bases< UGearboxSeqAct_TriggerDialog >  , boost::noncopyable>("UGearboxSeqAct_TriggerDialogName", no_init)
        .def_readwrite("Group", &UGearboxSeqAct_TriggerDialogName::Group)
        .def("StaticClass", &UGearboxSeqAct_TriggerDialogName::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}