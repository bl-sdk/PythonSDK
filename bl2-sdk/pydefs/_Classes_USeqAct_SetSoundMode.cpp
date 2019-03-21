#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_SetSoundMode()
{
    class_< USeqAct_SetSoundMode, bases< USequenceAction >  , boost::noncopyable>("USeqAct_SetSoundMode", no_init)
        .def_readwrite("SoundMode", &USeqAct_SetSoundMode::SoundMode)
        .def("StaticClass", &USeqAct_SetSoundMode::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetObjClassVersion", &USeqAct_SetSoundMode::eventGetObjClassVersion)
        .def("eventActivated", &USeqAct_SetSoundMode::eventActivated)
        .staticmethod("StaticClass")
  ;
}