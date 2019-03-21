#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_BossBar()
{
    class_< UWillowSeqAct_BossBar, bases< USequenceAction >  , boost::noncopyable>("UWillowSeqAct_BossBar", no_init)
        .def_readwrite("BossActor", &UWillowSeqAct_BossBar::BossActor)
        .def("StaticClass", &UWillowSeqAct_BossBar::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventActivated", &UWillowSeqAct_BossBar::eventActivated)
        .staticmethod("StaticClass")
  ;
}