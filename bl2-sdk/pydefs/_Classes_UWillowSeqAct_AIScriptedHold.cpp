#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_AIScriptedHold()
{
    class_< UWillowSeqAct_AIScriptedHold, bases< USequenceAction >  , boost::noncopyable>("UWillowSeqAct_AIScriptedHold", no_init)
        .def_readwrite("Option", &UWillowSeqAct_AIScriptedHold::Option)
        .def("StaticClass", &UWillowSeqAct_AIScriptedHold::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}