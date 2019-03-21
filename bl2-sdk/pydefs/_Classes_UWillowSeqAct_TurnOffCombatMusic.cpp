#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_TurnOffCombatMusic()
{
    class_< UWillowSeqAct_TurnOffCombatMusic, bases< USequenceAction >  , boost::noncopyable>("UWillowSeqAct_TurnOffCombatMusic", no_init)
        .def_readwrite("FadeOutTime", &UWillowSeqAct_TurnOffCombatMusic::FadeOutTime)
        .def("StaticClass", &UWillowSeqAct_TurnOffCombatMusic::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}