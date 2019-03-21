#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_AIScriptedFollow()
{
    class_< UWillowSeqAct_AIScriptedFollow, bases< USequenceAction >  , boost::noncopyable>("UWillowSeqAct_AIScriptedFollow", no_init)
        .def_readwrite("ToFollow", &UWillowSeqAct_AIScriptedFollow::ToFollow)
        .def_readwrite("Action", &UWillowSeqAct_AIScriptedFollow::Action)
        .def_readwrite("Stance", &UWillowSeqAct_AIScriptedFollow::Stance)
        .def_readwrite("CatchupDistance", &UWillowSeqAct_AIScriptedFollow::CatchupDistance)
        .def_readwrite("HoldStillDistance", &UWillowSeqAct_AIScriptedFollow::HoldStillDistance)
        .def("StaticClass", &UWillowSeqAct_AIScriptedFollow::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}