#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_AkPostEvent()
{
    class_< USeqAct_AkPostEvent, bases< USeqAct_Latent >  , boost::noncopyable>("USeqAct_AkPostEvent", no_init)
        .def_readwrite("ActivePlayingIds", &USeqAct_AkPostEvent::ActivePlayingIds)
        .def_readwrite("Event", &USeqAct_AkPostEvent::Event)
        .def("StaticClass", &USeqAct_AkPostEvent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}