#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_EnableCombatMusicLogic()
{
    class_< UWillowSeqAct_EnableCombatMusicLogic, bases< USequenceAction >  , boost::noncopyable>("UWillowSeqAct_EnableCombatMusicLogic", no_init)
        .def("StaticClass", &UWillowSeqAct_EnableCombatMusicLogic::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}