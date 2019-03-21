#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_MITV_Activate()
{
    class_< USeqAct_MITV_Activate, bases< USequenceAction >  , boost::noncopyable>("USeqAct_MITV_Activate", no_init)
        .def_readwrite("DurationOfMITV", &USeqAct_MITV_Activate::DurationOfMITV)
        .def("StaticClass", &USeqAct_MITV_Activate::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventActivated", &USeqAct_MITV_Activate::eventActivated)
        .def("eventGetObjClassVersion", &USeqAct_MITV_Activate::eventGetObjClassVersion)
        .staticmethod("StaticClass")
  ;
}