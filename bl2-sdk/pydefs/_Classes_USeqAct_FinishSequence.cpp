#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_FinishSequence()
{
    class_< USeqAct_FinishSequence, bases< USequenceAction >  , boost::noncopyable>("USeqAct_FinishSequence", no_init)
        .def_readwrite("OutputLabel", &USeqAct_FinishSequence::OutputLabel)
        .def("StaticClass", &USeqAct_FinishSequence::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}