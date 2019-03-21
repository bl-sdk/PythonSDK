#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_ApplyBehavior()
{
    class_< USeqAct_ApplyBehavior, bases< USequenceAction >  , boost::noncopyable>("USeqAct_ApplyBehavior", no_init)
        .def_readwrite("Behaviors", &USeqAct_ApplyBehavior::Behaviors)
        .def("StaticClass", &USeqAct_ApplyBehavior::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventApplyBehaviors", &USeqAct_ApplyBehavior::eventApplyBehaviors)
        .staticmethod("StaticClass")
  ;
}