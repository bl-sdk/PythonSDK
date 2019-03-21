#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_ColiseumRoundAnnounce()
{
    class_< UWillowSeqAct_ColiseumRoundAnnounce, bases< USequenceAction >  , boost::noncopyable>("UWillowSeqAct_ColiseumRoundAnnounce", no_init)
        .def("StaticClass", &UWillowSeqAct_ColiseumRoundAnnounce::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventActivated", &UWillowSeqAct_ColiseumRoundAnnounce::eventActivated)
        .staticmethod("StaticClass")
  ;
}