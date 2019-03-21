#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_ConfigureCustomAmbientMusic()
{
    class_< UWillowSeqAct_ConfigureCustomAmbientMusic, bases< USequenceAction >  , boost::noncopyable>("UWillowSeqAct_ConfigureCustomAmbientMusic", no_init)
        .def_readwrite("AmbientMusicAkState", &UWillowSeqAct_ConfigureCustomAmbientMusic::AmbientMusicAkState)
        .def("StaticClass", &UWillowSeqAct_ConfigureCustomAmbientMusic::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}