#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_ConfigureBossMusic()
{
    class_< UWillowSeqAct_ConfigureBossMusic, bases< USequenceAction >  , boost::noncopyable>("UWillowSeqAct_ConfigureBossMusic", no_init)
        .def_readwrite("BossAkState", &UWillowSeqAct_ConfigureBossMusic::BossAkState)
        .def("StaticClass", &UWillowSeqAct_ConfigureBossMusic::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}