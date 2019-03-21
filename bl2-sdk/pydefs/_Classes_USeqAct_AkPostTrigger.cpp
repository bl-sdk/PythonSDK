#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_AkPostTrigger()
{
    class_< USeqAct_AkPostTrigger, bases< USequenceAction >  , boost::noncopyable>("USeqAct_AkPostTrigger", no_init)
        .def_readwrite("AkTrigger", &USeqAct_AkPostTrigger::AkTrigger)
        .def("StaticClass", &USeqAct_AkPostTrigger::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}