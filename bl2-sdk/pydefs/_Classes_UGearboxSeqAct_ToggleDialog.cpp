#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGearboxSeqAct_ToggleDialog()
{
    class_< UGearboxSeqAct_ToggleDialog, bases< USequenceAction >  , boost::noncopyable>("UGearboxSeqAct_ToggleDialog", no_init)
        .def("StaticClass", &UGearboxSeqAct_ToggleDialog::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}