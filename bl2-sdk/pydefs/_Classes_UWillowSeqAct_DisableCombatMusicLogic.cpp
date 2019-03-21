#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_DisableCombatMusicLogic()
{
    class_< UWillowSeqAct_DisableCombatMusicLogic, bases< USequenceAction >  , boost::noncopyable>("UWillowSeqAct_DisableCombatMusicLogic", no_init)
        .def("StaticClass", &UWillowSeqAct_DisableCombatMusicLogic::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}