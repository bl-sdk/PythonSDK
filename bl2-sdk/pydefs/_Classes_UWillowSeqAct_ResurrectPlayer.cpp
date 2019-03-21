#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_ResurrectPlayer()
{
    class_< UWillowSeqAct_ResurrectPlayer, bases< USequenceAction >  , boost::noncopyable>("UWillowSeqAct_ResurrectPlayer", no_init)
        .def("StaticClass", &UWillowSeqAct_ResurrectPlayer::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventOnActivated", &UWillowSeqAct_ResurrectPlayer::eventOnActivated)
        .staticmethod("StaticClass")
  ;
}