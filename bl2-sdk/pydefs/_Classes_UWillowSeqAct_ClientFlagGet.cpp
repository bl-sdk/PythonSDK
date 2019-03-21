#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_ClientFlagGet()
{
    class_< UWillowSeqAct_ClientFlagGet, bases< USequenceAction >  , boost::noncopyable>("UWillowSeqAct_ClientFlagGet", no_init)
        .def_readwrite("ClientFlagName", &UWillowSeqAct_ClientFlagGet::ClientFlagName)
        .def("StaticClass", &UWillowSeqAct_ClientFlagGet::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventActivated", &UWillowSeqAct_ClientFlagGet::eventActivated)
        .staticmethod("StaticClass")
  ;
}