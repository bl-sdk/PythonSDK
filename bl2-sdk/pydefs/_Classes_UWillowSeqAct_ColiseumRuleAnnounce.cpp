#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_ColiseumRuleAnnounce()
{
    class_< UWillowSeqAct_ColiseumRuleAnnounce, bases< USequenceAction >  , boost::noncopyable>("UWillowSeqAct_ColiseumRuleAnnounce", no_init)
        .def("StaticClass", &UWillowSeqAct_ColiseumRuleAnnounce::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventActivated", &UWillowSeqAct_ColiseumRuleAnnounce::eventActivated)
        .staticmethod("StaticClass")
  ;
}