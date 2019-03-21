#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_AICombatVolume()
{
    class_< UWillowSeqAct_AICombatVolume, bases< USequenceAction >  , boost::noncopyable>("UWillowSeqAct_AICombatVolume", no_init)
        .def_readwrite("CombatVolume", &UWillowSeqAct_AICombatVolume::CombatVolume)
        .def_readwrite("Option", &UWillowSeqAct_AICombatVolume::Option)
        .def("StaticClass", &UWillowSeqAct_AICombatVolume::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}