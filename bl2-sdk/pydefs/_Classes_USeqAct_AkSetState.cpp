#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_AkSetState()
{
    class_< USeqAct_AkSetState, bases< USequenceAction >  , boost::noncopyable>("USeqAct_AkSetState", no_init)
        .def_readwrite("State", &USeqAct_AkSetState::State)
        .def("StaticClass", &USeqAct_AkSetState::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}