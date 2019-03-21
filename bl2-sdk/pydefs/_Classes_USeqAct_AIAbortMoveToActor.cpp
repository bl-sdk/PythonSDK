#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_AIAbortMoveToActor()
{
    class_< USeqAct_AIAbortMoveToActor, bases< USequenceAction >  , boost::noncopyable>("USeqAct_AIAbortMoveToActor", no_init)
        .def("StaticClass", &USeqAct_AIAbortMoveToActor::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}