#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_ClientFlagSet()
{
    class_< UWillowSeqAct_ClientFlagSet, bases< USequenceAction >  , boost::noncopyable>("UWillowSeqAct_ClientFlagSet", no_init)
        .def_readwrite("ClientFlagName", &UWillowSeqAct_ClientFlagSet::ClientFlagName)
        .def("StaticClass", &UWillowSeqAct_ClientFlagSet::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventActivated", &UWillowSeqAct_ClientFlagSet::eventActivated)
        .staticmethod("StaticClass")
  ;
}