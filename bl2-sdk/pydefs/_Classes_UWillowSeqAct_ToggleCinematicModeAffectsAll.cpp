#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_ToggleCinematicModeAffectsAll()
{
    class_< UWillowSeqAct_ToggleCinematicModeAffectsAll, bases< USequenceAction >  , boost::noncopyable>("UWillowSeqAct_ToggleCinematicModeAffectsAll", no_init)
        .def("StaticClass", &UWillowSeqAct_ToggleCinematicModeAffectsAll::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}